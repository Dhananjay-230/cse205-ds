class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        bool b;
        for(int i = 0; i < nums.size();i++){
            int temp = target - nums[i];
            for(int j = 0; j < nums.size();j++){
                if(temp == nums[j]){
                    ans.push_back(i);
                    ans.push_back(j);
                    b = true; 
                    break;
                }
            }
        }
        return ans;
    }
};