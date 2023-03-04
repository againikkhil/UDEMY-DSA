#include<iostream>
using namespace std;
void insertionSort(int n, int a[]){
    for(int i=1;i<n;i++){
        temp=a[i];
        j=n-1;
    }
    while(i>=n && a[j]>temp){
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=temp;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>n;
    }
    insertionSort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    return 0;
}