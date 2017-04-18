#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--)
    {
            int N;
            scanf("%d",&N);
            int arr1[N],arr2[N],i,j,tmp;

                for(i=0;i<N;i++)
                scanf("%d",&arr1[i]);
                for(i=0;i<N;i++)
                scanf("%d",&arr2[i]);

                for(i=0;i<N;i++)
                    for(j=i+1;j<N;j++)
                        if(arr1[i]<=arr1[j])
                        {
                            tmp=arr1[i];
                            arr1[i]=arr1[j];
                            arr1[j]=tmp;

                        }

                    for(i=0;i<N;i++)
                    printf("%d\n",arr1[i]);


                 for(i=0;i<N;i++)
                    for(j=i+1;j<N;j++)
                        if(arr2[i]<=arr2[j])
                        {
                            tmp=arr2[i];
                            arr2[i]=arr2[j];
                            arr2[j]=tmp;

                        }

                        for(i=0;i<N;i++)
                            printf("%d\n",arr2[i]);

                long long int sum=0;
                    for(i=0;i<N;i++)
                    sum=sum+arr1[i]*arr2[i];

                printf("%lld\n",sum);

}

return 0;
}
