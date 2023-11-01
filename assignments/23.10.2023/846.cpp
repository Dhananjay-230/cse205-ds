class Solution {
public:
    bool exist(unordered_map<int, int> &counter, int top, int groupSize){
        while(groupSize){
            if(counter.find(top) == counter.end() || counter[top] == 0)
                return false;
            counter[top]--;
            top++;
            groupSize--;
        }
        return true;
    }

    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n = hand.size();
        if(n%groupSize !=0)
            return false;

        unordered_map<int, int> counter;
        priority_queue<int, vector<int>, greater<int>> minheap;
        for(int num: hand){
            if(counter.find(num) == counter.end()){
                counter[num] = 1;
                minheap.push(num);
            }
            else
                counter[num]++;
        }

        while(!minheap.empty()){
            int top = minheap.top();
            if(counter[top] == 0){
                minheap.pop();
                continue;
            }
            if(!exist(counter, top, groupSize))
                return false;
        }
        return true;
    }
};