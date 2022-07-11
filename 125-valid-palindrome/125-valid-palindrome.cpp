class Solution {
public:
    bool isPalindrome(string s) {
        string temp = "";
        for(auto i: s){
            if(isalnum(i)){
                temp+=tolower(i);
            }
        }
        string temp2 = temp;
        reverse(temp2.begin(),temp2.end());
        return equal(temp.begin(),temp.end(),temp2.begin());
    }
};