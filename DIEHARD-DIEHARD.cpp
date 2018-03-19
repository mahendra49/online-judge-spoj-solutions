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
int dp[1000][1000]; 
int solve(int n,int q){
	if(n<=0 or q<=0) return -1;
	if(dp[n][q]!=-1) return dp[n][q];
	return dp[n][q] = max(solve(n-17,q+7),solve(n-2,q-8))+2;
}
int main(){
//freopen("input.txt", "r", stdin);
    int T;
    cin>>T;
    while(T--){
  		int n,q;
  		cin>>n>>q;
  		memset(dp,-1,sizeof(dp));
  		cout<<solve(n,q)<<endl;
  		/*
  		1- for air
  		2-water
  		3-fire
  		*/  	
    }
return(0);
} 