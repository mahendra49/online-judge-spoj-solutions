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
int con(int z){
	int sum=0;
	while(z){
		sum+=(z%10)*(z%10);
		z=z/10;
	}
	return sum;
} 
int main(){
   #ifdef ONLINE_JUDEGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
   int T,flag=1,count=0;
   cin>>T;
   set<int> s;
   while(1){
   		int tmp=con(T);
        //cout<<tmp<<endl;
          if(s.find(tmp)==s.end()){
            s.insert(tmp);
            count++;
            T=tmp;
         }
         else{
            flag=-1;
            break;
         }
         if(tmp==1){
            flag=1;
            break;
          }

        
	}
	if(flag==1)
		cout<<count<<endl;
	else
		cout<<"-1"<<endl;

  return(0);
} 