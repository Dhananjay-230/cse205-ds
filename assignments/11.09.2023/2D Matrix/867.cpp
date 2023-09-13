class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int numRows = matrix.size();
        int numCols = matrix[0].size();

        
        vector<vector<int>> transposedMatrix(numCols, vector<int>(numRows));

       
        for (int i = 0; i < numRows; i++) {
            for (int j = 0; j < numCols; j++) {
                transposedMatrix[j][i] = matrix[i][j];
            }
        }

        return transposedMatrix;
    }
};
