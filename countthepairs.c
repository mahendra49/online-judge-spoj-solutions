#include<stdio.h>
int main()
{
    long int N,K,i,j,count=0;
    scanf("%ld%ld",&N,&K);
    long int arr[N];
        for(i=0;i<N;i++)
            scanf("%ld",&arr[i]);
        for(i=0;i<N;i++)
            for(j=0;j<N;j++)
                    if(arr[i]-arr[j]==K)
                        count++;

        printf("%ld\n",count);
    
return 0;
}