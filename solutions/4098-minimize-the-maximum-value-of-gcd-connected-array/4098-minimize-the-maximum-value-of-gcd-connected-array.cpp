class Solution {
public:
    long long minimumMaxValue(int n, int index, int value) {
        if (value == 1) return -1;
        int p = value;
        for (int i = 2; 1LL * i * i <= value; i++) {
            if (value % i == 0) {
                p = i;
                break;
            }
        }
        int left = index;
        if (left > (value - p) / 2) {
            return -1;
        }
        long long right = n - index - 1;
        if (right == 0) {
            return value;
        }
        return (long long)value + p + 2LL * (right - 1);
    }
};