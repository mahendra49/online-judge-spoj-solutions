#include <bits/stdc++.h>
using namespace std;
#define pi 3.14159265358979323846264338327950;
int n,fr;
int check_here(long double arr1[],long double num){
	int frd=0;
	if(num==0)
		return 0;
	for(int i=0;i<n;i++)
		frd=frd+(int)(arr1[i]/num);
	if(frd>=fr)
		return 1;
	return 0;

}
long double bs(long double arr1[]){
	long double start=0,end=arr1[n-1];
	while(end-start>=1e-6){
		long double mid=(start+end)/2;
		if(check_here(arr1,mid))
			start=mid;
		else
			end=mid;
	}
	return start;
}
int main(){
	int x;
	scanf("%d",&x);
	while(x--){
		scanf("%d %d",&n,&fr);
		int arr[n];
		fr++;
		for(int i=0;i<n;i++)
			scanf("%d",&arr[i]);
		sort(arr,arr+n);

		long double arr1[n];
		for(int i=0;i<n;i++)
			arr1[i]=arr[i]*arr[i]*pi;
		long double ans=bs(arr1);
		printf("%.4Lf\n",ans);
	}	

	return 0;
}