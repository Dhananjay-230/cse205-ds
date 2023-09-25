class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int value=tickets[k];
        int sum=0;

        for(int i=0;i<tickets.size();i++){
            if(i<=k){
                if(tickets[i]<=value ){
                    sum=sum+tickets[i];
                }
            
                else{
                    sum=sum+value;
                }
            }
            else{
                if(tickets[i]<value ){
                    sum=sum+tickets[i];
                }
                else{
                    sum=sum+value-1;
                }
            }
        }
        return sum;
    }
};