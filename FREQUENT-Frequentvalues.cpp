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
int A[123456];
class node {
public:
    int prefix_value,suffix_value,prefix_count,suffix_count,ans;
      node(){
        prefix_value,suffix_value,prefix_count,suffix_count,ans=0;
      }
      void merge(node segA,node segB){
          prefix_value=segA.prefix_value;
          prefix_count=segA.prefix_count;
          suffix_value=segB.suffix_value;
          suffix_count=segB.suffix_count;
          if(segA.prefix_value==segB.prefix_value)
              prefix_count=segA.prefix_count+segB.prefix_count;
          if(segA.suffix_value==segB.suffix_value)
              suffix_count=segA.suffix_count+segB.suffix_count;
          ans=max(segA.ans,segB.ans);
          if(segA.suffix_value==segB.prefix_value)
              ans=max(ans,segA.suffix_count+segB.prefix_count);
      }

};
node tree[123456*4];
node query(int index,int start,int end,int l,int r){
        node result;
        if(r<start or end<l) return result;
        if(l<=start and end<=r) return tree[index];
        int mid=(start+end)/2;
        if(l>mid) return query(2*index+1,mid+1,end,l,r);
        if(r<=mid) return query(2*index,start,mid,l,r);
        node A=query(2*index,start,mid,l,r);
        node B=query(2*index+1,mid+1,end,l,r);
        result.merge(A,B);
        return result;
}
void build(int index,int start,int end){
   if(start>end) return;
   if(start==end) {
      tree[index].prefix_value=tree[index].suffix_value=A[start];
      tree[index].prefix_count=tree[index].suffix_count=tree[index].ans=1;
      return ;
   }
   int mid=(start+end)/2;
   build(2*index,start,mid);
   build(2*index+1,mid+1,end);
   tree[index].merge(tree[2*index],tree[2*index+1]);
}
int main(){
  //freopen("input.txt", "r", stdin);
  while(1){
    int n,q;
    cin>>n;
    if(n==0) break;
    for(int i=0;i<4*123456;i++)
        tree[i]=node();
    cin>>q;
    rep(i,n) cin>>A[i];
    build(1,0,n-1);
    while(q--){
      int a,b;
      cin>>a>>b;
      cout<<query(1,0,n-1,a-1,b-1).ans<<endl;
    }
  }
return(0);
} 