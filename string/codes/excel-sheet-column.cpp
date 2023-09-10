For example:

A -> 1
B -> 2
C -> 3
...
Z -> 26
AA -> 27
AB -> 28 
...
 

Example 1:

Input: columnTitle = "A"
Output: 1
Example 2:

Input: columnTitle = "AB"
Output: 28
Example 3:

Input: columnTitle = "ZY"
Output: 701


class Solution {
public:
    int titleToNumber(string columnTitle) {
      int res=0;
        for(char i:columnTitle){
            int d=i-'A'+1;
            cout<<i<<char(i-'A'+'A')<<d<<endl;
            res=res*26+d;
        }
        return res;   
    }
};