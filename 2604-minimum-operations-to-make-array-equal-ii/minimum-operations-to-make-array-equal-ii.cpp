class Solution {
public:
    long long minOperations(vector<int>& nums1, vector<int>& nums2, int k) {
        int n = nums1.size();
        
        // Handle k=0 case
        if (k == 0) {
            for (int i = 0; i < n; i++) {
                if (nums1[i] != nums2[i]) return -1;
            }
            return 0;
        }
        
        // Special case: only one element
        if (n == 1) {
            if (nums1[0] == nums2[0]) return 0;
            else return -1; // Can't do operation with i ≠ j when n=1
        }
        
        long long totalIncrease = 0;
        long long totalDecrease = 0;
        
        // Calculate how much we need to increase/decrease at each position
        for (int i = 0; i < n; i++) {
            int diff = nums2[i] - nums1[i];
            
            // Each difference must be divisible by k
            if (diff % k != 0) {
                return -1;
            }
            
            if (diff > 0) {
                // Need to increase nums1[i] by diff
                totalIncrease += diff / k;
            } else if (diff < 0) {
                // Need to decrease nums1[i] by |diff|
                totalDecrease += (-diff) / k;
            }
        }
        
        // Since each operation increases one position and decreases another position,
        // total increases must equal total decreases
        if (totalIncrease != totalDecrease) {
            return -1;
        }
        
        // Each operation handles one unit of increase and one unit of decrease
        // So we need totalIncrease operations
        return totalIncrease;
    }
};