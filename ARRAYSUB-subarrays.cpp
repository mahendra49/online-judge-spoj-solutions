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
//#define ONLINE_JUDEGE
void solve(int *arr,int k,int n){
	deque<int> de(k);
	//int i;
	for(int i=0;i<k;i++){
		while(!de.empty() and arr[i]>=arr[de.back()])
			de.pop_back();
		de.push_back(i);	
	}
	//cout<<de.front()<<endl;
	for(int i=k;i<n;i++){
		cout<<arr[de.front()]<<" ";
		while(!de.empty() and de.front()<=i-k)
			de.pop_front();
		while(!de.empty() and arr[i]>=arr[de.back()])
			de.pop_back();
		de.push_back(i);
	}
	cout<<arr[de.front()];
}
int main(){
   #ifdef ONLINE_JUDEGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
   int T,k;
   scanf("%d",&T);
   int arr[T];
   for(int i=0;i<T;i++)
   	  cin>>arr[i];
   cin>>k;

   //cout<<"done"<<endl;
   solve(arr,k,T);
  return(0);
} 