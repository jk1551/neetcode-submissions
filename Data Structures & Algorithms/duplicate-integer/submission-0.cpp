class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::set<int> numbers;

        for(int n : nums){
            if(numbers.contains(n)){
                return true;
            } else{
                numbers.insert(n);
            }
        }
        return false;
    }
};