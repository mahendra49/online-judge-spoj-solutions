#include<stdio.h>
int main()
{
    int t,sce=1;
    scanf("%d",&t);
    while(t--)
    {
        long long  int sta,fri,i=0,sum=0,count=0,flag=0,j,tmp;
        scanf("%lld%lld",&sta,&fri);
        long int arr[fri];
        if(sta==1&&fri==1){
                scanf("%ld",&arr[i]);

            printf("Scenario #%d:\n",sce++);
             printf("1\n");
            printf("\n");

        }
        else{


        while(i<fri)
        {
                scanf("%ld",&arr[i]);
                i++;
        }

        for(i=0;i<fri;i++)
                    for(j=i+1;j<fri;j++)
                        if(arr[i]<=arr[j])
                        {
                            tmp=arr[i];
                            arr[i]=arr[j];
                            arr[j]=tmp;

                        }

            for(i=0;i<fri;i++)
            {
                if(sum>=sta){
                flag=1;
                break;

                }

                sum=sum+arr[i];
                count++;
            }

            if(flag==1){
              printf("Scenario #%d:\n",sce++);
            printf("%lld\n",count);

            }
            else{
                printf("Scenario #%d:\n",sce++);
                printf("impossible\n");
                }

                printf("\n");

        }
    }

return 0;
}
