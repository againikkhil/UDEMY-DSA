#include<iostream>
using namespace std;
int lastIndex(int a[], int n,int x, int i){
    if(i==-1){
        return -1;
    }
    if(a[i]==x){
       return i;
    }
     return lastIndex(a,n,x,i-1);
}

int lastIndex2(int a[], int n,int x){
    if(n==0){
        return -1;
    }
    if(a[n-1]==x){
       return n-1;
    }
     return lastIndex2(a,n-1,x);
}
int main(){
    int a[]={5,5,6,5,6,7};
    cout<<lastIndex2(a,6,5)<<endl;
    return 0;
}