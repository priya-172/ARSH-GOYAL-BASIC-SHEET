//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int isPerfectSquare(long long int num){
    long int high=100000;
     long int low=1;
     while(low<=high){
     long int mid=low+(high-low)/2;
     long int s=mid*mid;
     if(s==num) return true;
     if(s<num) low=mid+1;
     else
      high=mid-1;
     } 
     return false;  // code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.isPerfectSquare(n) << endl;
    }
    return 0;
}

// } Driver Code Ends