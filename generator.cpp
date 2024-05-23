#include "testlib.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main(int argc, char *argv[])
{
    registerGen(argc, argv, 1);

    int maxTestCases = 1000;
    int testCases = rnd.next(1, maxTestCases);

    cout << testCases << endl;

    while (testCases--)
    {

        int nb = rnd.next(1, 100);
        int ng = rnd.next(1, 25);
        int x = rnd.next(1, 52);

        cout << nb << " " << ng << " " << x << endl;

        vector<int> indices(nb);
        for (int i = 0; i < nb; ++i)
        {
            indices[i] = i + 1;
        }
        shuffle(indices.begin(), indices.end());

        for (int i = 0; i < nb; ++i)
        {
            cout << indices[i] << " ";
        }
        cout << endl;

        for (int i = 0; i < nb; ++i)
        {
            vector<int> preferenceOrder(ng);
            iota(preferenceOrder.begin(), preferenceOrder.end(), 1);
            shuffle(preferenceOrder.begin(), preferenceOrder.end());

            for (int j = 0; j < ng; ++j)
            {
                cout << preferenceOrder[j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
