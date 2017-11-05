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
int main(){
   #ifdef ONLINE_JUDEGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
   int T,count=0;
   scanf("%d",&T);
   set<int >s;
   set<int >f;
   while(T--){
   	 	int id,li;
   	 	cin>>id>>li;
   	 	if(s.find(id)!=s.end()){
   	 		s.erase(id);
   	 	}
   	 	f.insert(id);
   	 	while(li--){
   	 		int y;
   	 		cin>>y;
   	 		if(f.find(y)==f.end()){
   	 			s.insert(y);
   	 		}	
   	 	}
    }
   cout<<s.size()<<endl;
  return(0);
} 