class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<set<int>> row(9), col(9), grid(9);
        for(int i=0;i<9;++i){
            for(int j=0;j<9;++j){
                if(board[i][j] == '.'){continue;}
                int k = board[i][j];
                if(grid[(i/3)*3+j/3].count(k)||row[i].count(k)||col[j].count(k)){return false;}
                row[i].insert(k);
                col[j].insert(k);
                grid[(i/3)*3+j/3].insert(k);
            }
        }
        return true;
    }
};