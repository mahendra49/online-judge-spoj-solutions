#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,i,dif,cout1=0,cout2=0,tmp,j,ans;
        scanf("%d%d",&a,&b);
        int arr1[a],arr2[b];
        for(i=0;i<a;i++)
            scanf("%d",&arr1[i]);
        for(i=0;i<b;i++)
        scanf("%d",&arr2[i]);
                    //
                for(i=0;i<a;i++)
                    for(j=i+1;j<a;j++)
                        if(arr1[i]<=arr1[j])
                        {
                            tmp=arr1[i];
                            arr1[i]=arr1[j];
                            arr1[j]=tmp;

                        }
                for(i=0;i<b;i++)
                    for(j=i+1;j<b;j++)
                        if(arr2[i]<=arr2[j])
                        {
                            tmp=arr2[i];
                            arr2[i]=arr2[j];
                            arr2[j]=tmp;

                        }
            ans=(a>b)?b:a;
            for(i=0;i<ans;i++){
                    if(arr1[i]>=arr2[i])
                        cout1++;
                    else
                        cout2++;
            }
             if(a>=b)
                cout1=cout1+(a-b);
            else
                cout2=cout2+(b-a);

            if(cout1>=cout2)
                printf("Godzilla\n");
            else
                printf("MechaGodzilla\n");








    }
    return 0;
}
