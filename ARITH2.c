#include<stdio.h>
int main(){
	char r;
	long long tmpsum2,tmp,t;
	//int t;
	scanf("%lld",&t);
	while(t--){
			//char r;
			
			scanf("%lld",&tmp);
			while(1){
			scanf("%s",&r);
			if(r=='=') break;
			scanf("%lld",&tmpsum2);
			switch(r){
				case '+': tmp=tmp+tmpsum2; break;
				case '-': tmp=tmp-tmpsum2; break;
				case '*': tmp=tmp*tmpsum2; break; 
				case '/': tmp=tmp/tmpsum2; break;
			}
			
		}
		printf("%lld\n",tmp);



	}
	return(0);
}