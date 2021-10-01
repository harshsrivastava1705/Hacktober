#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int> > ans;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    sort(a.begin(),a.end());
    do{
        ans.push_back(a);
    }
    while(next_permutation(a.begin(),a.end()));
    for (auto v : ans)
    {
        for (auto i : v)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}




Inputs may not be unique
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int> > answer;

void permu(vector<int> &a, int idx)
{
    if (idx == a.size())
    {
        answer.push_back(a);
        return;
    }

    for (int i = idx; i < a.size(); i++)
    {
        // if(i==idx && a[i]==a[idx] || i!=idx && a[i]!=a[idx] || i==idx && a[i]!=a[idx])
        if(i!=idx && a[i]==a[idx]){
            continue;
        }
        swap(a[i], a[idx]);
        permu(a, idx + 1);
        swap(a[i], a[idx]);
        
    }

    return;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    permu(a, 0);
    for (auto v : answer)
    {
        for (auto i : v)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
