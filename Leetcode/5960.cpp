#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    string capitalizeTitle(string title) {
        for(int i=0;i<title.size();i++)
            title[i] = tolower(title[i]);
        
        int i(0);
        while(i<title.size())
        {
            int j=i;
            while(j<title.size() && title[j] != ' ')
                j++;
            
            if(j-i > 2)
                title[i] = toupper(title[i]);
            i = j+1;
        }

        return title;
    }
};