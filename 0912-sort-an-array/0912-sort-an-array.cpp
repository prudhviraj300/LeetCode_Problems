class Solution {
public:

    void merge(vector<int>& nums, int low, int mid, int high){
        vector<int> temp;

        int L = low, R = mid + 1;

        while(L <= mid && R <= high){
            temp.push_back((nums[L] <= nums[R])? nums[L++] : nums[R++]);
        }
        while(L <= mid){
            temp.push_back(nums[L++]);
        }
        while(R <= high){
            temp.push_back(nums[R++]);
        }

        for(int i = low; i <= high; i++){
            nums[i] = temp[i - low];
        }
    }

    void mergeSort(vector<int>& nums,int low, int high){
        if(low >= high){
            return;
        }
        int mid = low + (high - low) / 2;
        mergeSort(nums, low, mid);
        mergeSort(nums, mid + 1, high);

        merge(nums, low, mid, high);
    }
    vector<int> sortArray(vector<int>& nums) {

        int l = 0, h = nums.size() - 1;

        mergeSort(nums, l, h);

        return nums;
    }
};