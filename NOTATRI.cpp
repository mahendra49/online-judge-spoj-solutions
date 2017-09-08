#include<bits/stdc++.h>
using namespace std;
#define pi 3.14159265358979323846264338327950
const int N=1e6+20,mod=(int)(1e9)+7;
int arr[123456];
int x,ans;
int main(){
	//int y;
	//cin>>y;
	while(1){
	cin>>x;
	if(x==0) break;
	for(int i=0;i<x;i++)
		cin>>arr[i];
	sort(arr,arr+x);
	ans=0;
	for(int m=0;m<x;m++){
		int i=0,j=m-1;
		while(i<j){
			if(arr[m]<=arr[i]+arr[j]){
				j--;
			}
			else{
				ans=ans+(j-i);
				i++;
			}
		}
	}	
	printf("%d\n",ans);
}
  return(0);
}