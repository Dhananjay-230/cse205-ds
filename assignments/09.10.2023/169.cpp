class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int k = 0, j = 0, ans = 0;

        for (int i = 0; i < nums.size(); i++) {
            while (j < nums.size() && nums[j] == nums[i]) {
                k++;
                j++;
            }
            if (k > nums.size() / 2) {
                ans = nums[i];
            }
            k = 0;
        }
        return ans;
    }
};
