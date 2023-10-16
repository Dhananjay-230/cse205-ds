class Solution {
public:
    string frequencySort(std::string s) {
        
        int charCount[128] = {0};
        for (char c : s) {
            charCount[c]++;
        }

        
        sort(s.begin(), s.end(), [&](char a, char b) {
            return charCount[a] > charCount[b] || (charCount[a] == charCount[b] && a < b);
        });

        return s;
    }
};
