pair<int, int> getFloorAndCeil(int arr[], int n, int x)
{
    vector<int> array(n);
    vector<int> answerArray(2);

    for (int i = 0; i < n; i++)
        array[i] = arr[i];

    sort(array.begin(), array.end());

    int s = 0, mid = 0, e = n - 1, floor = 0, ceil = 0;

    while (s <= e)
    {
        mid = (e - s) / 2 + s;

        if (array[mid] < x)
        {
            s = mid + 1;
        }
        else
            e = mid - 1;
    }

    answerArray[0] = mid - 1;
    answerArray[1] = mid + 1;

    return answerArray;
}