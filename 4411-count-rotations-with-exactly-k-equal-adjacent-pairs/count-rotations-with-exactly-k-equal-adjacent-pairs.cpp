class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.size();
        int equalCount = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == s[(i + 1) % n]) {
                equalCount++;
            }
        }

        if (k == equalCount - 1) {
            return equalCount;
        }

        if (k == equalCount) {
            return n - equalCount;
        }

        return 0;
    }
};