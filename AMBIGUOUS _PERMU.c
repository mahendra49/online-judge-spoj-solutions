#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    //int t;
    	  while(1)
        	{
        	int n,flag=0;
        	scanf("%d",&n);
        	if(n==0)
        	break;
        	int arr[n+1],i;
        	for(i=1;i<=n;i++)
        		scanf("%d",&arr[i]);
        	for(i=1;i<=n;i++){
        		if(arr[arr[i]]!=i)
        			break;
        	}
        	if(i!=n+1)
        		printf("not ambiguous\n");
        	else
        		printf("ambiguous\n");


    	}
return 0;
}