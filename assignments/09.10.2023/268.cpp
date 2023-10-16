class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = 0 , ans = 0 , k = 0 ;
        sort(nums.begin(),nums.end());
        for(int i = 0 ; i < nums.size(); i++){
            if(n!=nums[i]){
                ans = n;
                break;
            }
            n++;
            k++;
        }
        if(k==n){
            return n;
        }
        else{
            return ans;
        }
        
    }
};