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
int arr[123456];
struct node{
	int sum,sumsq,l_type,lazy;
	node(){
		l_type=-1;
		lazy=0;
	}
	void merge(node l,node r){
		sum=l.sum+r.sum;
		sumsq=l.sumsq+r.sumsq;
	}
};
node tree[4*123456];
void build(int index,int start,int end){
	if(start>end) return;
	if(start==end){
		tree[index].sum=arr[start];
		tree[index].sumsq=arr[start]*arr[start];
		return;
	}
	int mid=(start+end)/2;
	build(2*index,start,mid);
	build(2*index+1,mid+1,end);
	tree[index].merge(tree[2*index],tree[2*index+1]);
}
void check(int index,int start,int end){
	if(tree[index].l_type!=-1){
		if(tree[index].l_type==1){
			//type 1 lazy
			tree[index].sumsq+=2*tree[index].sum*tree[index].lazy+(end-start+1)*tree[index].lazy*tree[index].lazy;
			tree[index].sum+=(end-start+1)*tree[index].lazy;
		}
		else {
			//type 0 lazy
			tree[index].sumsq=(end-start+1)*tree[index].lazy*tree[index].lazy;
			tree[index].sum=(end-start+1)*tree[index].lazy;
		}
		if(start!=end){
			tree[2*index].l_type=tree[index].l_type;
			tree[2*index+1].l_type=tree[index].l_type;
			tree[2*index].lazy=tree[index].lazy;
			tree[2*index+1].lazy=tree[index].lazy;
		}
		tree[index].lazy=0;
		tree[index].l_type=-1;
	}
}
void update(int index,int start,int end,int l,int r,int val,int qtype){
	check(index,start,end);
	if(start>end or r<start or end<l) return ;
	if(l<=start and end<=r){
		if(qtype==1){
			tree[index].sumsq+=2*tree[index].sum*val+(end-start+1)*val*val;
			tree[index].sum+=(end-start+1)*val;
		}
		else {
			tree[index].sumsq=(end-start+1)*val*val;
			tree[index].sum=(end-start+1)*val;
		}
		if(start!=end){
			tree[2*index].l_type=qtype;
			tree[2*index+1].l_type=qtype;
			tree[2*index].lazy=val;
			tree[2*index+1].lazy=val;
		}
		return;
	}
	int mid=(start+end)>>1;
	update(2*index,start,mid,l,r,val,qtype);
	update(2*index+1,mid+1,end,l,r,val,qtype);	
	tree[index].merge(tree[2*index],tree[2*index+1]);
}
node query(int index,int start,int end,int l,int r){
	node result;
	if(start>end or r<start or end<l) return result;
	check(index,start,end);
	if(l<=start and end<=r)
		return tree[index];
	int mid=(start+end)>>1;
	node left=query(2*index,start,mid,l,r);
	node right=query(2*index+1,mid+1,end,l,r);
	result.merge(left,right);
	return result;
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int T;
  cin>>T;
  for(int tc=1;tc<=T;tc++){
    int n,q;
    cin>>n>>q;
    rep(i,n) cin>>arr[i];
    build(1,0,n-1);
    printf("Case %d:\n",tc);
    while(q--){
    	int qtype,l,r,val;
    	cin>>qtype>>l>>r;
    	if(qtype==2){
    		cout<<query(1,0,n-1,l-1,r-1).sumsq<<endl;
    	}
    	else{
    		cin>>val;
    		update(1,0,n-1,l-1,r-1,val,qtype);
    	}
    }
  }
return(0);
} 