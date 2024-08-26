#include<iostream>
using namespace std;

bool binarysearch(int arr[], int s , int e, int key){
    if(s<e){
        return -1;

    }
    int mid=s+(e-s)/2;
    if(arr[mid]==key){
        return true;
    }
    if(arr[mid]>key){
        return binarysearch(arr, mid+1 , e , key);
    }
    else{
        return binarysearch(arr , s, mid-1, key);
    }
}
int main(){
    int arr[]={2,4,6,10,14,16};
    int size=6;
    int key=18;
    cout<<"Present or not "<<binarysearch<<endl;
    return 0;
}