#include <bits/stdc++.h>

using namespace std;

long maxSubarrayValue(vector<long> arr)
{
    if (arr.size() == 0)
        return 0;

    long evenSum(arr[0]), oddSum(0), start(0);

    long maxSum = getVal(evenSum, oddSum);

    for (long i = 1; i < arr.size(); i++)
    {
        long j = i - start;
        long val1;
        if (j % 2 == 0)
            val1 = getVal(evenSum + arr[i], oddSum);
        else
            val1 = getVal(evenSum, oddSum + arr[i]);

        long val2 = getVal(arr[i], 0);

        if (val2 > val1)
        {
            maxSum = max(maxSum, val2);
            evenSum = arr[i];
            oddSum = 0;
            start = i;
        }
        else
        {
            maxSum = max(maxSum, val1);
            if(j%2 == 0)
                evenSum += arr[i];
            else
                oddSum += arr[i];
        }
    }

    return maxSum;
}

long getVal(long evenSum, long oddSum)
{
    return pow(evenSum - oddSum, 2);
}