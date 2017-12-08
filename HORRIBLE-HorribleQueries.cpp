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
#define rep(i,n) for(ll i=0;i<(ll)(n);++i)
#define repin(i,j,k) for(int i=j;i<=(int)(k);++i) 
vector<long long> tree(1234567,0);
vector<long long> lazy(1234567,0);
void updaterange(ll node,ll start,ll end,ll l,ll r,ll val){
	if(lazy[node]){
		tree[node]+=(end-start+1)*lazy[node];
		if(start!=end){
			lazy[2*node]+=lazy[node];
			lazy[2*node+1]+=lazy[node];
		}
		lazy[node]=0;
	}
	if(start > end or start > r or end <l ) return;
	if(l<=start and end<=r){
		tree[node]+=(end-start+1)*(val);
		if(start!=end){
			lazy[2*node]+=val;
			lazy[2*node+1]+=val;
		}
		lazy[node]=0;
		return;
	}
	ll mid=(start+end)/2;
	updaterange(2*node,start,mid,l,r,val);
	updaterange(2*node+1,mid+1,end,l,r,val);
	tree[node]=tree[2*node]+tree[2*node+1];
}
ll query(ll node,ll start,ll end,ll l,ll r){
	if(r < start or end<l) return 0;
	if(lazy[node]){
		tree[node]+=(end-start+1)*lazy[node];
		if(start!=end){
			lazy[2*node]+=lazy[node];
			lazy[2*node+1]+=lazy[node];
		}
		lazy[node]=0;
	}
	if(l<=start and end<=r ) return tree[node];
	ll mid=(start+end)/2;
	ll p1=query(2*node,start,mid,l,r);
	ll p2=query(2*node+1,mid+1,end,l,r);
	return (p1+p2);
} 	
int main(){
 // freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int T;
  cin>>T;
  while(T--){
    fill(tree.begin(), tree.end(), 0);
    fill(lazy.begin(), lazy.end(), 0);
    ll n,t;
   	cin>>n>>t;
   	while(t--){
   		ll tp,l,r,val;
   		cin>>tp;
   		if(tp==0){
   			//cout<<"ok";
   			cin>>l>>r>>val;
   			updaterange(1,0,n-1,l-1,r-1,val);
   		}
   		else{
   			//cout<<"ok";
   			cin>>l>>r;
   			cout<<query(1,0,n-1,l-1,r-1)<<endl;
   		}
   	}
  }
return(0);
} 
/*
560
560
534
508
382
268
174
80

*/