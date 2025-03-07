class Solution 
{
public:
    bool isPrime(int n) 
    {
        if (n <= 1) 
        {
            return false; 
        } 

        if (n == 2 || n == 3) 
        {
            return true; 
        }

        if (n % 2 == 0) 
        {
            return false; 
        }
        
        for (int i = 3; i <= sqrt(n); i += 2) 
        {
            if (n % i == 0) 
            {
                return false; 
            }
        }

        return true; 
    }

    vector<int> closestPrimes(int left, int right) 
    {
        vector<int> list;
        
        while(left <= right) 
        {
            if(isPrime(left)) 
            {
                list.push_back(left);
            }
            left++;
        }

        if(list.size() < 2) 
        {
            return {-1, -1};
        }

        int minIdx = 0;
        int minPair = INT_MAX;

        for(size_t i = 1; i < list.size(); i++) 
        {
            int diff = list[i] - list[i - 1]; 
            if(diff < minPair) 
            { 
                minPair = diff;
                minIdx = i - 1;
            }
        }

        return {list[minIdx], list[minIdx + 1]};
    }
};
