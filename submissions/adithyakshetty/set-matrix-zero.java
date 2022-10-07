package Hacktober;
import java.util.*;
/**
 *
 * @author Adithya K Shetty
 * time complexity : O(n^2)
 * space complexity : O(n)
 */
public class java {
    static int n, m;
    static int[][] result;
    static int [][] arr;
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter The Number Of Rows : ");
        //variable for no of rows
        n = input.nextInt();
        System.out.println("Enter The Number Of Columns : ");
        //variable for no of columns
        m = input.nextInt();
        arr = new int[n][m];
        result = new int[n][m];
       
        
        //getting input from user
        System.out.println("Enter The Array Elements : ");
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                arr[i][j] = input.nextInt();
                result[i][j] = arr[i][j];
            }
        }
        //generating result
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(arr[i][j] == 0)
                {
                    System.out.println(arr[i][j]);
                    addZeroes(i, j);
                }  
                else
                    continue;   
            }
        }
 
        for(int[] subResulArray: result)
        {
            System.out.println(Arrays.toString(subResulArray));
        }
    
    }
    //function to add zeros 
    public static void addZeroes(int row,int col)
    {
        System.out.println(n);
        for (int  i = 0;i < n;i++)
            result[i][col] = 0;
        for(int j = 0;j <arr[row].length;j++ )
            result[row][j] = 0;
    }
}
