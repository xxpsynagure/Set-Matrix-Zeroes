// Time Complexity: O(m*n)
// Space Complexity: O(m+n)

#include <iostream>
#include<vector>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) 
{     
     int rowLen = matrix.size(), colLen = matrix[0].size();

     vector<char> rows(rowLen, 0), cols(colLen, 0);

     for (int i = 0; i < rowLen; i++)
     {
        for (int j = 0; j < colLen; j++)
        {
            if (matrix[i][j] == 0)
            {
                rows[i] = 1, cols[j] = 1; //saving the values where 0 is identified
            }
        }
            
     }
           

     for (int i = 0; i < rowLen; i++)
     {
         //clearing rowwise
        if (rows[i])
        {
            for (int j = 0; j < colLen; j++)
            {
                matrix[i][j] = 0;
            }
        }
         
        //clearing columnwise
        else
        {
            for (int j = 0; j < colLen; j++)
            {
                if (cols[j])
                {
                    matrix[i][j] = 0;
                }
            }            
        }
     }
            
    //printing  output
     cout << "-------OUTPUT-------" << endl;
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j]<<" ";
        }
        cout << endl;
    }
}

int main()
{
    vector<vector<int>> matrix;

    //taking input
    int m, n;
    cout << "Enter m"<<endl;
    cin >> m;
    cout << "Enter n" << endl;
    cin >> n;

    cout << "----INPUT MATRIX-------"<<endl;
    vector<int> tempvec;


    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int a;
            cin >> a;
            tempvec.push_back(a);
        }

        matrix.push_back(tempvec);
        tempvec.clear();
    }

    setZeroes(matrix);

    return 0;
}