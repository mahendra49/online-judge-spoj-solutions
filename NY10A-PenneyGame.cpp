/*mahendra25---PVPSIT-IT
IT ONLY HAS TO WORK ONCE!
*/
#include<bits/stdc++.h>
using namespace std;
#define pi 3.14159265358979323846264338327950
const int N=1e6+20,mod=(int)(1e9)+7;
#define pb push_back
#define ull unsigned long long
#define ll long long
#define rep(i,n) for(int i=0;i<(int)(n);++i)
#define repin(i,j,k) for(int i=j;i<=(int)(k);++i) 
int main(){
  //freopen("input.txt", "r", stdin);
  int T;
  cin>>T;
  string s[]={"TTT", "TTH", "THT", "THH", "HTT", "HTH", "HHT", "HHH"};
  while(T--){
    int n,count=0;
    cin>>n;
    int arr[8];
    for(int i=0;i<8;i++)
    	arr[i]=0;
    //cout<<n<<endl;
    string ss;
    cin>>ss;
    //cout<<ss<<endl;
    for(int i=0;i<ss.length()-2;i++){
    	for(int j=0;j<8;j++){
    		if(ss[i]==s[j][0] and ss[i+1]==s[j][1] and ss[i+2]==s[j][2])
    		   arr[j]++;
    	}
    }
    cout<<n<<" ";
    for(int i=0;i<8;i++)
      cout<<arr[i]<<" ";
    cout<<endl;	
  }
return(0);
} 