//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    
    bool imatching(char a, char b){
        return((a=='(' and b==')')||(a=='{' and b=='}')||(a=='[' and b==']'));
    }
    //Function to check if brackets are balanced or not.
    bool ispar(string s)
    {
        // Your code here
        stack<char>st;
        int n=s.size();
        for(int i=0;i<n;++i){
            if(s[i]=='('||s[i]=='{'||s[i]=='[') st.push(s[i]);
            else{
                if(st.empty()) return false;
                else if(imatching(st.top(),s[i])==false) return false;
                else st.pop();
            }
        }
        return (st.empty()==true);
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends

//way 2
class Solution {
public:
 unordered_map<char,int>m={{'(',-1},{'{',-2},{'[',-3},{')',1},{'}',2},{']',3}};
    bool isValid(string s) {
   stack<int>st;
     for(char i : s){
         if(m[i]<0) st.push(i);
         else{
             if(st.empty()) return false;
             char top=st.top();
             st.pop();
             if(m[top]+m[i]!=0) return false;
         }
     }
     return st.empty();
    
    }
};