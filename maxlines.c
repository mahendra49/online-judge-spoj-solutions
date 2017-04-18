#include<stdio.h>

   int main()
{

    int t;
    scanf("%d",&t);
    int i=1;
    while(t--)
    {


    long int a;
    scanf("%ld",&a);
     long long int ans=4*a*a;
    printf("Case %d: %.2lf\n",i++,ans+0.25);
    }
return 0;
}
