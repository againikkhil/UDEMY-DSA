#include<iostream>
using namespace std;
void selectionSort(int a[], int n ){
    for(int i=0;i<=n-2;i++){
        int minimum=i;
        for(int j=i+1;j<=n-1;j++){
            if(a[j]<a[minimum]){
            minimum=j;
        }
    }
    swap(a[i],a[minimum]);
}
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    selectionSort(a,n);
    for (int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}