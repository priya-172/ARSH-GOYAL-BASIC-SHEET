//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    string nextPalin(string N) { 
        //complete the function here
        string s= N.substr(0,N.size()/2);
        bool hasNextPermutation = next_permutation(s.begin(), s.end());
        if(!hasNextPermutation) return "-1";
        string st=s;
        reverse(st.begin(),st.end());
        if(N.size()%2==1) s+=N[N.size()/2];
        return s+st;
        
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution obj;
        cout << obj.nextPalin(s) << endl;
    }
    return 0;
}
// } Driver Code Ends