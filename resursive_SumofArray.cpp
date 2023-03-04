#include<iostream>
using namespace std;
int sumofArray(int a[], int n){
    if(n==0){   
        return 0;
    }
    return a[0]+sumofArray(a+1, n-1);
}
int sumofArray2(int a[], int n){
    if(n==0){
        return 0;
    }   
    return a[n-1]+sumofArray(a, n-1);
}
int main(){
    int a[]={1,2,3,4,5};    
    cout<<"The Sum of the Array is: "<<endl;
    cout<<sumofArray2(a,5)<<endl;
    return 0;
}
