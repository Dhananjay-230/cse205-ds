class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) 
    {
        std::unordered_map<int, int> hashMap;

        for( int i = 0; i < nums.size(); i++ )
        {
            int hashKey = nums[i];
            auto it = hashMap.find(hashKey);

            
            if( it == hashMap.end() )
            {
                
                hashMap[ hashKey ] = i;
            }
            else
            {
               
                int delta = i - it->second;

               
                if( delta <= k )
                {
                    return true;
                }
                else
                {
                
                    hashMap[ hashKey ] = i;
                }
            }
        }   

        return false;
    }
};