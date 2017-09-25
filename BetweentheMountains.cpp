/*mahendra25---PVPSIT-IT
IT ONLY HAS TO WORK ONCE!
*/
//brute force work :) sorry
//another solution is to sort first array and binary search every element in second array
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
   int T;
   scanf("%d",&T);
   while(T--){
  		int a,b;
  		cin>>a;
  		int arr[a];
  		for(int i=0;i<a;i++)
  			cin>>arr[i];
  		cin>>b;
  		int arr1[b],diff=1000000;
  		for(int i=0;i<b;i++)
  			cin>>arr1[i];
   		for(int i=0;i<a;i++)
   			for(int j=0;j<b;j++)
   				if(abs(arr[i]-arr1[j])<diff)
   					diff=abs(arr[i]-arr1[j]);
   		cout<<diff<<endl;
   }
  return(0);
} 