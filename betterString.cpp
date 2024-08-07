class Solution {
  public:
  int getCnt(string s) {
        unordered_map<char, int> m;
        int cnt{1}, x;
        
        for(char c : s) {
            x = 2 * cnt;
            if(m[c]) x -= m[c];
            m[c] = cnt;
            cnt = x;
        }
        
        return cnt;
}
    string betterString(string str1, string str2) {
        // code here
        return getCnt(str2) > getCnt(str1) ? str2 : str1;
    }
};