class Solution {
public:
    string removeStars(string s) {
        stack<int> starStack;
        string result;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '*') {
                if (!starStack.empty()) {
                    int pos = starStack.top();
                    starStack.pop();
                    result.erase(pos, 1); 
                }
            } else {
                starStack.push(result.length()); 
                result.push_back(s[i]); 
            }
        }

        return result;
    }
};
