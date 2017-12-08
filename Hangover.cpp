#include<bits/stdc++.h>
using namespace std;
#define pi 3.14159265358979323846264338327950
const int N=1e6+20,mod=(int)(1e9)+7;
#define pb push_back
#define ull unsigned long long
#define ll long long
int main(){
 // freopen("input.txt", "r", stdin);
  float precom[300];
  for(int i=0;i<300;i++)
      precom[i]=1.0/(2.0+i);
  //for(int i=0;i<10;i++)
    //  cout<<precom[i]<<endl;
  float qq;
  cin>>qq;
  while(qq){
      int tt=0;
      float sum=0;
      for(int i=0;i<300;i++){
        tt++;
        sum+=precom[i];
        if(sum>=qq)
            break;
      }
      cout<<tt<<" card(s)"<<endl;
      cin>>qq;
  }
return(0);
} 