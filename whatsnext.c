#include<math.h>
#include<stdio.h>
int main()
{

while(1){
int a,b,c,r,ne;
scanf("%d%d%d",&a,&b,&c);
if(a==0&&b==0&&c==0)
{
    break;

}

else if(b-a==c-b ||a-b==b-c ||a-b==c-b ||b-a==b-c)
{
    r=b-a;
    printf("AP ");
    ne=a+(3)*r;
    printf("%d\n",ne);
}
else
{


    printf("GP ");
    r=b/a;

    ne=a*pow(r,3);
    printf("%d\n",ne);

}

}


return 0;


}
