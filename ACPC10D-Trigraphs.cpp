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
  int saru=1;
  int n;
  while(1){
  cin>>n;
  if(n==0) break;
  int arr[n][3];
  rep(i,n)
  	rep(j,3)
  		cin>>arr[i][j];
  for(int i=0;i<n;i++){
  	 if(i==0){
  	 	arr[i][2]+=arr[i][1];
  	 }
  	 else if(i==1){
  	 	arr[i][0]+=arr[i-1][1];
  	 	arr[i][1]+=min(arr[i][0],min(arr[i-1][1],arr[i-1][2]));
  	 	arr[i][2]+=min(arr[i][1],min(arr[i-1][1],arr[i-1][2]));

  	 }
  	 else{
  	 	arr[i][0]+=min(arr[i-1][1],arr[i-1][0]);
  	 	arr[i][1]+=min(arr[i][0],min(arr[i-1][1],min(arr[i-1][2],arr[i-1][0])));
  	 	arr[i][2]+=min(arr[i][1],min(arr[i-1][1],arr[i-1][2]));
  	 }
  }	
  cout<<saru++<<". "<<arr[n-1][1]<<endl;
 }
return(0);
} 