class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        stack<int> s;
        vector<int> nextGreater(n, -1); 

        for (int i = 0; i < n; i++) {
            while (!s.empty() && nums2[i] > nums2[s.top()]) {
                nextGreater[s.top()] = nums2[i];
                s.pop();
            }
            s.push(i);
        }

        vector<int> result;
        for (int num1 : nums1) {
            int index = -1;
            for (int i = 0; i < n; i++) {
                if (nums2[i] == num1) {
                    index = i;
                    break;
                }
            }
            result.push_back(nextGreater[index]);
        }

        return result;
    }
};
