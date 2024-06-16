class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        int patch_count=0;// storing count of minimum number of pathches
        int read=0;// to read values in array
       long max_reachable=0;// storing how much max we have reached..initially 0..we will take long since suppose we have max max_reachable
        //now loop it will run till the max_reachable reaches the n 
        while(max_reachable<n)
        { // also check the out of bound of read******
        if(read<nums.size()&&nums[read]<=max_reachable+1)  {// if the current number is less than max reach like read=10 and max_reachable=12 so no  need to path the element 
            max_reachable+=nums[read];// just add the current element to the max_reachable 
            read++;//move the read to the next position
        }
        // but if the current element is greater than the max_reachable..like read=5 and max_reachable=1..so 5>1 ..in that case patch the min element
        else
        {
            //  the element to be patched = the current max_reachable+1..eg max_reachable=1 so 1+1=2 so patch 2
            max_reachable+=(max_reachable+1);
            patch_count++; // increase the patch count
        }
        }
        return patch_count;// in the end return the count of patch element
        
        
    }
};
