/******************
Given a non-negative number represented as an array of digits, plus one to the number.

The digits are stored such that the most significant digit is at the head of the list.

******************/


public class Solution {
    public int[] plusOne(int[] digits) {
        int carry = 1;
        
        for(int i = digits.length - 1; i >= 0; i--)
        {
            int num = digits[i] + carry;
            
            if(num > 9)
            {
                digits[i] = (num%10);
                carry = 1;
            }
            else
            {
                digits[i] =num;
                carry = 0;
                break;
            }
        }
        if(carry == 1) {
            int[] solution = new int[digits.length + 1];
            solution[0] = 1;
            return solution;
        }
        else
        {
            return digits;
        }
        
    }
}