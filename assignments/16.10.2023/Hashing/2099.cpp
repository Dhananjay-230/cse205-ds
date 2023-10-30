typedef pair<int,int>p;
class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        priority_queue<p,vector<p>,greater<p>>pq;
        priority_queue<p,vector<p>,greater<p>>temp;
        for(int i=0;i<nums.size();i++)
        {
            pq.push({nums[i],i});
            if(pq.size()>k)
            {
                pq.pop();
            }
        }
        while(!pq.empty())
        {
            temp.push({pq.top().second,pq.top().first});
            pq.pop();
        }
        vector<int>ans;
        while(!temp.empty())
        {
            ans.push_back(temp.top().second);
            temp.pop();
        }
        return ans;

    }
};