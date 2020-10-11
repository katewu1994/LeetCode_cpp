class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        vector<int> v;
        
        for(int i=0, j=numbers.size()-1;j>i;){
            
            if(numbers[i]+numbers[j]>target){
                j--;
            } else if (numbers[i]+numbers[j]<target){
                i++;
            } else {
                v.push_back(i+1);
                v.push_back(j+1);
                break;
            }
            
        }
        return v;
    }
};