#include<vector>
#include<string>
class Solution {
public:
    int compress(vector<char>& chars) {

        int i =0 ;
        int ansIndex = 0;
        int n = chars.size();

        while(i<n)
        {
            int j=i+1;
            while(j<n && chars[i] == chars[j])
            {
                j++;
            }
            // yaha kab aayenge.. jab vector pura traverse ho jaye...
            // ya fir new / diff. character encounter kia hai...

            // old character store kar rhe hai....

            chars[ansIndex++] = chars[i];

            int count = j-i;

            if(count > 1)
            {
                // converting counting into single digit and saving the answer...

                string cnt = to_string(count);
                for(char ch: cnt)
                {
                    chars[ansIndex++] = ch;
                }
            }
            // moving to new/ different character....
            i=j;
        }
        return ansIndex;
        
    }
};