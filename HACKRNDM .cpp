#include<bits/stdc++.h>
using namespace std;
//ios::sync_with_stdio(flase);
const int N=1e6+20,mod=(int)(1e9)+7;
int main(){
//	while(1){
	long n,s;
	scanf("%ld%ld",&n,&s);
		long arr[n];
	for(long i=0;i<n;i++)
		scanf("%ld",&arr[i]);
		sort(arr,arr+n);
	long ans=0;
	for(long i=0;i<n;i++){
		long start=i,end=n-1;
		while(start<=end){
			long mid=start+(end-start)/2;
			if(arr[mid]-arr[i]==s)
				{ans++;break;}
			else if(arr[mid]-arr[i]>s)
				end=mid-1;
			else
				start=mid+1;
			
		}
	}
	printf("%ld\n",ans);
//	}
  return(0);
}