#include<stdio.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
int x,y,m;
scanf("%d %d",&x,&y);
if(x==y)
        {
            if(x%2==0){
                m=x+y;
                printf("%d\n",m);
                }
            else{
                m=x+y-1;
                printf("%d\n",m);
                }
        }
else if(x==y+2)
        {
            if(x%2==0){
            m=x+y;
            printf("%d\n",m);
                }
            else
            {
            m=x+y-1;
            printf("%d\n",m);

            }

        }

else
    printf("No Number\n");







}






return 0;
}
