class Solution {
  public:
    int canReach(int A[], int N) {
        // brute force approach .. 
        int maxIndex = 0;
        for(int i=0; i< N; i++ )
        {
            if(i > maxIndex)
            return false;
            maxIndex = max(maxIndex, i+A[i]);
        }
        return true;
    }
}