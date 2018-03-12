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
  int T=10,sum=0;
  while(T--){
  	int x;
  	cin>>x;
  	sum+=x;
  	if(sum>=100){
  		if(sum-100<=100-(sum-x)) cout<<sum;
  		else cout<<sum-x;
  		return 0;
  	}	
  }
  cout<<sum<<endl;
return(0);
} 