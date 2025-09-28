class Solution {
public:
    bool check(int a, int b, int c) {
        if (a == 0 || b == 0 || c == 0)
            return false;
        if (a + b <= c)
            return false;
        if (a + c <= b)
            return false;
        if (b + c <= a)
            return false;
        return true;
    }
    int largestPerimeter(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        int n = nums.size();

        for (int i = n - 1; i >= 2; i--) {

            int a = nums[i];
            int j = i - 1;

            int b = nums[j];
            int c = nums[j - 1];
            if (check(a, b, c))
                return a + b + c;
        }
    
    return 0;
}
}
;