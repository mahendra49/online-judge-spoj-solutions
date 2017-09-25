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
 int main(){
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   ll T;
   scanf("%lld",&T);
   while(T--){
    	ll q,flag=0;
    	cin>>q;
    	ll s=0,e=(ll)sqrt(q);
    	while(s<=e){
    		while(s*s+e*e>q and e>=0) e--;
    		if(s*s+e*e==q) {flag=1; break;}
			s++;    	
    	}
    	puts(flag ?"Yes":"No");	
   }
  return(0);
} 