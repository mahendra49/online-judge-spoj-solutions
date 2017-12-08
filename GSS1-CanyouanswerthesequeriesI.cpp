/*mahendra25---PVPSIT-IT
IT ONLY HAS TO WORK ONCE!
*/
#include<bits/stdc++.h>
using namespace std;
#define pi 3.14159265358979323846264338327950
const int N=1e6+20,mod=(int)(1e9)+7;
#define pb push_back
#define ull unsigned long long
#define ll long long
#define rep(i,n) for(int i=0;i<(int)(n);++i)
#define repin(i,j,k) for(int i=j;i<=(int)(k);++i)
int A[123456]; 
class node{
public:
	int sum,best,premax,sufmax;
	node(){
		sum=best=premax=sufmax=-1;
	}
	void merge(node left,node right){
		sum=left.sum+right.sum;
		premax=max(left.premax,right.premax+left.sum);
		sufmax=max(right.sufmax,left.sufmax+right.sum);
		best=max(premax,max(sufmax,max(left.best,max(right.best,left.sufmax+right.premax))));
	}
};
node tree[4*100000];
void build(int index,int start,int end){
	if(start > end) //out of range
		return;
	if(start==end){tree[index].best=tree[index].sum=tree[index].sufmax=tree[index].premax=A[start];return;}//leaf index
	int mid=(start+end)/2;
	build(2*index,start,mid);
	build(2*index+1,mid+1,end);
	tree[index].merge(tree[2*index],tree[2*index+1]);
}
node query(int index,int start,int end,int l,int r){
	node result;
	if(start>r or end < l ) return result;
	if(l <= start and end <=r) return tree[index];
	int mid=(start+end)/2;
	if(l>mid) return query(2*index+1,mid+1,end,l,r);
	if(r<=mid) return query(2*index,start,mid,l,r);
	//node lr=query(2*index,start,mid,l,r);
	//node rr=query(2*index+1,mid+1,end,l,r);
	result.merge(query(2*index,start,mid,l,r),query(2*index+1,mid+1,end,l,r));
	return result;
}
int main(){
  //freopen("input.txt", "r", stdin);
  int T;
  cin>>T;
  rep(i,T) cin>>A[i];
  build(1,0,T-1);
  int qq;
  cin>>qq;//BPP
  //rep(i,100) cout<<tree[i].best<<" ";
  while(qq--){
  	int l,r;
  	cin>>l>>r;
    cout<<query(1,0,T-1,l-1,r-1).best<<endl;
  }
return(0);
} 