class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> ump;
        for(auto& i:strs){
            string temp = i;
            sort(temp.begin(),temp.end());
            ump[temp].push_back(i);
        }
        vector<vector<string>> ans;
        for(auto [key,value] : ump){
            ans.push_back(value);
        }
        return ans;
    }
};