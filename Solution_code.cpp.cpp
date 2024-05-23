#include <bits/stdc++.h>
using namespace std;

int girls_preference(int n, int m, int x)
{
    if (m + x >= n)
    {
        return (m + x - n);
    }
    else
    {
        return 100 - (n - (m + x));
    }
}

int main(){
    int t;
    cin>>t;
    int l;
    for(l=0;l<t;l++)
{
    int nb, ng, x;
    cin >> nb >> ng >> x;
    vector<vector<pair<int, int>>> boys(nb, vector<pair<int, int>>(ng + 1));
    unordered_set<int> index;
    unordered_set<int> g;

    for (int i = 0; i < nb; i++)
    {

        cin >> boys[i][0].second;
        index.insert(boys[i][0].second);
    }

    for (int i = 0; i < nb; i++)
    {
        for (int j = 1; j <= ng; j++)
        {
            cin >> boys[i][j].second;
            boys[i][j].first = (ng - (j - 1)) * girls_preference(boys[i][0].second, boys[i][j].second, x);
            g.insert(boys[i][j].second);
        }
        sort(boys[i].begin() + 1, boys[i].end());
    }

    for (int j = 1; j <= ng && !index.empty(); j++)
    {
        for (int i = 0; i < nb && !index.empty(); i++)
        {
            auto it1 = index.find(boys[i][0].second);
            auto it2 = g.find(boys[i][j].second);
            if (it1 != index.end() && it2 != g.end())
            {

                boys[i][0].first = boys[i][j].second;
                index.erase(boys[i][0].second);
                g.erase(boys[i][j].second);
            }
        }
    }

    for (int i = 0; i < nb; i++)
    {
        if (boys[i][0].first != 0)
        {
            cout << boys[i][0].first << "\n";
        }
        else
        {
            cout << "Better Luck next time\n";
        }
    }

    return 0;
}}
