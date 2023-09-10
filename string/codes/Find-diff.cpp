// Example 1:

// Input: s = "abcd", t = "abcde"
// Output: "e"
// Explanation: 'e' is the letter that was added.
// Example 2:

// Input: s = "", t = "y"
// Output: "y"
 class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum1=0,sum2=0;
        for(auto i: s){
            sum1+=i;
        }
         for(auto j: t){
            sum2+=j;
        }
        return sum2-sum1;
    }
};