#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
        while(t--)
        {
                 long long int num,ans,i,sum=0;
                    scanf("%lld",&num);
                        if(num==1)
                                printf("2\n");
                        else{
                        for(i=2;i<=num;i++)
                            sum=sum+(i*2)+(i-1);

                            printf("%lld\n",(sum+2)%1000007);


                        }




        }


}
