#include<iostream>
using namespace std;

void printLeaders(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int j;
        for (j = i+1; j < size; j++)
        {
            if (arr[i] <= arr[j])
                break;
        }    
        if (j == size)
            cout << arr[i] << ends;
  }
}
int main()
{
    int arr[] = {16, 17, 4, 5,3,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    printLeaders(arr, n);
    return 0;
}
