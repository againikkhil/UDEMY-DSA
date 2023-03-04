#include<iostream>
using namespace std;
void allIndexPos(int a[], int n, int x, int i){    // the return type of the function will be void because we are only printing value
    if(i==n){
        return;
    }
    if(a[i]==x){
        cout<<i<<" ";
    }
    allIndexPos(a,n,x,i+1);
}
int main(){
    int a[]={4,5,6,5,6};
    allIndexPos(a,5,5,0);
    return 0;
}