#include<stdio.h>
int main()
{
 long  int t;

scanf("%ld",&t);
while(t--)
{
    int sum=0;
    unsigned long long int num;


    scanf("%llu",&num);

            while(num>0){
            num=num/5;
            sum=sum+num;
            }
            printf("%d\n",sum);

    }








return 0;
}
