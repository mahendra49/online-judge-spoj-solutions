#include<stdio.h>
int main(){
	//while(1){
	long long x;
	scanf("%lld",&x);
	long long arr[x];
	
	for(long i=0;i<x;i++)
	scanf("%lld",&arr[i]);
	
	long long num=0;
	for(long i=0;i<x;i++)
		num^=arr[i];
	printf("%lld\n",num);
	//	}
  return(0);
}