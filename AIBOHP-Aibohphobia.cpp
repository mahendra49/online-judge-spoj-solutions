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
int solve(string s) {
	int memo[s.length()][s.length()];
	memset(memo,0,sizeof(memo));
	for(int i=1;i<s.length();i++){
		for(int j=0,fill=i;fill<s.length();j++,fill++){
			memo[j][fill]=(s[j]==s[fill])?memo[j+1][fill-1]:min(memo[j][fill-1],memo[j+1][fill])+1;
		}
	}
	return memo[0][s.length()-1];
}
int main(){
  //freopen("input.txt", "r", stdin);
  int T;
  cin>>T;
  while(T--){
    string s;
    cin>>s;
    //int memo[6000][6000];
    //memset(memo,0,sizeof(memo));
    cout<<solve(s)<<endl;
  }
return(0);
} 