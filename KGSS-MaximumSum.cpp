/*mahendra25---PVPSIT-IT
IT ONLY HAS TO WORK ONCE!
*/
#include<bits/stdc++.h>
using namespace std;
#define pi 3.14159265358979323846264338327950
const int N=1e6+20,mod=(int)(1e9)+7;
#define pb push_back
#define ull unsigned long long
#define rep(i,n) for(int i=0;i<(int)(n);++i)
#define repin(i,j,k) for(int i=j;i<=(int)(k);++i) 
int arr[123456];
struct node{
	int maxsum,sum;
	void merge(node A,node B){
		maxsum=max(A.maxsum,B.maxsum);
		if(maxsum==A.maxsum) sum=max(A.sum,B.maxsum);
		else sum=max(B.sum,A.maxsum);
	}
};
node tree[4*123456];
void build(int index,int start,int end){
	if(start==end){tree[index].maxsum=arr[start],tree[index].sum=INT_MIN; return;}
	int mid=(start+end)/2;
	build(2*index,start,mid);
	build(2*index+1,mid+1,end);
	tree[index].merge(tree[2*index],tree[2*index+1]);
}
node query(int index,int start,int end,int l,int r){
	node result;
	if(start>end or r<start or end<l) return result;
	if(l<=start and end<=r) return tree[index];
	int mid=(start+end)>>1;
	node left=query(2*index,start,mid,l,r);
	node right=query(2*index+1,mid+1,end,l,r);
	result.merge(left,right);
	return result;
}
void update(int index,int start,int end,int idx,int val){//point update
	if(start>end) return ;
	if(start==end){tree[index].maxsum=val;tree[index].sum=INT_MIN;return;}
	int mid=(start+end)/2;
	if(start<=idx and idx<=mid)
		update(2*index,start,mid,idx,val);
	else
		update(2*index+1,mid+1,end,idx,val);
	tree[index].merge(tree[2*index],tree[2*index+1]);
}
int main(){
  freopen("input.txt", "r", stdin);
  int n,qq;
  cin>>n;
  rep(i,n) cin>>arr[i];
  build(1,0,n-1);
  cin>>qq;
  while(qq--){
  	char c;
  	int a,b;
  	cin>>c;
  	cin>>a>>b;
  	a--,b--;
  	//cout<<c<<" "<<a<<" "<<b<<endl;
  	if(c=='Q'){
  		node ans=query(1,0,n-1,a,b);
  		cout<<ans.maxsum+ans.sum<<endl;
  	}
  	else
  		update(1,0,n-1,a,b+1);
  }
return(0);
} 