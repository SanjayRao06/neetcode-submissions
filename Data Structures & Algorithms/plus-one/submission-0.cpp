class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int end = digits.size() - 1;
        
        while (end >= 0) {
            if (digits[end] == 9) {
                digits[end] = 0;
                end--;
            } else {
                digits[end]++;
                return digits; 
            }
        }
        
        digits.insert(digits.begin(), 1);
        return digits;
    }
};