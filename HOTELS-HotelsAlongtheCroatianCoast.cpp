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
  int n,sm;
  cin>>n>>sm;
  int arr[n];
  rep(i,n) cin>>arr[i];
  int ans=INT_MIN,sum=0,ini=0;
  for(int i=0;i<n;i++){
  	sum+=arr[i];
  	if(sum>sm){
  		while(sum>sm){
  			sum-=arr[ini++];
  		}
  		ans=(sum<=sm)?max(ans,sum):ans;
  	}
  	ans=(sum<=sm)?max(ans,sum):ans;
  }
  cout<<ans<<endl;
return(0);
} 