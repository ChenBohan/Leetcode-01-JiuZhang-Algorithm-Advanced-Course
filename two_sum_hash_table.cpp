class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<int> result;
        unordered_map<int, int> hashmap;
        
        for (int i = 0; i < nums.size(); i++)
        {
            int complement = target - nums[i];
            auto complement_it = hashmap.find(complement);
            if (complement_it != hashmap.end())
            {
                result.push_back(i);
                result.push_back(complement_it->second);
                return result;
            }
            hashmap[nums[i]] = i;
        }
        return result;
    }
};
