public int singleNumber(int[] nums) {
        int l = nums.length;
        Arrays.sort(nums);
        for(int i = 0; i < l-1; i += 2)
        {
            if (nums[i] != nums[i+1])
                return nums[i];
        }
        if (l % 2 == 1) 
            return nums[l-1];
        return 0;
    }