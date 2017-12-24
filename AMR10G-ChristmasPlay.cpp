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
int main(){
  //freopen("input.txt", "r", stdin);
  int T;
  cin>>T;
  while(T--){
    long n,q,ans=0;
    cin>>n>>q;
    long arr[n];
    rep(i,n) scanf("%ld",&arr[i]);
    sort(arr,arr+n);//sort(arr,arr+n);
    ans=LONG_MAX;
    for(long i=0;i+q-1<n;i++)
    	ans=min(ans,arr[q+i-1]-arr[i]);
    cout<<ans<<endl;

  }
return(0);
} 