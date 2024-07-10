// Reverse the string in c++ 
#include<iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){

    string str = "SHAHAN";

    reverse(str.begin(),str.end());// for reverse the string we use the begin and end fucntion for reversing the string.



    cout<<"Reversed string is "<< str <<endl;


    return 0;
}
