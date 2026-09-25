class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string res = "";
        for (int i = 0; i < words.size(); i++) {
            int sum = 0;
            for (int j = 0; j < words[i].length(); j++) {
                sum += weights[words[i][j] - 'a'];
            }
            int r = sum % 26;
            char mapped = 'z' - r;
            res += mapped;
        }
        return res;
    }
};