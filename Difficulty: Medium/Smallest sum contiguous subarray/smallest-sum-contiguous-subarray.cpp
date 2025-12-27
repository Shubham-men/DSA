// User function Template for C++

class Solution {
  public:
    int smallestSumSubarray(vector<int>& a) {
        // Code here
        int count =0,vrb= INT_MAX;
        for(int i:a){
            count +=i;
            vrb = min(count , vrb);
            if(count>0){
                count = 0;
            }
            
        }
        return vrb;
    }
};
