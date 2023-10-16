class Solution {
public:
    string customSortString(string order, string s) {
        
        auto customSort = [&](char a, char b) {
            return order.find(a) < order.find(b);
        };

        
        sort(s.begin(), s.end(), customSort);

        return s;
    }
};
