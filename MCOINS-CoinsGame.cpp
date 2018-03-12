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
int dp[1234567];
int main(){
  //freopen("input.txt", "r", stdin);
  long n,m,k;
  cin>>n>>k>>m;
  long arr[m];
  long mx=0;
  rep(i,m){
  	long x;
  	cin>>x;
  	mx=max(mx,x);
  	arr[i]=x;
  }
  dp[1]=1;
  for(int i=2;i<=mx;i++) {
  	if(dp[i-1]==0)
  		dp[i]=1;
  	if(i-n>=0 and dp[i-n]==0)
  		dp[i]=1;
  	if(i-k>=0 and dp[i-k]==0)
  		dp[i]=1;
  }
  for(int i=0;i<m;i++){
  	if(dp[arr[i]])
  		cout<<"A";
  	else
  		cout<<"B";
  }
  
return(0);
} 