class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ans(n,0);
        stack<pair<int,int>> stk;
        for(int i=temperatures.size()-1;i>=0;--i){
            while(stk.size()&&temperatures[i]>=stk.top().first){
                stk.pop();
            }
            if(stk.size()&&temperatures[i]<stk.top().first){
                ans[i] = stk.top().second - i;
            }
            stk.push({temperatures[i],i});
        }
        return ans;
    }
};