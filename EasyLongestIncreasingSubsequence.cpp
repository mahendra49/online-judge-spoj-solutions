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
int solve(int arr[], int n){
  int dp[n],max_count=1;
  rep(i,n)
    dp[i]=1;
  repin(i,1,n-1){
    for(int j=0;j<i;j++){
      if(arr[i]>arr[j] and dp[i]<dp[j]+1)
          dp[i]=dp[j]+1;
    }
    max_count=max(max_count,dp[i]);
  }
  return max_count;
}
int main(){
//  freopen("input.txt", "r", stdin);
  int T,arr[1234];
  cin>>T;
  rep(i,T)
    cin>>arr[i];
  cout<<solve(arr,T)<<endl;
return(0);
} 