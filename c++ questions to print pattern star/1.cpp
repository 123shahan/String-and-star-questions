// PRINT THE STAR
//*
//**
//***
//****
#include<iostream>
using namespace std;
 int main(){

    int num;
    cout<<"enter the no rows:";
    cin>>num;
    for ( int i = 1; i <=num; i++){
        for (int j = 1; j <= i; j++){

            cout<<"*";
        }
        
        cout<<endl;
    }
    













    return 0;
 }