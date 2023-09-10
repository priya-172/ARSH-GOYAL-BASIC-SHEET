// Example 1:

// Input: words = ["bella","label","roller"]
// Output: ["e","l","l"]
// Example 2:

// Input: words = ["cool","lock","cook"]
// Output: ["c","o"]
 
class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        //to store the count of common element
        vector<int>common(26,INT_MAX);
        //to stroe the result
        vector<string>res;
        for(auto s :words){
            //to stroe the count of each element
            vector<int>count(26,0);
            //to count the frequency
            for(auto c:s) count[c-'a']++;
            // to store the min count of elements 
            //as we find the common elements in each string
            //so we need to stroe the min freq of them
            //eg ["cool","lock","cook"] 
            //in cool count of l -1, lock count of l-1 , cook of l -0
            //min count is-->0 so we store common[i]=0 for count of l

            for(int i=0;i<26;++i){
                common[i]=min(common[i],count[i]);
            
            }
        }
        //store the ouput in result
        for(int i=0;i<26;++i){
        //if common[i] is not 0 we have store it common[i] times as it includes duplicates    
            if(common[i]>0){
                while(common[i]--)res.push_back(string(1,i+'a'));//it means we are storing string size 1
            }
        }
return res;
    }
};