#include<bits/stdc++.h>
using namespace std;
int main(){
	while(1){
		int x,ans=0;
		cin>>x;
		if(!x) break;
		while(x>1){
			x/=2;
			ans++;
		}
		cout<<ans<<endl;
	}

	return 0;
}