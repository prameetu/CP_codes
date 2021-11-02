#include<bits/stdc++.h>

using namespace std;

class KthLargest {
public:
    multiset<int> st;
    int size;
    KthLargest(int k, vector<int>& nums) {
        for(auto x:nums)
            st.insert(x);
            size = k;
    }
    
    int add(int val) {
        st.insert(val);
        auto it = st.begin();
        advance(it,st.size()-size);
        return *it;
    }
};