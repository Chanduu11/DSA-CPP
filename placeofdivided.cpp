#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int D,Q,R;
    cin>>D>>Q>>R;
     
    int dividend=(D*Q)+R;
      int ans=-1;
    for(int i=0;i<n;i++){
        if(dividend==arr[i]){
            ans=i;
            break;
        }
    } 
    cout<<ans<<endl;
}