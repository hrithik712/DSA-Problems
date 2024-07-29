class Solution {
  public:
    // Function to find equilibrium point in the array.
    // arr: input array
    int equilibriumPoint(vector<long long> &arr) {
        // Your code here
        int Tsum = 0;
      for(int i=0; i<arr.size();i++) Tsum += arr[i];
      int sum = 0;
      for(int i=0; i<arr.size(); i++){
        sum += arr[i];
        if(sum == Tsum){
            return i+1;
        }
        Tsum = Tsum - arr[i];
       }
      return -1;
    }
};