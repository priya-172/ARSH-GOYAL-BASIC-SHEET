#include <iostream>
#include <algorithm>
using namespace std;
void iterative(int arr[], int n)
{
     for(int i=0;i<n-1;i++)
    {
        //we don't want to compare last element as it is sorted
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    //bubble
    iterative(arr, n);
    print(arr, n);
    return 0;
}