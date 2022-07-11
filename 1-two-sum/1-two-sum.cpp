class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> ump;
        for(int i=0;i<nums.size();++i){
            int k = target-nums[i];
            if(ump.find(k)!=ump.end()){
                return{i,ump[k]};
            }
            ump[nums[i]] = i;
        }
        return {-1,-1};
    }
};