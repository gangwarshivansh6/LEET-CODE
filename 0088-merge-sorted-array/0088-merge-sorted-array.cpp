class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0;
        int j=0 ;
        int index=0;
        vector<int>ans(n+m);
        while(i<m && j<n){
            if(nums1[i]<nums2[j]){
                ans[index]=nums1[i];
                index++;
                i++;
            }
            else{
                ans[index] = nums2[j];
                index++;
                j++;

            }

        }
        
        while(i<m){
            ans[index]=nums1[i];
            index++;
            i++;
        }
        while(j<n){
            ans[index]=nums2[j];
            index++;
            j++;
        }
        for(int i=0 ; i<index ; i++){
            nums1[i]=ans[i];
        }
        
        
    }
};