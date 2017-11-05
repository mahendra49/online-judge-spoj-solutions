#include<stdio.h>
int sa,nodes,queue[100],edges,front=-1,rear=-1,adj[100][100],visited[100]={0};
void push(int x){
	if(rear==99)
		return;
	else{
		if(front==-1)
			front=0;
		rear++;
		queue[rear]=x;
		//printf("%s\n","insetred");
	}
}
int pop(){
	if(front==-1)
		return -1;
	else if(front==rear){
		front=rear=-1;
		return -1;
	}
	else{
		int ans=queue[front];
		front++;
		return ans;
	} 
}
void dfs(int s){
	if(visited[s]==1) return;
	visited[s]=1;
	printf("%d ",s);
	for(int i=1;i<=nodes;i++){
		if(visited[i]==0 && adj[s][i]==1){
			dfs(i);
		}
	}
	
}
void bfs(int s){
	push(s);
	visited[s]=1;
	//printf("%d ",s);
	int ans=queue[front];
	while(ans!=-1){
		ans=queue[front];
		printf("%d ",ans);
		for(int i=1;i<=nodes;i++){
			if(visited[i]==0 && adj[ans][i]==1){
				push(i);
			}
		}
		 visited[ans]=1;
		 ans=pop();

		 
	}
}
int main(){
	printf("enter number of nodes\n");
	scanf("%d",&nodes);
	printf("enter number of edges\n");
	scanf("%d",&edges);
	while(edges--){
		int a,b;
		scanf("%d%d",&a,&b);
		adj[a][b]=1;
		adj[b][a]=1;
	}
	printf("matrix is\n");
	for(int i=1;i<=nodes;i++){
		for(int j=1;j<=nodes;j++)
			printf("%d ",adj[i][j]);
		printf("\n");
	}
	printf("%s\n","1- for DFS\n 2- BFS" );
	int tmp;
	scanf("%d",&tmp);
	if(tmp==1){
		printf("%s\n","enter source vertex");
		int y;
		scanf("%d",&y);
		dfs(y);
	}
	else if(tmp==2){
		printf("%s\n","enter source vertex");
		int y;
		scanf("%d",&y);
		bfs(y);
	}
	return 0;
}
