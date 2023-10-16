class Solution {
public:
    int minSetSize(vector<int>& arr) {
        const int maxNum = 100001; 
        
        
        int frequency[maxNum] = {0};
        for (int num : arr) {
            frequency[num]++;
        }
        
        
        vector<int> freqValues;
        for (int i = 0; i < maxNum; i++) {
            if (frequency[i] > 0) {
                freqValues.push_back(frequency[i]);
            }
        }
        
        
        sort(freqValues.rbegin(), freqValues.rend());
        
        int total = 0;
        int count = 0;
        int halfLength = arr.size() / 2;
        
        
        for (int freq : freqValues) {
            total += freq;
            count++;
            if (total >= halfLength) {
                break;
            }
        }
        
        return count;
    }
};
