#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> split(string s, string d){
    int x=s.find(d);

    vector <string> g;
    while (x!=string::npos){             //if x has no value stop
            if (x==0){
                s=s.substr(x+1);
                x=s.find(d);
                continue;
            }
    g.push_back(s.substr(0,x));
    s = s.substr(x+1);
    x = s.find(d);
    if (x==string::npos){
        g.push_back(s);
    }
    }
    return g;
};

int main()
{
    vector<string> v;
    string st;
    string de;

    cout << "Enter string: "<< endl;
    getline(cin, st);
    cout << "Enter delimiter:" << endl;
    getline(cin, de);

    v = split(st, de);
    for (int i = 0; i < v.size(); i++)
        cout << "'"<<v[i] << "'";
}
