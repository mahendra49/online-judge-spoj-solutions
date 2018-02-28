import java.util.*;
import java.io.*;
import java.lang.Math;
class TreatsForTheCows{
	
	static int solve(int tmparr[][],int arr[],int left,int right,int day){
			//if(right>left) return -10000;
			if(left==right) return arr[left]*day;
			if(tmparr[left][right]!=0) return tmparr[left][right];
			return tmparr[left][right]=Math.max(solve(tmparr,arr,left+1,right,day+1)+arr[left]*day,solve(tmparr,arr,left,right-1,day+1)+arr[right]*day);
	}
	public static void main(String args[]) throws Exception{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int n;
		n=Integer.parseInt(br.readLine());
		int arr[]=new int[n];
		for(int i=0;i<n;i++){
			int tmp;
     		tmp=Integer.parseInt(br.readLine());
     		arr[i]=tmp;
     	}
     	int tmparr [][]=new int[2000][2000];
     	//System.out.println(tmparr[0][1]);
     	System.out.println(solve(tmparr,arr,0,n-1,1));

	}
}