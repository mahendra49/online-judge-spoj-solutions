#include<stdio.h>
#include<math.h>
int gcd(long long num1,long long num2);
int gcd(long long a,long long b);
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long num1,num2;
        scanf("%lld%lld",&num1,&num2);
        printf("%ld\n",factors(num1,num2));
    }
return 0;
}
long factors(long long a,long long b)
{
    int i,ans=0;
    int gd=gcd(a,b);
    for ( i = 0; i < sqrt(gd)+1; i++)
    {
        if(gd%i==0)
        {
            if(gd/i==i)
                ans++;
            else
                ans=ans+2;
        }
    }
    return(ans);
}
int gcd(long long a,long long b)
{
    return((b==0)?a:return(b,a%b));
}