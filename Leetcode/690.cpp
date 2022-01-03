#include<bits/stdc++.h>

using namespace std;

class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};

class Solution {
public:
    void helper(int id,unordered_map<int, Employee*> mp,int &ans)
    {
        ans += mp[id]->importance;

        for(int x:mp[id]->subordinates)
            helper(x,mp,ans);
        
    }
    int getImportance(vector<Employee*> employees, int id) {
        
        int n(employees.size());
        int ans(0);
        unordered_map<int, Employee*> mp;

        for(auto x:employees)
            mp[x->id] = x;
        
        helper(id,mp,ans);

        return ans;
    }
};