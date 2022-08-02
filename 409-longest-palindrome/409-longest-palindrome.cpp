class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> ump;
       int ans =0;
        for(auto i:s){
            ump[i]++;
            if(ump[i]%2==0){
                ans+=ump[i];
                ump[i] = 0;
            }
        }
        for(auto[key,value]:ump){
            if(value==1){
                ans+=1;
                break;
            }
        }
return ans;
    }
};