class Twitter {
public:
    unordered_map<int,vector<pair<int,int>>>tweet;
    unordered_map<int,unordered_set<int>>fol;
    int time;
    Twitter() {
        time=0;
    }
    
    void postTweet(int userId, int tweetId) {
        tweet[userId].push_back({time++,tweetId});
        
    }
    
    vector<int> getNewsFeed(int userId) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(auto &a:tweet[userId]){
                if(pq.size()==10){
                    if(a.first>pq.top().first){
                        pq.pop();
                        pq.push(a);
                    }
                }
                else pq.push(a);
        }
        for(auto &b:fol[userId]){
            for(auto &a:tweet[b]){
            if(pq.size()==10){
                    if(a.first>pq.top().first){
                        pq.pop();
                        pq.push(a);
                    }
                }
                else pq.push(a);
            }

        }
        int s=pq.size();
        vector<int>ans(s);
        for(int i=s-1;i>=0&&!pq.empty();i--){
            ans[i]=pq.top().second;
            pq.pop();
        }
        return ans;
        
        
    }
    
    void follow(int followerId, int followeeId) {
        if(followerId!=followeeId) fol[followerId].insert(followeeId);
    }
    
    void unfollow(int followerId, int followeeId) {
        fol[followerId].erase(followeeId);
    }
};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */