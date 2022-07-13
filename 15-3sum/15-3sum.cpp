class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        int n = nums.size();
        for(int i=0;i<n;++i){
            if(i>0&&nums[i]==nums[i-1]){
                continue;
            }
            int l = i+1;
            int r = n-1;
            while(l<r){
                int sum = nums[l]+nums[r]+nums[i];
                if(sum<0){
                    ++l;
                }
                else if(sum>0){
                    --r;
                }
                else{
                    ans.push_back({nums[i],nums[l],nums[r]});
                    while(l<r&&nums[l]==nums[l+1]){++l;}
                    while(r>l&&nums[r]==nums[r-1]){--r;}
                    ++l;
                    --r;
                }
            }
            
            
        }
        return ans;
    }
};