#include<bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{
    // pair<string,int> name_age;
    
    // // name_age = make_pair("Siyam Hossain",20);
    // // or
    // name_age = {"Siyam Hossain",20};
    // cout<<name_age.first<<endl;
    // cout<<name_age.second<<endl;


    //vector pair

    int n;
    cin>>n;
    vector< pair<int,int> > vec(n);

    for (int i = 0; i < n; i++)
    {
        cin>>vec[i].first>>vec[i].second;
    }

    for (auto i : vec)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    
    
    return 0;
}