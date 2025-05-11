class Solution {

    public List<List<Integer>> threeSum(int[] nums) {
        HashMap<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            map.put(nums[i], map.getOrDefault(nums[i], 0) + 1);
        }
        Set<List<Integer>> set = new HashSet<>();
        for (int i = 0; i < nums.length-2; i++) {
            int target = -(nums[i]);
            for (int j = i + 1; j < nums.length - 1; j++) {
                if (map.containsKey(target - nums[j])) {

                    if(target-nums[j] == nums[i] && map.get(target-nums[j]) < 2 ||
                    target -  nums[j] == nums[j] && map.get(nums[j]) < 2 ||
                    (target - nums[j] == nums[i] && target - nums[j] == nums[j]) && map.get(nums[j]) < 3){
                        continue;
                    }
                    List<Integer> ele = Arrays.asList(nums[i], nums[j], (target - nums[j]));
                    Collections.sort(ele);
                    set.add(ele);
                }
            }
        }

        return new ArrayList<>(set);
    }
}
