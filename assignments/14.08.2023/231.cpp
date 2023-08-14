class Solution {
    
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) {
            return false;  // Negative or zero values cannot be powers of two
        }
        if (n == 1) {
            return true;  // 2^0 is a power of two
        }
        if (n % 2 != 0) {
            return false;  // If n is odd, it cannot be a power of two
        }
        return isPowerOfTwo(n / 2);  // Recur with n divided by 2
    }
};