#include<math.h>
#include<stdio.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
    unsigned long long int b,num;
    int a,ans;
    scanf("%d%llu",&a,&num);
    b=pow(a,num);


    ans=b%10;

    printf("%d\n",ans);


}

return 0;
}
