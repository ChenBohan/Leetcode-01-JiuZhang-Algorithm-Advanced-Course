class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> result;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 1; j < nums.size(); j++)
            {
                if (j == i)
                    continue;
                
                if (target == (nums[i] + nums[j]))
                {
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
            }
        }
        return result;
    }
};