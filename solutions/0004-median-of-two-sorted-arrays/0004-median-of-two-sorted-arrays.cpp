class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        const vector<int>* a = &nums1;
        const vector<int>* b = &nums2;
        if (a->size() > b->size()) swap(a, b);
        int m = a->size(), n = b->size();
        int low = 0, high = m;
        while (low <= high) {
            int i = low + (high - low) / 2;
            int j = (m + n + 1) / 2 - i;
            int l1 = (i == 0) ? INT_MIN : (*a)[i - 1];
            int r1 = (i == m) ? INT_MAX : (*a)[i];
            int l2 = (j == 0) ? INT_MIN : (*b)[j - 1];
            int r2 = (j == n) ? INT_MAX : (*b)[j];
            if (l1 <= r2 && l2 <= r1) {
                if ((m + n) % 2)
                    return max(l1, l2);
                return (static_cast<double>(max(l1, l2)) + min(r1, r2)) / 2.0;
            }
            if (l1 > r2)
                high = i - 1;
            else
                low = i + 1;
        }
        return 0.0;
    }
};