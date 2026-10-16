#include<iostream>
using namespace std;
int main(){
    string s = "Raghav";
    cout<<s<<" "<<s. length()<<endl;

    s.push_back('a');

    cout<<s<<" "<<s. length()<<endl;
    s.pop_back();

    cout<<s<<" "<<s. length()<<endl;
    s.append(" Gaarg");
    cout<<s<<" "<<s. length()<<endl;

    s.clear();
    cout<<s<<" "<<s. length()<<endl;

    cout<<s<<endl;
}