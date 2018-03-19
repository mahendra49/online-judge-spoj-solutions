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
#define mod 1000000007 
int main(){
//freopen("input.txt", "r", stdin);
    int T;
    cin>>T;
    while(T--){
  		string s;
  		cin>>s;
  		int dp[s.length()+5]={0},last[500];
      memset(last,-1,sizeof(last));
  		dp[0]=1;
      for(int i=1;i<=s.length();i++){
        dp[i]=(dp[i-1]*2);
        if(dp[i] >= mod) dp[i] -= mod;
        if(last[s[i-1]]!=-1){
            dp[i]=(dp[i]-dp[last[s[i-1]]]);
            if(dp[i] < 0) dp[i] += mod;
        }
        last[s[i-1]]=i-1;

      }
      cout<<dp[s.length()]<<endl;
    }
return(0);
} 