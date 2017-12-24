//my first java program in CP
import java.util.*;
class AMR10G{
	public static void main(String args[]){
		int T;
		Scanner s=new Scanner(System.in);
		T=s.nextInt();
		for(int i=0;i<T;i++){
				int n,q;
				n=s.nextInt();
				q=s.nextInt();
				int arr[]=new int[n];
				int arr1[]=new int[n-1];
				for(int j=0;j<n;j++)
					arr[j]=s.nextInt();
				Arrays.sort(arr);
				for(int j=0;j<n-1;j++)
					arr1[j]=Math.abs(arr[j]-arr[j+1]);
				/*for (int j=0;j<n-1 ;j++ ) {
					System.out.print(arr1[j]+" ");
				}*/
				System.out.println();
				Arrays.sort(arr1);
				int ans=0;
				for(int j=0;j<q-1;j++)
					ans+=arr1[j];
				System.out.println(ans);
		}
	}
}