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
typedef long intl;
#define rep(i,n) for(intl i=0;i<(intl)(n);++i) 
intl A[123456],tree[1234567];
void segtree(intl node,intl start,intl end){
	if(start>end) return ;
	if(start==end) {tree[node]=A[start];return;}
	intl mid=(start+end)/2;
	segtree(2*node,start,mid);
	segtree(2*node+1,mid+1,end);
	tree[node]=min(tree[2*node],tree[2*node+1]);
}
intl query(intl node,intl start,intl end,intl l,intl r){
	if(start > r or end < l) return 1e10+5;
	if(start>=l and end<=r) return (tree[node]);
	intl mid=(start+end)/2;
	intl p1=query(2*node,start,mid,l,r);
	intl p2=query(2*node+1,mid+1,end,l,r);
	return (min(p1,p2));
}
int main(){
  //freopen("input.txt", "r", stdin);
  ios_base::sync_with_stdio(false);
  intl T;
  cin>>T;
  rep(i,T){
    intl soa,qq;
    cin>>soa>>qq;
    for(intl i=0;i<soa;i++)
    	cin>>A[i];
    segtree(1,0,soa-1);
    intl l,r;
   // rep(i,55) cout<<tree[i]<<" ";
  //  cout<<endl;
    cout<<"Scenario #"<<i+1<<":"<<endl;
    while(qq--){
    	cin>>l>>r;
    	cout<<query(1,0,soa-1,l-1,r-1)<<endl;
    }

  }
return(0);
} 