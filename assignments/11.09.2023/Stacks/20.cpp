class Solution {
public:
    bool isValid(string s) {
        stack<char> bracketsStack;

        for (char ch : s) {
            if (ch == '(' || ch == '[' || ch == '{') {
                bracketsStack.push(ch);
            } else if (ch == ')' || ch == ']' || ch == '}') {
                if (bracketsStack.empty() || !isValidPair(bracketsStack.top(), ch)) {
                    return false;
                }
                bracketsStack.pop();
            }
        }

       
        return bracketsStack.empty();
    }

private:
    bool isValidPair(char openBracket, char closeBracket) {
        return (openBracket == '(' && closeBracket == ')') ||
               (openBracket == '[' && closeBracket == ']') ||
               (openBracket == '{' && closeBracket == '}');
    }
};
