/*mahendra25---PVPSIT-IT
IT ONLY HAS TO WORK ONCE!
*/
#include<bits/stdc++.h>
using namespace std;
#define pi 3.14159265358979323846264338327950
const int N=1e6+20,mod=(int)(1e9)+7;
//#define ONLINE_JUDEGE
#define pb push_back
#define ull unsigned long long
#define ll long long 
int main(){
   #ifdef ONLINE_JUDEGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
   int a,b;
   while(1){
   		cin>>a>>b;
   		if(a==-1 and b==-1)
   			break;
   		int z=max(a,b);
   		int x=min(a,b)+1;
   		if(z%x)
   			cout<<z/x+1<<endl;
   		else
   			cout<<z/x<<endl;
   		
   }
  return(0);
} 