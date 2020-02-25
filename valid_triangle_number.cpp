class Solution
{
public:
    int triangleNumber(vector<int>& nums)
    {
        int result = 0;
        sort(nums.begin(), nums.end());

        for (size_t c = nums.size() - 1; c >=2; c--)
        {
            size_t a = 0;
            size_t b = c - 1;

            while (a != b)
            {
                if (nums[a] + nums[b] > nums[c])
                {
                    result += b - a;
                    b--;
                }
                else
                {
                    a++;
                }
            }
        }
        return result;
    }
};