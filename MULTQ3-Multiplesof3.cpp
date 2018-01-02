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
int arr[123456];
struct node{
	int count0,count1,count2;
	void add(){
		int temp=count0;
		count0=count2;
		count2=count1;
		count1=temp;
	}
	void merge(node l,node r){
		count0=l.count0+r.count0;
		count1=l.count1+r.count1;
		count2=l.count2+r.count2;
	}
};
node tree[4*123456];
int lazy[4*123456];
void build(int index,int start,int end){
	if(start>end) return ;
	if(start==end){
		tree[index].count0=1;
		tree[index].count1=0;
		tree[index].count2=0;
		return ;
	}
	int mid=(start+end)/2;
	build(2*index,start,mid);
	build(2*index+1,mid+1,end);
	tree[index].merge(tree[2*index],tree[2*index+1]);
}
void rangeUpdate(int index,int start,int end,int l,int r){   //l=left,r=right
	if(lazy[index]%3==1){
		tree[index].add();
		if(start!=end){
			lazy[2*index]+=lazy[index]%3;
			lazy[2*index+1]+=lazy[index]%3;
		}
	}
	else if(lazy[index]%3==2){
		tree[index].add();
		tree[index].add();
		if(start!=end){
			lazy[2*index]+=lazy[index]%3;
			lazy[2*index+1]+=lazy[index]%3;
		}
	}
	else if(lazy[index] and lazy[index]%3==0){
		if(start!=end){
			lazy[2*index]+=lazy[index]%3;
			lazy[2*index+1]+=lazy[index]%3;
		}
	}
	lazy[index]=0;
	if(start>end or r<start or end<l) return;
	if(l<=start and end<=r){
		tree[index].add();
		if(start!=end){
			lazy[2*index]+=1;
			lazy[2*index+1]+=1;
		}	
		return;
	}
	int mid=(start+end)>>1;
	rangeUpdate(2*index,start,mid,l,r);
	rangeUpdate(2*index+1,mid+1,end,l,r);
	tree[index].merge(tree[2*index],tree[2*index+1]);
}
node query(int index,int start,int end,int l,int r){
	node result;
	result.count0=result.count1=result.count2=0;
	if(lazy[index]%3==1){
		tree[index].add();
		if(start!=end){
			lazy[2*index]+=lazy[index];
			lazy[2*index+1]+=lazy[index];
		}
	}
	else if(lazy[index]%3==2){
		tree[index].add();
		tree[index].add();
		if(start!=end){
			lazy[2*index]+=lazy[index];
			lazy[2*index+1]+=lazy[index];
		}
	}
	else if(lazy[index] and lazy[index]%3==0){
		if(start!=end){
			lazy[2*index]+=lazy[index];
			lazy[2*index+1]+=lazy[index];
		}
	}
	lazy[index]=0;
	if(start>end or r<start or end<l) return result;
	if(l<=start and end<=r) return tree[index];
	int mid=(start+end)/2;
	node left=query(2*index,start,mid,l,r);
	node right=query(2*index+1,mid+1,end,l,r);
	result.merge(left,right);
	return result;
}  
int main(){
  //freopen("input.txt", "r", stdin);
  int n,q;
  scanf("%d%d",&n,&q);
  build(1,0,n-1);
  while(q--){
  	int a,b,c;
  	scanf("%d%d%d",&a,&b,&c);
  	if(a==1){
  		cout<<query(1,0,n-1,b,c).count0<<endl;;
  	}
  	else{
  		rangeUpdate(1,0,n-1,b,c);
  	}
  }
return(0);
} 