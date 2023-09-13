
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int freshCount = 0;
        int minutes = 0;

        
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (grid[i][j] == 1) {
                    freshCount++;
                }
            }
        }

        
        vector<pair<int, int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

        
        while (freshCount > 0) {
            int currentFreshCount = freshCount;
            int currentMinutes = minutes;

            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    if (grid[i][j] == currentMinutes + 2) {
                        for (const auto& dir : directions) {
                            int newRow = i + dir.first;
                            int newCol = j + dir.second;

                            if (newRow >= 0 && newRow < rows && newCol >= 0 && newCol < cols && grid[newRow][newCol] == 1) {
                                grid[newRow][newCol] = currentMinutes + 3;
                                freshCount--;
                            }
                        }
                    }
                }
            }


            if (currentFreshCount == freshCount) {
                break;
            }

            minutes++;
        }

        return freshCount == 0 ? minutes : -1;
    }
};
