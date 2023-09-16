class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int tar) {
       map<int,int>mp;
       vector<int>v;
        int n= nums.size();
        for(int i=0;i<n;++i){
            int ele=tar-nums[i];
            if(mp.find(ele)!=mp.end()){
                v.push_back(i);
                v.push_back(mp[ele]);
                break;
            }else{
                mp[nums[i]]=i;
            }
        }
        return v;
 