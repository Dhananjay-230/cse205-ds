class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int temp = 0,c=0,k=0,digit;
        for(int i = 0;i<nums.size();i++){
            int temp = nums[i];
            while(temp!=0){
                digit = temp % 10;
                c++;
                temp = temp / 10;
            }
            if(c%2==0){
                k++;
            }
            c=0;
        }
        return k;
    }
};