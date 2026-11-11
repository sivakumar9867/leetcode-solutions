class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> n;
        vector<int> arr;
        for(int x:nums1){
            n.insert(x);
        }
        for(int x:nums2){
            if(n.find(x)!=n.end()){
                arr.push_back(x);
                n.erase(x);
            }
        }return arr;
        
    }
};