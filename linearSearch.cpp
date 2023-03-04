#include<iostream>
using namespace std;
int linearSearch(int a[], int n, int key){
    for(int i=0;i<n;i++){
    if(a[i]==key){
        return i;
    }

return -1;
}
}
int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter Key"<<endl;
    int key;
    cin>>key;
    int pos =linearSearch(a,n,key);
    int pos=linearSearch(a,n,key);
    if (pos==-1){
        cout<<"Key is not found"<<endl;
    }
    else{
        cout<<" The Key Found at Index"<< pos <<endl;
    }
    return 0;
}