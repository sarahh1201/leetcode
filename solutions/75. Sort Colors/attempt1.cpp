class Solution {
public:
    void sortColors(vector<int>& nums) {
        int red = 0;   // 0
        int white = 0; // 1
        int blue = 0;  // 2

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                red++;
            } else if (nums[i] == 1) {
                white++;
            } else {
                blue++;
            }
        }

        nums.erase(nums.begin(), nums.end());

        for (int i = 0; i < red; i++) {
            nums.push_back(0);
        }
        for (int i = 0; i < white; i++) {
            nums.push_back(1);
        }
        for (int i = 0; i < blue; i++) {
            nums.push_back(2);
        }
    }
};
