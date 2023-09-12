//Given a number N. Check if it is perfect or not. A number is perfect if sum of factorial of its digit is equal to the given number.

// Example 1:

// Input: N = 23
// Output: 0
// Explanation: The sum of factorials of 
// digits of 23 is 2! + 3! = 2 + 6 = 8 
// which is not equal to 23. Thus, answer 
// is 0.

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
   int fact(int n){
       if(n==0||n==1) return 1;
       return n*fact(n-1);
   }
    int isPerfect(int N) {
        // code here
        int temp=N;
        int sum=0;
        while(N){
            int rem=N%10;
            //cout<<rem<<endl;
            sum+=fact(rem);
            N/=10;
        }
       // cout<<"sum is "<<sum<<" "<<N<<endl;
        if(sum==temp) return 1;
        return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isPerfect(N) << "\n";
    }
}

// } Driver Code Ends