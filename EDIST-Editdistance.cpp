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
int solveme(string a,string b){
	int dp[a.length()+1][b.length()+1];
	repin(i,0,a.length()){
		repin(j,0,b.length()){
			if(i==0)
				dp[i][j]=j;
			else if(j==0)
				dp[i][j]=i;
			else if(a[i-1]==b[j-1])
				dp[i][j]=dp[i-1][j-1];
			else
				dp[i][j]=min(min(dp[i-1][j],dp[i][j-1]),dp[i-1][j-1])+1;
		}
	}
	return dp[a.length()][b.length()];
}
int main(){
  //freopen("input.txt", "r", stdin);
  int T;
  cin>>T;
  while(T--){
    string a,b;
    cin>>a>>b;
    cout<<solveme(a,b)<<endl;
  }
return(0);
} 