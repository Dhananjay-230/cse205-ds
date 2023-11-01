class Solution {
public:
    static bool compi(pair<int,int> &a, pair<int,int> &b){
        return b.second<a.second;
    }
    vector<pair<int,int>> frequency;
    Solution(){
        frequency.resize(20001);
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        for(auto x:frequency){
            x.first=0;
            x.second=0;
        }
        for(int x:nums){
            frequency[10000+x].first=x;
            frequency[10000+x].second++;
        }
        sort(frequency.begin(), frequency.end(), compi);
        vector<int> ans;
        for(int i=0; i<k; i++){
            ans.push_back(frequency[i].first);
        }
        return ans;
    }
};