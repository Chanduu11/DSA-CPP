#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=0;
    int i=0;

    while(n!=0){
        int bit=n & 1;
        a=(bit*pow(10,i)+a);
        n=n>>1;
        i++;
    }
    cout<<"Answer is:"<<a<<endl;
}