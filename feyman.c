#include <stdio.h>

int main() {
        while(1)
        {
            int num;
            scanf("%d",&num);
            if(num==0)
            break;
            long long int sum=0;
            while(num>0)
            {

                sum=sum+num*num;
                num--;
            }
            printf("%lld\n",sum);
        }
	return 0;
}
