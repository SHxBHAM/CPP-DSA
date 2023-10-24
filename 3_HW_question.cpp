// WAP to check if the provided character is numeric,lowercase or uppercase.
#include<iostream>
using namespace std;
int main(){
    char ch;

    cout<<"please enter character:";
    cin>>ch;
    if (ch>='a'&&ch<='z'){
        cout<<"the entered character is a lower case"<<endl;
    }
    else if (ch>='A'&&ch<='Z'){
        cout<<"the entered character is a upper case"<<endl;
    }
    else if (ch >= '0' && ch <= '9'){
        cout<<"the character is a numeric"<<endl;
    }
    else{
        cout<<"the entered character is a special character.";
    }
    return 0;
}