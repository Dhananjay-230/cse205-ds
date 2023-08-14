<<<<<<< HEAD
class Solution {
public:
    int sumOfMultiples(int n) {
        int ans = 0;
        for(int i = 3; i <= n; i++){
            if(((i%3)==0)||((i%5)==0)||((i%7)==0))ans += i;
        }
        return ans;
}
=======
class Solution {
public:
    int sumOfMultiples(int n) {
        int ans = 0;
        for(int i = 3; i <= n; i++){
            if(((i%3)==0)||((i%5)==0)||((i%7)==0))ans += i;
        }
        return ans;
}
>>>>>>> c33df6fbbe58bcb5160266d2efd25995c6b49e16
};