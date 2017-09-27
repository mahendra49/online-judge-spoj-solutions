/*mahendra25---PVPSIT-IT
IT ONLY HAS TO WORK ONCE!
*/
//learnt something new..
//about fermat's test
#include<bits/stdc++.h>
using namespace std;
#define pi 3.14159265358979323846264338327950
const int N=1e6+20,mod=(int)(1e9)+7;
//#define ONLINE_JUDEGE
#define pb push_back
#define ull unsigned long long
#define ll long long
ull mulmod(ull a,ull b,ull p){
    ull ans=0,y=a%p;
    while(b){
        if(b&1)
            ans=(ans+y)%p;
        y=(y*2)%p;
        b=b/2;
    }
    return ans%p;
} 
ull power(ull a,ull n,ull p){
    ull res=1;
    a=a%p;
    while(n>0){
        if(n&1)
            res=mulmod(res,a,p);
        n>>=1;
        a=mulmod(a,a,p);
    }
    return res;
}
bool test(ull x){
    if(x<=1  or x==4)
    if(x<=3) return true;
    ull k=20;
    while(k--){
        ull
     a=2+rand()%(x-4);
        if(power(a,x-1,x)!=1)
            return false;
    }
    return true;
}
int main(){
   #ifdef ONLINE_JUDEGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
   int T;
   scanf("%d",&T);
   while(T--){
      ull x;
      cin>>x;
      test(x)?puts("YES"):puts("NO");  
   }
  return(0);
} 