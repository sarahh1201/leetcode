#include <iostream>
using namespace std; 

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int size = nums.size();

        for (int i = 0; i < size; i++) 
        {
            for (int j = i + 1; j < size; j++) 
            { // Change start index to i+1
                if (nums[j] + nums[i] == target) 
                {
                    return {i,j}; // Corrected order
                }
            }
        }
        return {};
    }
};
