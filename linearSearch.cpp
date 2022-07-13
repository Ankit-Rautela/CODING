// Time Complexity - O(N)
// Space Complexity - O(1)

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int key = 0;
    int arr[] = {10, 50, 80, 90, 100};
    int size = sizeof(arr) / sizeof(arr[0]);

    int count = 0;

    // Linear Search 
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == key)
        {
            count++;
            cout << "Key Found at position : " << i + 1 << endl;
        }    
    }

    if(count == 0)
    {
        cout << "Key not Found" << endl;
    }

    return 0;
}
