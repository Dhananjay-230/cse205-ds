
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        return processString(s) == processString(t);
    }

private:
    string processString(const string& str) {
        string typedString;
        
        for (char ch : str) {
            if (ch == '#') {
                if (!typedString.empty()) {
                    typedString.pop_back(); 
                }
            } else {
                typedString.push_back(ch);
            }
        }
        
        return typedString;
    }
};
