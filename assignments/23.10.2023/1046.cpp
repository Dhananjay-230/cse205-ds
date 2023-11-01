class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n=stones.size();
        while(stones.size()>1){
            sort(stones.begin(),stones.end());
            int maxi=stones.size()-1;
            int maxi1=stones.size()-2;
            if(stones[maxi]==stones[maxi1]){
                stones.erase(stones.begin()+maxi1,stones.begin()+maxi+1);
            }
            else if(stones[maxi]>stones[maxi1]){
                stones[maxi]=stones[maxi]-stones[maxi1];
                stones.erase(stones.begin()+maxi1);
            }
        }
        if(stones.size()==0){
            return 0;
        }
        return stones[0];
    }
};