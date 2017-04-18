#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int base,exp;
        scanf("%d%d",&base,&exp);
        base=base%10;
        if(exp==0)
            printf("1\n");
        else if(base==1 || base==5 ||base==6||base==0)
            printf("%d\n",base);
        else if (base==4)
        {
            if(exp%2==0)
                printf("6\n");
            else
                printf("4\n");
        }
        else if(base==9)
        {
            if(exp%2==0)
                printf("1\n");
            else
                printf("9\n");
        }
        else
        {
            exp=exp%4;
            if(base==2){ if(exp==1) printf("2\n");  else if(exp==2) printf("4\n"); else if(exp==3) printf("8\n"); else printf("6\n");}
            if(base==3){ if(exp==1) printf("3\n");  else if(exp==2) printf("9\n"); else if(exp==3) printf("7\n"); else printf("1\n");}
            if(base==7){ if(exp==1) printf("7\n");  else if(exp==2) printf("9\n"); else if(exp==3) printf("3\n"); else printf("1\n");}
            if(base==8){ if(exp==1) printf("8\n");  else if(exp==2) printf("4\n"); else if(exp==3) printf("2\n"); else printf("6\n");}

        }
        }
return 0;
}

