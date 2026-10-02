class Solution {
public:
    int xorOperation(int n, int start) {
        int nums[n];
        int result=0;
        for(int i=0;i<n;i++){
            result=result ^ (start+2*i);          
        }
        return result;
    }
};