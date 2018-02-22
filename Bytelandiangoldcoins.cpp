/*mahendra25---PVPSIT-IT
IT ONLY HAS TO WORK ONCE!
*/
#include<bits/stdc++.h>
using namespace std;
#define pi 3.14159265358979323846264338327950
const long long N=1e6+20,mod=(int)(1e9)+7;
#define pb push_back
#define ull unsigned long long
#define ll long long
#define rep(i,n) for(int i=0;i<(int)(n);++i)
#define repin(i,j,k) for(int i=j;i<=(int)(k);++i) 
//int memo[123456];
map<long long ,long long> mp;
long long solve(long long n){
	if(n<=2)
		return n;
	else if(mp.count(n))
		return mp[n];
	else{
		long long ans= max(solve(n/2)+solve(n/3)+solve(n/4),n);
		mp[n]=ans;
	}
	return mp[n];
}
int main(){
  //freopen("input.txt", "r", stdin);
  long long t;
  while(cin>>t){
  	cout<<solve(t)<<endl;
  }
return(0);
} 