#include<iostream>
using namespace std;
bool checkPalindrome(int a[],int s, int e){
        if(s>e){
            return true;
        }
        if(a[s]==a[e]){
            return checkPalindrome(a,s+1,e-1);
        }
        else{
            return false;
        }
    }
int main(){
    int a[]={1,5,6,7,6,5,1};
    cout<<checkPalindrome(a,0,6);
    
    return 0;
}