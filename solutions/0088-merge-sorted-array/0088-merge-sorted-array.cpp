class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int nums3[m+n];
        for(int i=0;i<m;i++){
            nums3[i]=nums1[i];
        }
        for(int i=m;i<m+n;i++){
            nums3[i]=nums2[i-m];
        }
        for(int i = 0; i < m+n-1; i++) {

            for(int j = 0; j < m+n-1-i; j++) {

                if(nums3[j] > nums3[j+1]) {

                    int temp = nums3[j];
                    nums3[j] = nums3[j+1];
                    nums3[j+1] = temp;
                }
            }
        }
        for(int i=0;i<m+n;i++){
            nums1[i]=nums3[i];
        }
       
    }
};