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
    int n,tmp,flag=0;
    cin>>n;
    map<int,int> mp;
    map<int,int> :: iterator it;
    for(int i=1;i<=n;i++){
        cin>>tmp;
        mp[tmp]++;
    }
    //cout<<mp.rbegin()->first<<" "<<mp.rbegin()->second<<endl;
   // cout<<mp.rbegin()->first<<" "<<mp.rbegin()->second<<endl;
    for(it=mp.begin();it!=mp.end();it++){
        if(it->second > (n/2)){
            cout<<"YES "<<it->first<<endl;
            flag=1;
            break;
        }
    }    
    
    if(!flag)    
      cout<<"NO"<<endl;
  }
return(0);
} 