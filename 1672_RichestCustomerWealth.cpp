class Solution
{
    int maximumWealth(int[][] accounts)
    {
        int result = 0;
        for (int[] a : accounts)
        {
            int localMax = 0;
            for (int b : a)
            {
                localMax += b;
            }
            result = result > localMax ? result : localMax;
        }
        return result;
    }
}