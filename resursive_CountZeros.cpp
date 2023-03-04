#include<iostream>
using namespace std;
int CountZeros(int n){
    if(n==0){
        return 0;
    }
    int smallAns=CountZeros(n/10);
    int lastDigit=n%10;
    if(lastDigit==0){
        return 1+smallAns;
    }else{
        return smallAns;
    }
}
int main(){
    int n;
    cout<<"Number of Zeros"<<endl;
    cin>>n;
    cout<<"The Number of Zeros is: "<<CountZeros(n);
    
    return 0;
}