class Solution {
public:
    string longestCommonPrefix(vector<string>& words) {
        int k = 0;
        int n = words.size();

        if (n == 0) {
            return "";
        }

        if (n == 1) {
            return words[0];
        }

        while (true) {
            for (int i = 1; i < n; i++) {
                if (k == words[i].size() || k == words[0].size()) {
                    return words[0].substr(0, k);
                }

                if (words[i][k] != words[0][k]) {
                    return words[0].substr(0, k);
                }
            }

            k++;
        }
    }
};
