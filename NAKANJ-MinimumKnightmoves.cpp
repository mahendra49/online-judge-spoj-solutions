#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(int)(n);++i)
#define repin(i,j,k) for(int i=j;i<=(int)(k);++i)
int dx[] = {-2, -1, 1, 2, -2, -1, 1, 2};
int dy[] = {-1, -2, -2, -1, 1, 2, 2, 1};
struct point {
    int x,y,dist;
    bool operator<(const point& o) const {
      return x < o.x || (x == o.x && y < o.y);
    }
  
};
bool valid(int x,int y){
  if(x<=0 or y<=0 or x>8 or y>8)
      return false;
  return true;
}
int bfs(point src,point des){
  map<point,bool> visited;
  queue<point> q;
  q.push(src);
  while(!q.empty()){
    point cur=q.front();
    q.pop();
    int x=cur.x;
    int y=cur.y;
    int dis=cur.dist;
    if(x==des.x and y==des.y)
       return dis;
    if(!visited.count(cur)){
      visited.insert(pair<point,bool>(cur,true));
      repin(i,0,7){
        int x1=x+dx[i];
        int y1=y+dy[i];
        if(valid(x1,y1))
            q.push({x1,y1,dis+1});
      }
    }
  }
} 
int main(){
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int T;
  cin>>T;
  while(T--){
      char s[10];
      cin>>s[0]>>s[1]>>s[3]>>s[4];
      int x1=s[0]-96;
      int y1=s[1]-48;
      int x2=s[3]-96;
      int y2=s[4]-48;
      point start={x1,y1};
      point end={x2,y2};
      cout<<bfs(start,end)<<endl;
  }
return(0);
} 