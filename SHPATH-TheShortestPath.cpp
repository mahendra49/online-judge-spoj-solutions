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
#define pii pair<int,int>
struct cmp
{
    bool operator()(const pair<int , int> &a , const pair<int , int> &b){
        return a.first > b.first;
    }
};	
int main(){
freopen("input.txt", "r", stdin);
    int T;
    cin>>T;
    //mp.clear();
	while(T--){
		int n;
		cin>>n;
		vector<int> Graph[n+1];
		vector<vector<int >> cost(n+1,vector<int>(n+1,0));
   		map<string,int> mp;
   		for(int i=1;i<=n;i++){
   			string name;
   			cin>>name;
   			mp[name]=i;
   			int no_of_edges;
   			cin>>no_of_edges;
   			for(int j=1;j<=no_of_edges;j++){
   				int to,gcost;
   				cin>>to>>gcost;
   				Graph[i].push_back(to);
   				cost[i][to]=gcost;
   			} 			
   		}
   		int testfor;
   		cin>>testfor;
   		while(testfor--){
   			string from,to;
   			cin>>from>>to;
   			int src=mp[from],des=mp[to];
   			//cout<<src<<" "<<des<<endl;
   			priority_queue<pii , vector<pii >, cmp > pq;
            int dist[n+9];
            fill(dist , dist+n , INT_MAX-100000);
            dist[src] = 0;
            pq.push(make_pair(0 , src));
            //cout<<"here"<<endl;
            while(!pq.empty()){
                int wt = pq.top().first;
                int node = pq.top().second;
                //cout<<wt<<" "<<node<<endl;
                pq.pop();
                if(node == des){
                    cout<<wt<<endl;
            		break;    
	            }
                for(auto it:Graph[node]){
                    if(dist[it] > dist[node] + cost[node][it]){
                        dist[it] = dist[node] + cost[node][it];
                        pq.push(make_pair(dist[it] , it));
                    }
                }
            }
		} 	
    }
return(0);
} 