#include <vector>
#include <unordered_map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> seen;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            // Finns det saknade talet redan i tabellen?
            if (seen.count(complement)) {
                // returnera det sparade och det nuvarade indexet
                return {seen[complement], i};
            }
            
            // Lägg in nuvarande tal och dess index i tabellen
            seen[nums[i]] = i;
        }

        return {};
    }
};
