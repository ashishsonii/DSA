class Solution {
public:
    long long minOperations(vector<int>& nums1, vector<int>& nums2, int k) {
        int n = nums1.size();

        if (k == 0) {
            for (int i = 0; i < n; i++) {
                if (nums1[i] != nums2[i])
                    return -1;
            }
            return 0;
        }

        if (n == 1) {
            if (nums1[0] == nums2[0])
                return 0;
            else
                return -1; 
        }

        long long tincrease = 0;
        long long tdecrease = 0;

        for (int i = 0; i < n; i++) {



            int diff = nums2[i] - nums1[i];

            if (diff % k != 0) {
                return -1;
            }

            if (diff > 0) {

                tincrease += diff / k;
            } else if (diff < 0) {

                tdecrease += (-diff) / k;
            }
        }

        if (tincrease != tdecrease) {
            return -1;
        }

       
        return tincrease;
    }
};