class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int c=coordinates[0]-'a';
        int k=coordinates[1]-'1';
        if((c+k) % 2 == 0)
        {
            return false;
        }
        return true;
    }
};