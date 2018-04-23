struct node{
	//all required info about each node will be stored here
	int data,count;
	//lazy here you go
	
	void merge(node l,node r){
		//merge two nodes
		
	}
};
node tree[4*123456];
void build(int index,int start,int end){
	if(start>end) return ;
	if(start==end){
		//tree[index].data=arr[start];
		
		return;
	}
	int mid=(start+end)>>1;
	build(2*index,start,mid);
	build(2*index+1,mid+1,end);
	tree[index].merge(tree[2*index],tree[2*index+1]);
}
void update(int index,int start,int end,int l,int r,int val){
	if(start>end or r<start or end<l) return ;
	if(l<=start and end<=r){
		
		return ;
	}
	int mid=(start+end)>>1;
	update(2*index,start,mid,l,r,val);
	update(2*index+1,mid+1,end,l,r,val);
	tree[index].merge(tree[2*index],tree[2*index+1]);
}
node query(int index,int start,int end,int l,int r){
	node result;
	if(start>end or r<start or end<l) return result;
	if(l<=start and end<=r)  return tree[index];
	int mid=(start+end)>>1;
	node left=query(2*index,start,mid,l,r);
	node right=query(2*index+1,mid+1,end,l,r);
	result.merge(left,right);
	return result;
}