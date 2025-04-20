class Solution 
{
public:
    int numRabbits(vector<int>& answers) 
    {
        unordered_map<int, int> freq;
        int total = 0;

        for (int ans : answers) 
        {
            freq[ans]++;
        }

        for (auto& [k, count] : freq) 
        {
            int groupSize = k + 1;

            // Step 3: Compute number of groups needed
            int groups = ceil((double)count / groupSize);

            // Step 4: Add total rabbits for these groups
            total += groups * groupSize;
        }

        // Step 5: Return total
        return total;
    }
};