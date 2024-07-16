class Solution{
    private:
    vector<int> topoSort(int V, vector<int> adj[])
    {
        int inDegree[V] = {0};
        for(int i=0; i<V; i++)
        {
            for(auto it: adj[i]){
                inDegree[it]++;
            }
        }
        queue<int> q;
        for(int i=0; i<V; i++)
        {
            if(inDegree[i] == 0)
            {
                q.push(i);
            }
        }
        vector<int> topo;
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            topo.push_back(node);
            
            for(auto it: adj[node])
            {
                inDegree[it]--;
                if(inDegree[it] == 0)
                q.push(it);
            }
        }
        return topo;
    }
    public:
    string findOrder(string dict[], int N, int K) {
      
      vector<int> adj[K];
      for(int i=0; i<N-1; i++){
          string s1 = dict[i];
          string s2 = dict[i+1];
          int length = min(s1.size(), s2.size());
          for(int ptr=0; ptr<length; ptr++){
              if(s1[ptr] != s2[ptr]){
                  // storing the alphabets in form of 0 and 1 .. 
                  // so subtracting a from ptr will convert it into numbers .. 
                  adj[s1[ptr] - 'a'].push_back(s2[ptr] - 'a');
                  break;
                  
                }
          }
      }
      vector<int> topo = topoSort(K, adj);
      string ans = "";
      for(auto it: topo){
          ans = ans + char(it + 'a');
      }
      return ans;
    }
};