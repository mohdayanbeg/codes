#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> v[4];
    v[0].push_back (20);
    v[0].push_back(30);
    v[0].push_back(40);
    v[1].push_back(50);
    v[1].push_back(60);
    v[2].push_back(40);
    v[2].push_back(50);
    v[3].push_back(90);
    for(int i= 0;i<4;i++){
        for (int j=0;j<v[i].size();j++){
            cout<<v[i][j];
            if(j<(v[i].size()-1)){
                cout<<",";
            }
        }
        cout<<endl;
    }
    


}