#include<bits/stdc++.h>
using namespace std;

struct item
{
    int thickness;
    int id;
    /* data */
};

bool comp( const item &a, const item &b)
{
    return a.thickness < b.thickness;
}

int main()
{
    vector<int>pen({1,2,3,6,4});
    vector<int>cap({3,4,6, 1,2});

    int n = 5;
    vector<item>penitem(5);
    vector<item>capitem(5);

    cout<<pen.size()<<endl;

    for(int i=0; i<pen.size(); i++)
    {
        penitem[i].thickness = pen[i];
        penitem[i].id = i;

        capitem[i].thickness = cap[i];
        capitem[i].id = i;
    }

    sort(capitem.begin(), capitem.end(), comp);
    sort(penitem.begin(), penitem.end(),comp);
    vector<pair<int, int>>ans(n);
    for(int i=0; i<n; i++)
    {
        ans[i].first  = penitem[i].id;
        ans[i].second = capitem[i].id; 

    }

    for( int i=0; i<n; i++)
    {
        cout<<ans[i].first<<" "<<ans[i].second<<endl;
    }




}
