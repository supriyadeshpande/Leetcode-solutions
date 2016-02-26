/******************
Given a 2D matrix matrix, find the sum of the elements inside the rectangle defined by its upper left corner (row1, col1) and lower right corner (row2, col2).

Example:
Given matrix = [
  [3, 0, 1, 4, 2],
  [5, 6, 3, 2, 1],
  [1, 2, 0, 1, 5],
  [4, 1, 0, 1, 7],
  [1, 0, 3, 0, 5]
]

sumRegion(2, 1, 4, 3) -> 8
sumRegion(1, 1, 2, 2) -> 11
sumRegion(1, 2, 2, 4) -> 12


Note:
1. You may assume that the matrix does not change.
2. There are many calls to sumRegion function.
3. You may assume that row1 ≤ row2 and col1 ≤ col2.
******************/


public class NumMatrix {

    int[][] myMatrix = null;
    int[][] sumArray = null;
    
    public NumMatrix(int[][] matrix) {

        if(matrix.length == 0)
            return;
        myMatrix = matrix;
        
        sumArray = new int[myMatrix.length+1][myMatrix[0].length + 1];
        int i = 0, j = 0;
        
        for(i = 0, j = 0; i <= myMatrix.length; i++) {
            sumArray[i][j] = 0;
        }
        
        for(i = 0, j = 0; j <= myMatrix[0].length; j++) {
            sumArray[i][j] = 0;
        }
            
        
        for(i = 1; i <= myMatrix.length; i++)
        {
            for(j = 1; j <= myMatrix[0].length; j++)
            {
                sumArray[i][j] = myMatrix[i-1][j-1] + sumArray[i][j-1] + sumArray[i-1][j] - sumArray[i-1][j-1];
            }
        }
    }

    public int sumRegion(int row1, int col1, int row2, int col2) {
        
        return (sumArray[row2+1][col2+1] - sumArray[row1][col2+1] - 
        		sumArray[row2+1][col1] + sumArray[row1][col1]);
    }
}


// Your NumMatrix object will be instantiated and called as such:
// NumMatrix numMatrix = new NumMatrix(matrix);
// numMatrix.sumRegion(0, 1, 2, 3);
// numMatrix.sumRegion(1, 2, 3, 4);
