#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);

    while (t--){
         int low,high,num,cout,i;
         scanf("%d%d",&low,&high);
         for(num=low;num<=high;num++){
             cout=0;
                for(i=1;i<=sqrt(low);i++){

                    if(low%i==0)
                        cout++;
                }
                if (cout==0)
                    printf("%d\n",low);
         }


         }
         return 0;
}




