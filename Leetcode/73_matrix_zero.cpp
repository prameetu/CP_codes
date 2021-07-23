//leetcode - 73
//Set matrix zeroes

#include<bits/stdc++.h>

using namespace std;

//space comp - O(m+n)
void setZeroes(vector<vector<int>>& matrix) 
{
    int m = matrix.size();
    int n = matrix[0].size();

    vector <int> v1(m,1);
    vector <int> v2(n,1);

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(matrix[i][j] == 0)
            {
                v1[i] = 0;
                v2[j] = 0;
            }
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(v1[i] == 0 || v2[j] == 0)
            {
                matrix[i][j] = 0;
                
            }
        }
    }
    
}

//space comp - O(n)
void setZeroes(vector<vector<int>>& matrix) 
{
    int m = matrix.size();
    int n = matrix[0].size();

    //vector <int> v1(m);
    vector <int> v2(n); // col contains zero or not

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(matrix[i][j] == 0)
            {
                //v1[i] = 0;
                v2[j] = 0;
            }
        }
    }

    for(int i=0;i<m;i++)
    {
        bool contains_zero = false; // wheter the i th row has zero or not
        for(int j=0;j<n;j++)
        {
            if(matrix[i][j] == 0)
            {
                contains_zero = true;
                break;
            }
        }

        for(int j=0;j<n;j++)
        {
            if(v2[j] == 0 || contains_zero)
            {
                matrix[i][j] = 0;
            }
        }
    }
    
}

void setZeroes(vector<vector<int>>& matrix)
{
    int m = matrix.size();
    int n = matrix[0].size();

    bool first_row_zero = false;
    for(int j=0;j<n;j++)
    {
        if(matrix[0][j] == 0)
            first_row_zero = true;
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(matrix[i][j] == 0)
            {
                matrix[0][j] = 0; //denotes whole col whould be zero
            }
        }
    }

    for(int i=1;i<m;i++)
    {
        bool contains_zero = false;
        for(int j=0;j<n;j++)
        {
            if(matrix[i][j] == 0)
            {
                contains_zero = true;
                break;
            }
        } 

        for(int j=0;j<n;j++)
        {
            if(contains_zero || matrix[0][j] == 0)
                matrix[i][j] = 0;
        }       
    }

    if(first_row_zero)
        {
            for(int j=0;j<n;j++)
            {
                matrix[0][j] = 0;
            }
        }
}


int main()
{

}