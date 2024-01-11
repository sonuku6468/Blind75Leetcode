#include <iostream>
#include <vector>
#include <string>

using namespace std;
class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        if (board.empty() || board[0].empty()) {
            return false;
        }
        
        int rows = board.size();
        int cols = board[0].size();
        
        vector<vector<bool>> visited(rows, vector<bool>(cols, false));
        
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (backtrack(board, visited, i, j, word, 0)) {
                    return true;
                }
            }
        }
        
        return false;
    }
    
    bool backtrack(vector<vector<char>>& board, vector<vector<bool>>& visited, int row, int col, string& word, int index) {
        if (index == word.size()) {
            return true;
        }
        
        if (row < 0 || row >= board.size() || col < 0 || col >= board[0].size() || visited[row][col] || board[row][col] != word[index]) {
            return false;
        }
        
        visited[row][col] = true;
        
        bool exist = backtrack(board, visited, row - 1, col, word, index + 1) ||
                      backtrack(board, visited, row + 1, col, word, index + 1) ||
                      backtrack(board, visited, row, col - 1, word, index + 1) ||
                      backtrack(board, visited, row, col + 1, word, index + 1);
        
        visited[row][col] = false;
        
        return exist;
    }
};

int main() {
    Solution sol;
    vector<vector<char>> board = {
        {'A', 'B', 'C', 'E'},
        {'S', 'F', 'C', 'S'},
        {'A', 'D', 'E', 'E'}
    };
    string word = "ABCCED";
    cout << (sol.exist(board, word) ? "true" : "false") << endl;
    return 0;
}