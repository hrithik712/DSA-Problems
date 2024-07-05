class Solution {
public:
    vector<vector<string>> findSequences(string beginWord, string endWord, vector<string>& wordList) {
        // code here
        unordered_set<string> st(wordList.begin(), wordList.end());
        queue<vector<string>> q;
        q.push({beginWord});
        vector<string> usedOnLevel;
        usedOnLevel.push_back(beginWord);
        int level = 0;
        vector<vector<string>> ans;
        while(!q.empty())
        {
            vector<string> vec = q.front();
            q.pop();
            // erase all words that have been used .. 
            if(vec.size() > level )
            {
                level++;
                for(auto it: usedOnLevel)
                {
                    st.erase(it);
                }
            }
            string word = vec.back();
            if(word == endWord)
            {
                // first seq where we reached ened .. 
                if(ans.size() == 0)
                {
                    ans.push_back(vec);
                }
                else if(ans[0].size() == vec.size())
                {
                    ans.push_back(vec);
                }
            }
            for(int i=0; i<word.size(); i++)
            {
                char original = word[i];
                for(char c='a'; c<='z'; c++)
                {
                    word[i] = c;
                    if(st.count(word) > 0)
                    {
                        vec.push_back(word);
                        q.push(vec);
                        // mark as visietd on the lvel .. 
                        usedOnLevel.push_back(word);
                        vec.pop_back();
                    }
                }
                word[i] = original;
                
            }
        }
        return ans;
        
    }
};