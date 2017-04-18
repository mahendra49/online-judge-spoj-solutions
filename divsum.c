#include<stdio.h>
int main()
{
 long int t;
 scanf("%ld",&t);
 while(t--)
 {
 int i;
 long int num,sum=1;
 scanf("%ld",&num);
 if(num==1)
    printf("0\n");

 for (i=2;i<=(num/2);i++){
    if(num%i==0){
    sum=sum+i;
    }
    }

    printf("%ld\n",sum);



 }

return 0;
}
