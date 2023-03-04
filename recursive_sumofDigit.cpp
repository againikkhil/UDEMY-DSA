#include<iostream>
using namespace std;
int sum(int n){
    if(n==0){
        return 0;
    }
    // resursive 
    int smallAns=sum(n/10);
    // calculation
    int lastDigit=n%10;
    return smallAns+lastDigit;
}
int main(){
     int n;
    cout<<"Digits"<<endl;
    cin>>n;
    cout<<"The Sum of digit is: "<<sum(n);
    return 0;
}