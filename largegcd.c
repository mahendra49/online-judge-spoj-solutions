#include<stdio.h>
int findgcd(char arr[],long long num);
long long reduce(char arr1[],long long num1);
int gcd(long long a,long long b);
int main()
{
    int t;
    scanf("%d",&t);
        while(t--)
        {
            long long int num;
            char str[300];
            scanf("%lld%s",&num,&str);
            if(num==0)
                printf("%s\n",str);
            else if ((str[0]-'0')==0)
                printf("%lld\n",num);
            else
                printf("%d\n",findgcd(str,num));
        
        }
        return 0;
}
int findgcd(char arr[],long long num)
{
    long long  int ans=reduce(arr,num);
    return(gcd(ans,num));
}
long long reduce(char arr1[],long long num1)
{
    int i,mod=0,len=strlem(arr1);
    for(i=0;i<len;i++)
        mod=(mod*10+(arr1[i]-'0'))%num1;
    return(mod);

}
int gcd(long long a,long long b)
{
    if(b==0)
            return a;
    else
        return(gcd(b,a%b));
}