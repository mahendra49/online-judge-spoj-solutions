#include<stdio.h>
#include<string.h>
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
        char arr[70],me[70];
        int count=1,carry,x,i,j,len=strlen(arr);
        scanf("%s",arr);
        for(i=1;i<len;i++){
            for(j=1;j<=count;j++)
            {
                 int k=(arr[j]-'0')+(arr[j-1]-'0');
                 me[j]=k%10;
                 carry=k/10;
             }
            while(carry>0)
             {
                me[count]=carry%10;
                count++;
            }
        }
        for(i=count;i>=0;i--)
            printf("%c",me[i]);

   }

    return 0;
}
