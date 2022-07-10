class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> ump;
        for(auto i:nums){
            ump[i]++;
        }
        vector<vector<int>> bucket(nums.size()+1);
        for(auto [key,value]: ump){
            bucket[ump[key]].push_back(key);
        }
        reverse(bucket.begin(),bucket.end());
        vector<int> ans;
        for(auto i:bucket){
            for(auto j:i){
                ans.push_back(j);
                if(ans.size()==k){
                    return ans;
                }
            }
        }
        return ans;
    }
};