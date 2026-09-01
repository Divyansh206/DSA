class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int minindex =0;
        int maxindex =0;
        for(int i=0;i<n;i++){
            if(nums[i]<nums[minindex]){
                minindex =i;
            }
            if(nums[i]>nums[maxindex]){
                maxindex =i;
            }
        }
        if(minindex>maxindex) swap(minindex,maxindex);
        int front = maxindex + 1;
        int back = n - minindex;
        int both = (minindex + 1) + (n - maxindex);

        return min({front, back, both});

    }
};