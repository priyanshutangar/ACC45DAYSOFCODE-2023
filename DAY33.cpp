#include<iostream>
using namespace std;
bool issorted(int arr[], int size)
{
    //base case
    if(size==0 or size==1)
    {
        return true;
    }
    if (arr[0]>arr[1])
    {
        return false;
    }
    else{
        bool ans=issorted(arr+1,size-1);
        return ans;

    }
}
int main()
{
    int arr[] = {1,2,4,8,6};
    int size=5;
    
    bool a=issorted(arr,size);
    if(a)
    {
        cout<<"array is sorted"<<endl;
    }
    else{
        cout<<"array is not sorted"<<endl;
    }
    return 0;
}
