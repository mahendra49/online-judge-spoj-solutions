#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int n,q;
int curx=1,cury=1;
int prex=1,prey=1;
char arr[1234][1234];
void search(char sea){
    for(int i=0;i<n;i++)
        for(int j=0;j<q;j++)
            if(arr[i][j]==sea){
                curx=i+1;
                cury=j+1;
                return ;
            }
                
}
int search1(char sea){
    for(int i=0;i<n;i++)
        for(int j=0;j<q;j++)
            if(arr[i][j]==sea){
                curx=i+1;
                cury=j+1;
                arr[i][j]='#';
                return 1;
            }
    return 0;
                
}
int main() {
   
    cin>>n>>q;
   
    for(int i=0;i<n;i++)
        for(int j=0;j<q;j++)
            cin>>arr[i][j];
   
    string s;
    cin>>s;
    int ans=0;
    for(int i=0;i<s.length();i++){
        search(s[i]);
        ans+=(abs(curx-prex)+abs(cury-prey));
        
        //cout<<ans<<endl;
        prex=curx;
        prey=cury;
    }
    int qqx=prex,qqy=prey;
    int tmp=1000;
    while(true){
        int ans=search1('*');
         if(ans==0) break;
        ans=(abs(qqx-curx)+abs(qqy-cury));
       
        tmp=min(ans,tmp);
    }
    ans+=tmp;
    //cout<<curx<<" "<<cury<<endl;
    cout<<ans+s.length()+1<<endl;
    return 0;
}
