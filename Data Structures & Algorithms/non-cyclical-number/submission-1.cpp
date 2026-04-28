class Solution {
public:
    int sqSumOfDigits(int n) {
        long long sum = 0;
        while(n > 0){
            int ld = n % 10;
            sum += ld * ld;
            n /= 10;
        }
        return (int)sum;
    }

    bool isHappy(int n) {
        unordered_map<int, int> freq;
        
        while(n != 1) {
            n = sqSumOfDigits(n);
            if(n == 1) return true;
            if(freq[n] > 0) return false;
            freq[n]++;
        }
        
        return true;
    }
};