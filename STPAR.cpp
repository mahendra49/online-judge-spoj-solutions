/*mahendra25---PVPSIT-IT
IT ONLY HAS TO WORK ONCE!
*/
#include<bits/stdc++.h>
using namespace std;
#define pi 3.14159265358979323846264338327950
const int N=1e6+20,mod=(int)(1e9)+7;
//#define ONLINE_JUDEGE
#define pb push_back
#define ull unsigned long long
#define ll long long 
int arr[N];
int main(){
   #ifdef ONLINE_JUDEGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
   int T;
   while(1){
   		cin>>T;
   		if(T==0)
   			break;
   		stack<int> s;
   		vector<int> v;
		int tmp,flag=0;
   		for(int i=0;i<T;i++){
   			cin>>tmp;
   			while(!s.empty() and s.top()<tmp){
   				v.push_back(s.top());
   				s.pop();
   			}
   			s.push(tmp);
   		}
   		while(!s.empty()){
   			v.push_back(s.top());
   			s.pop();
   		}
   		tmp=0;
   		while(tmp<T){
   			if(v[tmp]!=tmp+1){
   				flag=1;break;
   			}
   			tmp++;
   		}
   		puts(flag?"no":"yes");
	}
  return(0);
} 