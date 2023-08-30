lass Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = 1, i = 0, count = 0, ans;
        while (count != k) {
            if (i < arr.size() && arr[i] == n) {
                i++;
            } else {
                count++;
                ans = n;
            }
            n++;
        }
        return ans;
    }
};
