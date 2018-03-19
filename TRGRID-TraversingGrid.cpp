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
  int T;
  cin>>T;
  while(T--){
    int n,q;
    cin>>n>>q;
    if(q>=n and n%2==0)
    	cout<<"L"<<endl;
    else if(q>=n and n%2!=0)
    	cout<<"R"<<endl;
    else if(n>q and q%2!=0)
    	cout<<"D"<<endl;
    else 
    	cout<<"U"<<endl;	
  }
return(0);
} 