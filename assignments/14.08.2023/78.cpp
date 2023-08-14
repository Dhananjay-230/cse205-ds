#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> current;
        generateSubsets(nums, 0, current, result);
        return result;
    }

private:
    void generateSubsets(vector<int>& nums, int index, vector<int>& current, vector<vector<int>>& subsets) {
        subsets.push_back(current);  // Include the current subset
        
        for (int i = index; i < nums.size(); ++i) {
            current.push_back(nums[i]);
            generateSubsets(nums, i + 1, current, subsets);  // Move to the next index
            current.pop_back();  // Backtrack
        }
    }
};