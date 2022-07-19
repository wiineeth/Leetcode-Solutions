class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int> exists;
        int i=0;
        int j=0;
        int ans =0;
        while(j<s.size()){
            if(exists.find(s[j])==exists.end()){
             exists.insert(s[j]);
                ++j;
                ans = max(ans,j-i);    
            }
            else{
                exists.erase(s[i]);
                ++i;
            }
        }
        return ans;
    }
};