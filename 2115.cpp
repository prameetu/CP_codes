#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies) {
        vector <string> ans;

        set <string> recipies_prep;

        for(auto x:supplies)
            recipies_prep.insert(x);

        for(int i=0;i<recipes.size();i++)
        {
            for(int j=0;j<recipes.size();j++)
            {
                if(recipies_prep.find(recipes[j]) != recipies_prep.end())
                    continue;
                int c = 0;
                for 
            }
        }
    }
};