#include<iostream>

using namespace std;
int main(){
    char ch;
    cin>>ch;
    cout<<"Enter the value of ch:"<<ch<<endl;
    if(ch>=65 && ch<=90){
        cout<<"UPPER CASE"<<endl;
    }
    else if(ch>=97 && ch<=122){
        cout<<"LOWER CASE"<<endl;

    } 
    else(ch>=0 && ch<=9);
    {
        cout<<"NUMERIC"<<endl;
    }
}