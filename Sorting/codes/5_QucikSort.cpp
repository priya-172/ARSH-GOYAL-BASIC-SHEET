#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
//partiitong algo
int partition(vector<int>&arr, int low, int high){
    int pivot=arr[low];
    int i=low,j=high;
    while(i<j){
    while(pivot>=arr[i] and i<=high) i++;
    while(pivot<arr[j] and j>=low) j--;
    if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[j],arr[low]);
    return j;

}

void QuickSort(vector<int>&arr,int low,int high){
    if(low>=high) return;
    int paritioningPosition=partition(arr,low,high);
    QuickSort(arr,0,paritioningPosition-1);
    QuickSort(arr,paritioningPosition+1,high);
}
void print(vector<int>&arr, int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    cout<<"enter elements"<<" ";
    for(int i=0;i<arr.size();++i){
        cin>>arr[i];
    }
    QuickSort(arr,0,n-1);
    print(arr,n);
}