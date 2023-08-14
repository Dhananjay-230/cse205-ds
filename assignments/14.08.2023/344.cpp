#include<iostream>
#include<vector>
using namespace std;
class Solution {
    
public:
    void reverseString(vector<char>& s) {
        reverseHelper(s, 0, s.size() - 1);
    }

private:
    void reverseHelper(vector<char>& s, int left, int right) {
        if (left >= right) {
            return;  // Base case: when left index is greater than or equal to right index
        }

        swap(s[left], s[right]);  // Swap characters at left and right indices
        reverseHelper(s, left + 1, right - 1);  // Recur with indices moved inwards
    }
};