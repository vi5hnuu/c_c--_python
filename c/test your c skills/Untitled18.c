#include <iostream>
#include<algorithm>
using namespace std;

class Solution
{
public:
    void reArrange(int arr[], int N)
    {
        int a, b;
        for (int i = 0; i < N; i++)
        {
            if (i % 2 == 0 && arr[i] % 2 != 0)
            {
                a = i;
            }
            else if (i % 2 != 0 && arr[i] % 2 == 0)
            {
                swap(arr[i], arr[a]);
            }
        }
        cout << "Our resultant array is : ";
        for (int i = 0; i < N; i++)
        {
            cout << arr[i] << " ";
        }
    }
};

int main()
{
    int N;
    cin >> N;

    int arr[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    Solution ob;
    ob.reArrange(arr, N);

    return 0;
}
