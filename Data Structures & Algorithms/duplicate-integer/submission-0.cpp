#include <vector>
#include <unordered_set>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> seen;

        for (int num : nums) {
            // Kolla om talet redan finns i vårt hash set
            if (seen.count(num)) {
                return true;
            }
            // Annars, spara talet inför kommande iteration
            seen.insert(num);
        }

        return false;
    }
};