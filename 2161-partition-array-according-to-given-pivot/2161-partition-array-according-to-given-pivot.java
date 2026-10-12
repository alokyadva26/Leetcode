class Solution {
    public int[] pivotArray(int[] nums, int pivot) {
        List<Integer> less = new ArrayList<Integer>();
        List<Integer> greator = new ArrayList<Integer>();
        List<Integer> equal = new ArrayList<>();

        for(int i = 0 ; i< nums.length ; i++){
            if(nums[i] < pivot){
                less.add(nums[i]);
            }else if(nums[i]==pivot){
                equal.add(nums[i]);
            }else{
                greator.add(nums[i]);
            }
                
        }

        List<Integer> result = new ArrayList<>();
        result.addAll(less);
        result.addAll(equal);
        result.addAll(greator);

        int[] ans = new int[result.size()];
        for (int i = 0; i < result.size(); i++) {
            ans[i] = result.get(i);
        }

        return ans;
    }
}