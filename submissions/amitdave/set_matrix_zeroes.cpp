// Time Complexity : O(m*n)
// Space Complexity : O(m) + O(n)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int m,n;
	cin>>m;
	cin>>n;
	vector<vector<int>> matrix(m, vector<int>(n));
	vector<int> row(m,1);
	vector<int> col(n,1);
	for(int i=0; i<m; i++)
	{
	    for(int j=0; j<n; j++)
	    {
	        cin>>matrix[i][j];
	        if(matrix[i][j]==0)
	        {
	            row[i]=0; col[j]=0;
	        }
	    }
	}
	cout<<"Original Matrix : \n";
	for(int i=0; i<m; i++)
	{
	    for(int j=0; j<n; j++)
	    {
	        cout<<matrix[i][j]<<" ";
	    }
	    cout<<"\n";
	}
	for(int i=0; i<m; i++)
	{
	    for(int j=0; j<n; j++)
	    {
	        if(matrix[i][j]!=0)
	        {
	            if(row[i]==0 || col[j]==0)
	                matrix[i][j]=0;
	        }
	    }
	}
	cout<<"Modified Matrix : \n";
	for(int i=0; i<m; i++)
	{
	    for(int j=0; j<n; j++)
	    {
	        cout<<matrix[i][j]<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}
