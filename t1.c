#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
        while(t--)
        {
            int num1,num2;
            scanf("%d%d",&num1,&num2);
            long long int sum;
            sum=num1*num2;
            printf("%lld\n",sum);
        }
	return 0;
}
