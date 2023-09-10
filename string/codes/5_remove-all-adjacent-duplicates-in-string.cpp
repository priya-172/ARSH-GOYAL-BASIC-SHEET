
// Example 1:

// Input: s = "abbaca"
// Output: "ca"
// Explanation: 
// For example, in "abbaca" we could remove "bb" since the letters are adjacent and equal, and this is the only possible move.  The result of this move is that the string is "aaca", of which only "aa" is possible, so the final string is "ca".
// Example 2:

// Input: s = "azxxzy"
// Output: "ay"
 
class Solution {
public:
    string removeDuplicates(string s) {
       stack<char>st;
       string ans;
       int i=1,fl=0;
        for (int i=0;i<s.size();++i) {
            char c=s[i];
            if (!st.empty() && st.top() == c) {
                st.pop();
            } else {
                st.push(c);
            }
        }
        
        while (!st.empty()) {
            ans = st.top() + ans;
            st.pop();
        }
        
        return ans;
    }
};