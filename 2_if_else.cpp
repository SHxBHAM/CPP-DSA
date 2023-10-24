#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"please enter the value: ";
    cin>>n;
    if(n>0){
        cout<<"the value is positive.";
    }
    else if(n<0){
        cout<<"the value is negative.";
    }
    else{
        cout<<"the value is 0";
    }
}