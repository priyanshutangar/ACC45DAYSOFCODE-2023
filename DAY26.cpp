#include<iostream>
using namespace std;
int sum(int arr[],int n)
{
  //base case
  if(n==0){
    return 0;
  }
  else if(n==1)
  {
    int a=arr[0];
    return a;
  }
  else
  {
    int b = sum(arr+1,n-1);
    int a=arr[0]+ b;
    return a;
  }
}
int main()
{
    int arr[6]={1,2,3,7,8,9};
    int n=6;
    int ans= sum(arr,n);
    cout<<ans;

    return 0;
}
