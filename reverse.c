#include<stdio.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
    long long int a,c,sum1=0,sum;
    long long int b,d,sum2=0,x=0;
    scanf("%lld%lld",&a,&b);

    while(a>0){

        sum1=(sum1*10)+(a%10);
        a/=10;
        }

        while(b>0)
        {

            sum2=(sum2*10)+(b%10);
            b/=10;
        }

        sum=sum1+sum2;
        while(sum>0)
        {
            x=(x*10)+(sum%10);
            sum/=10;


        }

    printf("%lld\n",x);

}

return 0;
}
