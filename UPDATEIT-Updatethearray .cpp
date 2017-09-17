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
long arr[1234567]={0};
long p,q;
void update(long l,long r,long v){
	arr[l]+=v;
	if(p-1!=r)
		arr[r+1]-=v;
}
void finalise(){
	for(int i=1;i<p;i++)
		arr[i]+=arr[i-1];
}  
int main(){
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   long T;
   scanf("%ld",&T);
   while(T--){
	  scanf("%ld%ld",&p,&q);
	  for(int i=0;i<p;i++)
	  	  arr[i]=0;
	  long l,r,v;
      while(q--){
      	scanf("%ld%ld%ld",&l,&r,&v);
      	update(l,r,v);
  	  }
  	  finalise();
  	  long pqueries;
  	  scanf("%ld",&pqueries);
  	  while(pqueries--){
  	  	long p;
  	  	scanf("%ld",&p);
  	  	cout<<arr[p]<<endl;
  	  }
   }
 return(0);
} 