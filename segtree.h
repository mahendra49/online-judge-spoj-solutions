//1 based indexing for tree and 0 based indexing for arrays
//sum range based queries
void buildtree(int node,int start,int end){
	if(start>end) return;
	else if(start==end)
		tree[node]=A[start];
	else{
		int mid=(start+end)/2;
		buildtree(2*node,start,mid);
		buildtree(2*node+1,mid+1,end);

		tree[node]=tree[2*node]+tree[2*node+1];
	}
}
void update(int node,int start,int end,int pt,int value){
	int mid=(start+end)/2;
	if(start==end){
		tree[node]=value;
		A[pt]=value;
		return ;
	}
	else if(start<=pt and pt<=mid)
		update(2*node,start,mid,pt,value);
	else
		update(2*node+1,mid+1,end,pt,value);
	tree[node]=tree[node*2]+tree[node*2+1];
}
int query(int node,int start,int end,int l,int r){
	 if(r < start or end < l) return 0 ;
	 
	 if(l<=start and end<=r)
	 	return tree[node];
	 int mid=(start+end)/2;
	 int p1=query(2*node,start,mid,l,r);
	 int p2=query(2*node+1,mid+1,end,l,r);
	 return (p1+p2);
}
void updaterange(int node,int start,int end,int l,int r,int value){
	if(start > end or start >right or end < l) return;
	if(left<= start and end<=right){
		tree[node]=A[start];
		return ;
	}
	int mid=(start+end)/2;
	updaterange(2*node,start,mid,l,r,value);
	updaterange(2*node+1,mid+1,end,l,r,value);
	tree[node]=tree[2*node]+tree[2*node+1];
}