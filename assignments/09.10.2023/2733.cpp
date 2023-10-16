class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int res = -1 ;
        int min = INT_MAX ;
        int max = INT_MIN ;
        int size = nums.size() ;
        for(int i = 0;i < size;i++)
        {
            if(nums[i] < min)
                min = nums[i] ;
        }
        for(int i = 0;i < size;i++)
        {
            if(nums[i] > max)
                max = nums[i] ;
        }
        for(int i = 0;i < size;i++)
        {
            if(nums[i] != min and nums[i] != max)
            {
                res = nums[i] ;
                break ;
            }
        }
        return res ;
    }
};