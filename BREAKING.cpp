#include<iostream>
#include<math.h>
using namespace std;
int main(){
int t;
int k=1;
cin >>t;
	while(t--){
		long long num,i;
		cin >>num;
		cout << "Case "; cout <<k++;
		cout <<": ";
		if(num%2==0)
			cout << "2 ";
		while(num%2==0)
			num=num/2;
		for(i=3;i<=sqrt(num)+1;i++)
		{
			
			if(num%i==0){
				cout << i;cout <<" ";
			}
			while(num%i==0) num=num/i;
				
		}
		if(num>2)
			cout <<num;
		cout <<"\n";

	}
	return(0);
}
	
