// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
using namespace std;
void merge(int arr[],int low,int mid,int high){
int temp[high-low+1];
int i=low,j=mid+1,k=0;
while(i<=mid and j<=high){
    if(arr[i]<=arr[j]) temp[k++]=arr[i++];
    else temp[k++]=arr[j++];

}
while(i<=mid) temp[k++]=arr[i++];
while(j<=high) temp[k++]=arr[j++];
 for (i = low; i <= high; ++i)
    {
        arr[i] = temp[i - low];
    }
}

void mergeSort(int arr[],int low,int high){
    if(low>=high) return;
    if(low<high){
    int mid=(low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
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
    mergeSort(arr, 0,n-1);
    print(arr, n);
    return 0;
}