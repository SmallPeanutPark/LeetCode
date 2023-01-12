class Solution {
public:
    string reverseWords(string s) {
        stringstream ss;
        ss.str(s);
        string temp;
        string tempans;
        while(ss >> temp) {
            reverse(temp.begin(), temp.end());
            tempans += temp;
            tempans += ' ';
        }
        string ans(tempans.begin(), tempans.end() -1);
        return ans;
    }
};
