class Solution {
public:
    string reverseWords(string s) {
        s += " ";
        string ans, t;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == ' ')
            {

                if(t != "")
                ans=t + " "+ ans;
                t = "";
            }
            else
            {
                t += s[i];

            }
        }
        return ans.substr(0, ans.size() - 1);
    }
};