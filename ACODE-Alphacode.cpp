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
  string s;
  while(true){
  	cin>>s;
  	if(s=="0") break;
  	int dp[s.length()+1]={0};
  	dp[0]=1;
  	
  	for(int i=1;i<s.length();i++){
  		if(s[i]!='0') dp[i]=dp[i-1];
  		int tmp=(s[i-1]-'0')*10+s[i]-'0';
  		//cout<<tmp<<endl;
  		if(tmp>=10 and tmp<=26 ) dp[i]+=dp[i<2?0:i-2];
  	}
  	cout<<dp[s.length()-1]<<endl;
  }
return(0);
} 