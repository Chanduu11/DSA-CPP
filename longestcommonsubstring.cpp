#include<iostream>
using namespace std;
 int solve(int i, int j, string &s1, string &s2,int &max_len, int &index, int count){
    if(i==s1.length()|| j==s2.length()){
        return count;
    }
    if(s1[i]==s2[j]){
         
        count=solve(i+1,j+1,s1,s2,max_len,index,count+1);
    
    if(count>max_len){
        max_len=count;
        index=i-max_len+1;
    }
    }
    int count1=solve(i+1,j,s1,s2,max_len,index,0);
    int count2=solve(i,j+1,s1,s2,max_len,index,0);
    return max(count, max(count1,count2));
 }
 int main(){
    string s1,s2;
    cin>>s1>>s2;
    int index=0;
    int max_len=0;
    int ans=solve(0,0,s1,s2,max_len,index,0);

    string temp=s1.substr(index,max_len);
    int val=0;
    for(auto c : temp){
        val=val+c;
    }
    cout<<val<<endl;
 }