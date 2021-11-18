#include<bits/stdc++.h>

using namespace std;

class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
        int ans(-1);
        int j(m-1);
        for(int i=0;i<n;i++)
        {
            bool flag = false;
            while(j>=0 && arr[i][j] == 1)
            {
                j--;
                flag = true;
            }
            if(flag)
                ans = i;
        }

        return ans;
	}

};