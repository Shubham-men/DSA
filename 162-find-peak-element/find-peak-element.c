int findPeakElement(int* nums, int numsSize) {
    int start=0,end = numsSize-1;
    int ans = 0;
    if(numsSize==1)
    return 0;
    while(start <= end){
      int mid = start+(end - start)/2;
      if(mid == 0)
      {
        if(nums[mid] > nums[mid+1])
        {
            ans = mid;
            break;
        }
        
      }
      else if(mid == numsSize-1)
      {
        if(nums[mid] > nums[mid-1])
        {
            ans = mid;
            break;
        }
      }
      else if(nums[mid-1] < nums[mid] && nums[mid] > nums[mid+1])
      {
        ans = mid;
        break;
      }

      if(nums[mid] <= nums[mid+1])
      {
        start = mid+1; 
      }
      else
      end = mid-1;
    }
    return ans;
}