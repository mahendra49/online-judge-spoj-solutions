/*mahendra25---PVPSIT-IT
IT ONLY HAS TO WORK ONCE!
*/
#include<bits/stdc++.h>
using namespace std;
#define pi 3.14159265358979323846264338327950
const int N=1e6+20,mod=(int)(1e9)+7;
//#define ONLINE_JUDEGE
#define pb push_back
#define ll long long
#define ull unsigned long long;
int main(){
   #ifdef ONLINE_JUDEGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
   int tt;
   cin>>tt;
   while(tt--){
   int n;
   cin>>n;
   ll arr[n],sum=0,fsum=0,sk;
   map<ll,ll> m;
   for(int i=0;i<n;i++){
   		cin>>arr[i];
   		sum+=arr[i];
   }
   sk=arr[0];
   m[0]=sum-sk;
   for(int i=1;i<n;i++){
   		sk+=arr[i];
   		m[i]=sum-sk;
   }
  // for(auto it:m)
   	//	cout<<it.first<<" "<<it.second<<endl;
  for(int i=0;i<n;i++)
   	fsum+=m[i]-(arr[i]*(n-i-1));
   		
  cout<<fsum<<endl;
   }
  return(0);
} 