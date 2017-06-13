#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
long long int  gcd(long long int x,long long int y);
int main()
{
    int t;
    scanf("%d",&t);
        while(t--)
        {
        	long long int x,y;
        	scanf("%lld%lld",&x,&y);
        	if(x==y)
        		printf("1 1\n");
        	else
        	{

        	long long int lcm=(x*y)/gcd(x,y);
        	//printf("%ld\n",lcm);
        	long long tmp=gcd(x,y);
        	if(x%y==0)
        		x=x/y;
        	printf("%lld %lld\n",x/tmp,y/tmp);
        }
        }
    
return 0;
}
long long int gcd(long long int x,long long int  y){
	if(y==0)
		return(1);
		return(gcd(y,x%y));
}