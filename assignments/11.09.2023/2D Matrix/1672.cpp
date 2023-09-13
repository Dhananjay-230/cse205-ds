class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_sum = 0; // Initialize max_sum outside the loop
        int n_r = accounts.size();
        int n_c = accounts[0].size();

        for(int i = 0 ; i < n_r ; i++){
            int sum = 0; // Initialize sum inside the loop
            for(int j = 0 ; j < n_c ; j++){
                sum = sum + accounts[i][j];
            }
            max_sum = max(max_sum, sum);
        }

        return max_sum;
    }
};
