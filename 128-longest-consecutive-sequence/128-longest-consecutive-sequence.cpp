class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       if(nums.empty()){
           return 0;
       }
        unordered_map<int,int> ump;
        for(auto i:nums){
            ump[i]++;
        }
        
        int ans = 1;
        for(int i=0;i<nums.size();++i){
            if(ump.find(nums[i]-1)!=ump.end()){
                continue;
            }
            else{
                int k = nums[i];
                int q = 1;
                while(ump.find(k+1)!=ump.end()){
                    ans = max(ans, ++q);
                    ++k;
                }
            }
        }
        return ans;
        
    }
};