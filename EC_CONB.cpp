/*mahendra25---PVPSIT-IT
IT ONLY HAS TO WORK ONCE!
*/
#include<bits/stdc++.h>
using namespace std;
#define pi 3.14159265358979323846264338327950
const int N=1e6+20,mod=(int)(1e9)+7;
#define pb push_back
//#define ONLINE_JUDGE 
int main(){
  /* #ifdef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif*/
   long T,ans;
   scanf("%ld",&T);
   while(T--){
   	   scanf("%ld",&ans);
   	   if(ans%2==1)
   	   	   printf("%ld\n",ans);
   	   else{
   	   		long ans1=0;
			while(ans!=0){
				ans1=ans1<<1;
				ans1=ans1+(ans&1);
				ans=ans>>1;
			}
			cout<<ans1<<endl;  
		}
	}
  return(0);
}
 
 