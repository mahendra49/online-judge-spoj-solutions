#include<bits/stdc++.h>
using namespace std;
long n,s;
long arr[12345678];
int bs(long x){
    long pre=arr[0],cows=1;
    
    for(long i=1;i<n;i++){
        if(arr[i]-pre>=x)
        {
            cows++;
            pre=arr[i];
            if(cows==s)
            return(1);
        }
    }
        
        return(0);

}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>s;
       
        for(long i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        //for(int i=0;i<n;i++)
          //  cout<<arr[i];
        int start=0,end=arr[n-1],maxdis=-1;
        while(start<end){
            long mid=start+(end-start)/2;
            if(bs(mid)==1){
                if(mid>maxdis)
                    maxdis=mid;
                start=mid+1;
                    }
            else
                end=mid;

        }
        
        cout<<maxdis<<"\n";
    }
    return(0);
}