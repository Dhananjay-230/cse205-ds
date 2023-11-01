class Solution {
public:
   
    int quick_partition(vector<int>& arr, int left, int right){
        int pivot = arr[left];
        int l = left + 1; 
        int r = right;
        int n = arr.size();
        
        while(l<=r){
            if(arr[l]>pivot && arr[r]<pivot){ 
                swap(arr[l],arr[r]);
                l++;
                r--;
            }
            if(l<=r && arr[l]<=pivot){ 
                l++;
            }
            if(l<=r && arr[r]>=pivot){
                r--;
            }
        }
        swap(arr[left],arr[r]); 
        return r; 
    }

    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        int left = 0, right = n-1;
        while(true){
            int pos = quick_partition(nums, left, right);
            if(pos == n-k) return nums[pos];
            else if(pos < n-k) left = pos+1; 
            else right = pos-1; 
        }
    }
};