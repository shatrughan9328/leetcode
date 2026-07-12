class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> temp = arr;

        // Sort the copied array
        sort(temp.begin(), temp.end());

        // Store rank of each unique element
        unordered_map<int, int> rank;
        int r = 1;

        for (int num : temp) {
            if (rank.find(num) == rank.end()) {
                rank[num] = r++;
            }
        }

        // Replace original elements with their ranks
        for (int i = 0; i < arr.size(); i++) {
            arr[i] = rank[arr[i]];
        }

        return arr;
    }
};