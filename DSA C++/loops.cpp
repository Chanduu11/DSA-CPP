 #include<iostream>
using namespace std;
int main() {
   int n; 
   cout<<"Enter the value of n:"<<endl;
   cin>>n;
   int sum=0, i;
   for(i=1;i<=n;i++)
   sum=sum+i;
   cout<<"Sum of all"<<n<<" natural numbers upto "<<sum;
   return 0;
}