#include<stdio.h>
int main(){

        while(1)
        {
            int t;
            scanf("%d",&t);
            if(t==-1)
            break;
            else{
                    int i=0;
                    int arr[t];
                    while(i<t)
                    {
                        scanf("%d",&arr[i]);
                        i++;
                    }
                        long int sum=0;
                    for(i=0;i<t;i++)
                    sum=sum+arr[i];

                    double avg=sum/t;
                    if(sum%t==0)
                        {
                            int moves=0;
                            for(i=0;i<t;i++)
                                if(arr[i]>avg)
                                    moves=moves+(arr[i]-avg);

                            printf("%d\n",moves);




                        }
                        else
                            printf("-1\n");

}



        }


return 0;

}
