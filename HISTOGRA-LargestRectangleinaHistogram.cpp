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
ll LargestHistogram(ll *arr,ll n){
	stack<ll> s;
	ll Max=-1,i=0,AreaNow,tmp;
	while(i<n){
		if(s.empty() or arr[s.top()]<=arr[i])
			s.push(i++);
		else{
			tmp=s.top();
			s.pop();
			AreaNow=arr[tmp]*(s.empty()?i:i-s.top()-1);
			Max=max(Max,AreaNow);
		}	
	}
	while(!s.empty()){
		tmp=s.top();
		s.pop();
		AreaNow=arr[tmp]*(s.empty()?i:i-s.top()-1);
		Max=max(Max,AreaNow);
	}
	return Max;
}
int main(){
  //freopen("input.txt", "r", stdin);
  while(1){
  	ll n;
  	cin>>n;
  	if(n==0) break;
  	ll arr[n];
  	rep(i,n) cin>>arr[i];
  	cout<<LargestHistogram(arr,n)<<endl;;
  }
return(0);
} 