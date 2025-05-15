class Solution {
    public int search(int[] nums, int target) {
        int l = 0, h = nums.length - 1;
        while( l <= h ){
            int mid = l + ( h - l) / 2 ;
            if( target == nums[ mid ]) return mid;
            
            if(nums[l] <= nums[mid]){
                if(target < nums[mid] && target >= nums[l]){
                    h = mid - 1;
                }else{
                    l = mid + 1;
                }
            }else{
                if(target > nums[mid] && nums[h] >= target){
                    l = mid + 1;
                }else{
                    h = mid - 1;
                }
            }
             
        }
        return -1;
    }
}