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
#define MAX 100000
int arr[ MAX + 1 ], tree[ 4 * MAX + 1 ], lazy[ 4 * MAX + 1 ];
bool primes[ 2000001 ];
void lazypropogate(int index, int start, int end ) {
    if(lazy[index]){
    	if(primes[lazy[index]])
    		tree[index]=end-start+1;
    	else
    		tree[index]=0;
    	if(start!=end){
    		lazy[2*index]=lazy[index];
    		lazy[2*index+1]=lazy[index];
    	}
    	lazy[index]=0;
    }
}
void build( int index, int start, int end ) {
    if ( start==end ) {
        if ( primes[ arr[ start ] ] ) {
            tree[ index ] = 1;
        }
        else {
            tree[ index ] = 0;
        }
        lazy[ index ] = 0;
    }
    else {
        build( index * 2, start, ( start + end ) / 2 );
        build( index * 2 + 1, ( start + end ) / 2 + 1, end );
        tree[ index ] = tree[ index * 2 ] + tree[ index * 2 + 1 ];
        lazy[ index ] = 0;
    }
}
void update( int index, int start, int end, int l, int r, int val ) {
    lazypropogate(index,start,end);
    if(start>end or r<start or end<l) return;
    if(l<=start and end<=r){
    	if(primes[val]==true){
    		tree[index]=(end-start+1);
    	}
    	else
    		tree[index]=0;
    	
    	if(start!=end){
    		lazy[2*index]=val;
    		lazy[2*index+1]=val;
    	}
    	lazy[index]=0;
    	return;
    } 
    int mid=(start+end)>>1;
    update(2*index,start,mid,l,r,val);
    update(2*index+1,mid+1,end,l,r,val);
    tree[index]=tree[2*index]+tree[2*index+1];
 }
int query( int index, int start, int end, int l, int r ) {
	if(start>end or r<start or end<l) return 0;
	lazypropogate(index,start,end);
	if(l<=start and end<=r) return tree[index];
	int mid=(start+end)>>1;
	return query(2*index,start,mid,l,r)+query(2*index+1,mid+1,end,l,r);
}
int main(){
  //freopen("input.txt", "r", stdin);
  int i, j, t, N, M, op, l, r, val, k;
    for ( i = 0; i <= 1000000; ++i ) {
        primes[ i ] = true;
    }
    for(int i=2;i*i<=1000000;i++)
    	if(primes[i])
    		for (int j = i; i*j <= 1000000 ; ++j)
    	     	primes[i*j]=false;
  int T;
  scanf("%d",&T);
  for(int k=1;k<=T;k++){
    int n,q;
  	scanf("%d%d",&n,&q);  	
  	rep(i,n) scanf("%d",&arr[i]);
  	build(1,0,n-1);
  	printf("Case %d:\n",k);
  	//printf("Case %d:\n", k );
  	//rep(i,2*n+2) cout<<tree[i]<<" ";
  	//cout<<"here"<<endl;
  	//rep(i,n) cout<<primes[arr[i]]<<" ";
  	while(q--){
  		int qq,l,r,val;
  		scanf("%d%d%d",&qq,&l,&r);
  		
  		if(qq==1){
  			printf("%d\n",query(1,0,n-1,l-1,r-1));
  			
  		}
  		else{
  			scanf("%d",&val);
  			update(1,0,n-1,l-1,r-1,val);
  		}
  	}
  }
return(0);
} 