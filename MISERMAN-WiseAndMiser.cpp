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
int arr[600][600];
int dp[600][600];
int n,q;
int solve(int row,int col){
	if(row > n or col <=0 or col > q or row <0) return INT_MAX;
	if(row==n) return arr[row][col];
	if(dp[row][col]!=0) return dp[row][col];
	int ans= min(solve(row+1,col),min(solve(row+1,col-1),solve(row+1,col+1)))+arr[row][col];
	dp[row][col]=ans;
	return ans;
}
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w+", stdout);
    cin>>n>>q;
    repin(i,1,n)
  		repin(j,1,q)
  			cin>>arr[i][j];

  	int ans=INT_MAX;
  	repin(i,1,n+10)
  		repin(j,1,q+10)
  			dp[i][j]=0;
  	repin(i,1,q)
  		ans=min(ans,solve(1,i));
  		
  	
  	cout<<ans<<endl;
  
return(0);
} 