/*mahendra25---PVPSIT-IT
  IT ONLY HAS TO WORK ONCE!
*/
#include<bits/stdc++.h>
using namespace std;
#define pi 3.14159265358979323846264338327950
const int N=1e6+20,mod=(int)(1e9)+7;
#define pb push_back
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		int x,count=0;
		string s;
		cin>>x;
		while(x--){
			cin>>s;
			if(s.compare("lxh"))
				count++;
		}
		if(count&1)
			printf("lxh\n");
		else
			printf("hhb\n");		
	}
  return(0);
}