#include<bits/stdc++.h>
using namespace std;
long long method(long long n);
int main(){
	int t;
	scanf("%d",&t);
	while(t--)
	{
	long double ans=0;
	long long ask,i;
	scanf("%lld",&ask);
	printf("%lld\n",method(ask));

	}
 return(0);
}
long long method(long long n)
{
    
    if (n < 0)
        return 0;
 
   
    if (n <= 1)
        return 1;
 
    
    double x = ((n*log10(n/M_E)+log10(2*M_PI*n)/2.0));
 
    return floor(x)+1;
}