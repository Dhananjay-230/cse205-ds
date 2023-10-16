class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        
        auto customCompare = [&](int a, int b) {
            int indexA = getIndex(arr2, a); 
            int indexB = getIndex(arr2, b); 

            if (indexA != -1 && indexB != -1) {
                return indexA < indexB; 
            } else if (indexA != -1) {
                return true; 
            } else if (indexB != -1) {
                return false; 
            } else {
                return a < b; 
            }
        };

        
        sort(arr1.begin(), arr1.end(), customCompare);

        return arr1;
    }

private:
    int getIndex(vector<int>& arr, int target) {
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == target) {
                return i;
            }
        }
        return -1;
    }
};
