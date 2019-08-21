#include<bits/stdc++.h>
using namespace std;

class Job {
public:
	int jobid,deadline,profit;

	Job(){}

	Job(int jobid,int deadline,int profit) : jobid(jobid),deadline(deadline),profit(profit) {
	
	}
	~Job(){}
	
};

class DisjointSet {
	int *parent;
public:
	DisjointSet(int n){
		//N disjoint sets
		parent = new int[n];
		
		//initially parent of i is i
		for(int i=0;i<=n;i++){
			parent[i] = i;
		}
	}

	//Given Source item , find its set, will return root of the set to which Source belongs and uses path compression
	int find(int s){
		if(s==parent[s])
			return s;
		return parent[s] = find(parent[s]);
	}

	//merge two sets
	int mergeSet(int v1, int v2){
		parent[v2] = v1;
	}


	~DisjointSet(){
		delete parent;
	}
	
};

int comp(Job &a , Job &b){
	return a.profit > b.profit;
}

int findMaxDeadline(Job jobs[] , int n){
	int ans = INT_MIN;
	for(int i=0;i<n;i++){
		ans = max(ans , jobs[i].deadline);
	}
	return ans;
}

void printSchedule(Job jobs[] , int n){
	
	sort(jobs , jobs+n , comp);
	
	DisjointSet s(findMaxDeadline(jobs,n));

	for(int i=0;i<n;i++){
		int as = s.find(jobs[i].deadline);

		if(as>0){
			s.mergeSet(s.find(as-1),as);
			cout<<jobs[i].jobid;
		}
	}
}

int main(){

	Job arr[5];
	for(int i=0;i<5;i++) {
		int a,b,c;
		cin>>a>>b>>c;
		arr[i] = Job(a,b,c);
	}

	printSchedule(arr,5);

	return 0;
}
