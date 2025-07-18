class Solution {
public:
    int findGCD(vector<int>& nums) {
        int min = *min_element(nums.begin(), nums.end());
        int max = *max_element(nums.begin(), nums.end());

        for (int i = min; i > 0; i--) {
            if (max % i == 0 && min % i == 0) {
                return i;
            }
        }

        return -1;
    }
};
