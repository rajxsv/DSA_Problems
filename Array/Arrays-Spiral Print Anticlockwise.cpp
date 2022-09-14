#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> m >> n;

    int arr[m][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int sr = 0, sc = 0, er = m - 1, ec = n - 1;

    while (er <= sr)
    {
        // first row
        for (int i = sc; i <= ec; i++)
        {
            cout << arr[sr][i] << ", ";
        }

        sr++;

        // last col
        for (int i = sr; i <= er; i++)
        {
            cout << arr[i][ec] << ", ";
        }

        ec--;
        
        if (sr < er)
        {
            // last row
            for (int i = ec; i >= sc; i--)
            {
                cout << arr[er][i] << ", ";
            }
            er--;
        }

        if (sc < ec)
        {
            // first col
            for (int i = er; i >= sr; i++)
            {
                cout << arr[i][sc] << ", ";
            }
            sc++;
        }
    }

    return 0;
}