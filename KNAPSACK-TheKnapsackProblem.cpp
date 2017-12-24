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
int reqwt,n;
int val[123456],wt[123456];
int knapsack(int W,int n){
	int i,w;
	int table[n+1][W+1];
	for(i=0;i<=n;i++)
		for(w=0;w<=W;w++){
			if(i==0 or w==0)
				table[i][w]=0;
			else if(wt[i-1]<=w)
				table[i][w]=max(val[i-1]+table[i-1][w-wt[i-1]],table[i-1][w]);
			else
				table[i][w]=table[i-1][w];
		}
	return table[n][W];
}
int main(){
  //freopen("input.txt", "r", stdin);
  cin>>reqwt>>n;
  rep(i,n){cin>>wt[i]>>val[i];}
  cout<<knapsack(reqwt,n);
return(0);
} 