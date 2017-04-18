#include<stdio.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
    long long int a,c,sum1;
    long long int b,d,sum2,x;
    scanf("%d%d",&a,&b);
    c=a;
    d=b;
    while(a>0){
        sum1=sum1+(a%10);
        a/=10;
        }

        while(b>0)
        {

            sum2=sum2+(b%10);
            b/=10;
        }

        sum=sum1+sum2;
        while(sum>0)
        {
            x=x+(sum%10);
            sum/=10;


        }

    printf("%ld",x);

}

return 0;
}
