#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int arr[3][3]={0};
    int arr1[9] = {8, 3, 4, 1, 5, 9, 6, 7, 2};
    int arr2[9] = {6, 1, 8, 7, 5, 3, 2, 9, 4};
    int arr3[9] = {2, 7, 6, 9, 5, 1, 4, 3, 8};
    int arr4[9] = {4, 9, 2, 3, 5, 7, 8, 1, 6};
    int arr5[9] = {6, 7, 2, 1, 5, 9, 8, 3, 4};
    int arr6[9] = {2, 9, 4, 7, 5, 3, 6, 1, 8};
    int arr7[9] = {8, 1, 6, 3, 5, 7, 4, 9, 2};
    int arr8[9] = {4, 3, 8, 9, 5, 1, 2, 7, 6};
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    int count4 = 0;
    int count5 = 0;
    int count6 = 0;
    int count7 = 0;
    int count8 = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    int arrTemp[9]={0};
    int m = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arrTemp[m] = arr[i][j];
            m++;
        }
    }
    for (int i = 0; i < 9; i++)
    {
        count1 += abs(arrTemp[i] - arr1[i]);
        count2 += abs(arrTemp[i] - arr2[i]);
        count3 += abs(arrTemp[i] - arr3[i]);``
        count4 += abs(arrTemp[i] - arr4[i]);
        count5 += abs(arrTemp[i] - arr5[i]);
        count6 += abs(arrTemp[i] - arr6[i]);
        count7 += abs(arrTemp[i] - arr7[i]);
        count8 += abs(arrTemp[i] - arr8[i]);
    }
    cout << min(count1, min(count2, min(count3, min(count4, min(count5, min(count6, min(count7, count8)))))));
    return 0;
}
