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
int arr[123456],dp[1000][1000];
int solve(int i,int j){
	if(i>j) return 0;
	if(i==j)return arr[j];
	if(dp[i][j]!=-1)return dp[i][j];
	return dp[i][j]=max(arr[i]+(arr[i+1]>=arr[j]?solve(i+2,j):solve(i+1,j-1)),arr[j]+(arr[i]>=arr[j-1]?solve(i+1,j-1):solve(i,j-2)));
}

int main(){
//freopen("input.txt", "r", stdin);
    for(int tc=1; ;tc++){
    	int n,sum=0;
    	cin>>n;
    	if(n==0) break;
    	repin(i,1,n){
    		cin>>arr[i];
    		sum+=arr[i];
    	}
    	
       	memset(dp,-1,sizeof(dp));
       	//cout<<sum<<endl;
       	cout<<"In game "<<tc<<", the greedy strategy might lose by as many as "<<2*solve(1,n)-sum<<" points."<<endl;
    			    	
    }
return(0);
} 
/*

In game 1, the greedy strategy might lose by as many as 7 points.
In game 2, the greedy strategy might lose by as many as 4 points.
In game 3, the greedy strategy might lose by as many as 5 points.

In game 1, the greedy strategy might lose by as many as 7 points.
In game 2, the greedy strategy might lose by as many as 4 points.
In game 3, the greedy strategy might lose by as many as 5 points.
*/