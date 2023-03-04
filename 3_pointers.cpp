#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main(){
    // int a=10;
    // int *p;
    // p=&a;
    // cout<<a<<endl;
    // printf("Using Pointer %d",*p);
    // int A[5]={2,4,6,8,10};
    // int *p;
    
    // creating an array in heap by using malloc function
    int *p;
    // p=(int*)malloc(5*sizeof(int));
    p=new int[5]; // in CPP
    p[0]=10; p[1]=15; p[2]=14; p[3]=21; p[4]=31; //in c
    
    // print all the values
    for(int i=0;i<5;i++)
    cout<<p[i]<<endl;
    delete[]p; //in cpp
    free(p);
    return 0;
    }