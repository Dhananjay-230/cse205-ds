class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int k = 0;
        vector<int> arr;
        for(int i =0;i<nums.size();i++){
            if(nums[i]==0){
                arr.push_back(k);
                k=0;
                continue;
                
            }
            if(nums[i]==1){
                k++;
            }
            
        }
        arr.push_back(k);
        sort(arr.begin(),arr.end());
        return arr[arr.size()-1];
    }
};