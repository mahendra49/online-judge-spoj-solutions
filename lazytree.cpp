//lazy tree
int tree[4*123456];
int lazy[4*123456]={0};
//make sure n is passed as n-1;
void inittree(A[],0,n){
	build(1,0,n);
}
void build(int index,int start,int end){
	if(start>end) return ;
	//manupuate here if node contains more than one element;
	if(start==end) {tree[index]=A[start];return;}
	int mid=(start+end)>>1;
	build(2*index,start,mid);
	build(2*index+1,mid+1,end);
	tree[index]=max(tree[2*index],tree[2*index+1]);														
}
//point update
void pointUpdate(int index,int start,int end,int idx,int value){
	if(start>end) return ;
	//check here for point update on node;
	if(start==end){tree[index]=idx;}
	int mid=(start+end)>>1;
	if(start<=idx and idx<=mid)
		pointUpdate(2*index,start,mid,idx,value);
	else
		pointUpdate(2*index+1,mid+1.idx.value);
	tree[index]=max(tree[2*index],tree[2*index+1]);
}
//range updates returning int
void rangeUpdate(int index,int start,int end,int l,int r,int value){   //l=left,r=right
	if(lazy[index]!=0){
		tree[index]+=lazy[index];
		if(start!=end){
			lazy[2*index]+=lazy[index];
			lazy[2*index+1]+=lazy[index];			
		}
		lazy[index]=0;
	}
	if(start>end or r<start or end<l) return ;
	if(l<=start and end<=r){
		tree[node]=value; //or += please check here
		if(start!=end){
			lazy[2*index]+=value;
			lazy[2*index+1]+=value;
		}
		return;
	}//set prefix for tree[node] as per node requirement
	//return tree node
	//see if change at i or update at i
	int mid=(start+end)>>1;
	rangeUpdate(2*index,start,mid,l,r,value);
	rangeUpdate(2*index+1,mid+1,end,l,r,value);
	tree[index]=max(tree[2*index],tree[2*index+1]);
} 
//range query
int query(int index,int start,int end,int l,int r){
	if(start>end or r<start or end<l) return 0 ;//out of range
	if(lazy[index]!=0){
		tree[index]+=lazy[index];
		if(start!=end){
			lazy[2*index]+=lazy[index];
			lazy[2*index+1]+=lazy[index];			
		}
		lazy[index]=0;
	}
	//within range
	if(l<=start and end<=r){return tree[index];}
	int mid=(start+end)/2;
	int l=query(2*index,start,mid,l,r);
	int r=query(2*index+1,mid+1,l,r);
	return max(l,r);
}   	
		
