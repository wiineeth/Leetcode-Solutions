class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> ump;
        for(auto i:nums){
            ump[i]++;
            if(ump[i]>=nums.size()/2+1){return i;}
        }
        return 0;
    }
};