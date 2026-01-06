class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int low=0,high= k-1;
        int sum =0,rev=0;
        for(int i=low;i<=high;i++){
            sum +=arr[i];
            
        }
        int n = arr.size();
        while(high<n){
            rev = max(rev,sum);
            low++;
            high++;
            sum = sum-arr[low-1];
            if(high==n){
                break;
            }
            sum = sum + arr[high];
    }
    return rev;
    }
};