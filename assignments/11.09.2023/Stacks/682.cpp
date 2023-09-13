class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> scores;

        for (const string& op : operations) {
            if (op == "+") {
                int top = scores.top();
                scores.pop();
                int newScore = top + scores.top();
                scores.push(top);
                scores.push(newScore);
            } else if (op == "D") {
                int doubled = 2 * scores.top();
                scores.push(doubled);
            } else if (op == "C") {
                scores.pop();
            } else {
                int score = std::stoi(op);
                scores.push(score);
            }
        }

        int totalScore = 0;
        while (!scores.empty()) {
            totalScore += scores.top();
            scores.pop();
        }

        return totalScore;
    }
};
