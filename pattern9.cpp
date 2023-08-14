#include<iostream>
using namespace std;
int main()
{   
    int n;
    cin>>n;
    int r=1;
    while(r<=n){
        int space=n-r;
        while(space){
            cout<<" ";
            space=space-1;
        }
        int j=1;
        while(j<=r){
            cout<<j;
            j++;
        }
        int start=r-1;
        while(start){
            cout<<start;
            start = start - 1;
        }
        cout<<endl;
        r=r+1;
    } 
}
   