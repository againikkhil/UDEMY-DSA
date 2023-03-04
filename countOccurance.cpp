#include<iostream>
using namespace std;
void count(int a[], int n, int x, int i, int &ans){   
    if(i==n){
     return;
    }
    if(a[i]==x){
        ans++;
    }
   count(a,n,x,i+1,ans);
}
int count2(int a[], int n, int x, int i){   
    if(i==n){
     return 0;
    }
    if(a[i]==x){
        return 1+count2(a,n,x,i+1);
    }
    else{
        return count2(a,n,x,i+1);
    }
}
int main(){
    int a[]={4,5,6,5,6};
    int ans=0;
    count(a,5,4,0,ans);
    cout<<count2(a,5,4,0)<<endl;
    // cout<<ans<<endl;
    return 0;
}