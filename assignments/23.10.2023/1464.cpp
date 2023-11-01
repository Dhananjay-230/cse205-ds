class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max1 = *max_element(nums.begin(),nums.end());
        int i = ((max_element(nums.begin(),nums.end())-nums.begin()));
        nums[i]=-1;;
        int max2 = *max_element(nums.begin(),nums.end());
        cout<<max1<<" "<<max2;
        return (max1-1)*(max2-1);
    }
};