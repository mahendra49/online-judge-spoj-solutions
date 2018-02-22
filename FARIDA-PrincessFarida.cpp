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
long long dp[10000];
long long arr[10000];
long long solve(long long start,long long end){
	long long ans1,ans2;
	if(start>end) return 0;
	if(start==end) return arr[start];
	if(dp[start]!=0) return dp[start];
	else{
		 ans1=solve(start+2,end);
		 ans2=solve(start+3,end);
		 dp[start+2]=ans1;
		 dp[start+3]=ans2;
	}
	return max(ans1,ans2)+arr[start];
}
int main(){
  //freopen("input.txt", "r", stdin);
  int T;
  cin>>T;
  
  rep(i,T){
    	int n;
    	cin>>n;
    	if(n==0) {cout<<"Case "<<i+1<<": 0"<<endl;;continue;}
    	//int arr[n];
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
    	for(int i=0;i<10000;i++)
    		dp[i]=0;
    	cout<<"Case "<<i+1<<": "<<max(solve(0,n-1),solve(1,n-1))<<endl;;

  }
return(0);
} 