class Solution 
{
public:
    int minimumRecolors(string blocks, int k) 
    {
        int n = blocks.size();
        int white = 0;  
        int minRecolors = INT_MAX;  

        for (int i = 0; i < k; i++) 
        {
            if (blocks[i] == 'W') 
            {
                white++;
            }
        }

        minRecolors = white;

        for (int i = k; i < n; i++) 
        {
            if (blocks[i - k] == 'W') 
            {
                white--;
            }

            if (blocks[i] == 'W') 
            {
                white++;
            }

            minRecolors = min(white, minRecolors);
        }

        return minRecolors;
    }
};

