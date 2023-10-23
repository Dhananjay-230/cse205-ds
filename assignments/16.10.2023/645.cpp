class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int idx=abs(nums[i])-1;
            if(nums[idx]<0)v.push_back(idx+1);
            else nums[idx]*=-1;
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)v.push_back(i+1);
        }
        return v;
    }
};a