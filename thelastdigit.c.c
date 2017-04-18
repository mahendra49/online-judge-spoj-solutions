#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int base;
	long int exp;
        scanf("%d%ld",&base,&exp);
        base=base%10;
        if(exp==0)
            printf("1\n");
        else if(base==1 || base==5 ||base==6||base==0)
            printf("%d\n",base);
        else
        {
            if(exp%4!=0)
                {
                    int x=pow(base,exp%4);
                    printf("%d\n",x%10);
                }
            else{
                    int x=pow(base,4);
                    printf("%d\n",x%10);

                }



        }
    }
return 0;
}

