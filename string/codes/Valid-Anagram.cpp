// Example 1:

// Input: s = "anagram", t = "nagaram"
// Output: true
// Example 2:

// Input: s = "rat", t = "car"
// Output: false

class Solution {
public:
    bool isAnagram(string s, string t) {
       map<char,int>m;
     map<char,int>m1;
      
        for(auto i : s){
            m[i]++;
        }
         for(auto i : t){
            m1[i]++;
        }
        if(m==m1) return true;
    
        return false;
    }
};