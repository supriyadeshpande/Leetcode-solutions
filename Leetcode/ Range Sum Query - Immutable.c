/******************
Given an integer array nums, find the sum of the elements between indices i and j (i ≤ j), inclusive.

Example:
Given nums = [-2, 0, 3, -5, 2, -1]

sumRange(0, 2) -> 1
sumRange(2, 5) -> -1
sumRange(0, 5) -> -3

Note:
1. You may assume that the array does not change.
2. There are many calls to sumRange function.
******************/


public class NumArray {

    int[] num;
    int[] sum;
    
    public NumArray(int[] nums) {
        num = nums;
        sum = new int[num.length + 1];
        int total = 0;
        sum[0] = 0;
        for(int k = 1; k < sum.length; k++)
        {
            total += num[k-1];
            sum[k] = total;
        }
    }

    public int sumRange(int i, int j) {
        
        /*if(i == 0)
        {
            return sum[j+1];
        }
        else
        {*/
            return (sum[j+1] - sum[i]);
        //}
    }
}


// Your NumArray object will be instantiated and called as such:
// NumArray numArray = new NumArray(nums);
// numArray.sumRange(0, 1);
// numArray.sumRange(1, 2);