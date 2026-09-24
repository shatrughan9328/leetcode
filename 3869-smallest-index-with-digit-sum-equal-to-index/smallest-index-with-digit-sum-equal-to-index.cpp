class Solution {
public:

    int sum(int num) {
        int s = 0;

        while (num > 0) {
            s = s + num % 10;
            num = num / 10;
        }

        return s;
    }

    int smallestIndex(vector<int>& nums) {

        int n = nums.size();

        for (int i = 0; i < n; i++) {

            if (sum(nums[i]) == i) {
                return i;
            }
        }

        return -1;
    }
};