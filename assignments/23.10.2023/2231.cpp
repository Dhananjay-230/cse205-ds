class Solution {
public:
    int largestInteger(int num) {
       vector<int>odd;
       vector<int>even;
      
      int n = num;
       while(n!=0)
       {
           int rem = n%10;
           n/=10;

           if(rem&1) odd.push_back(rem);
           else even.push_back(rem);
       } 

       sort(odd.begin(),odd.end());
       sort(even.begin(),even.end());

        int i =0,j=0;
        long long div = 1;

        long long  ans = 0;
        while(num!=0 &&( i<odd.size() || j<even.size()))
        {
            int rem = num%10;
            num /=10;

            if(rem&1)
            {
                ans = odd[i]*div + ans;
                div*=10;
                i++;
            }
            else {
                ans = even[j]*div + ans;
                div*=10;
                j++;
            }
        }
        return ans;
    }

};