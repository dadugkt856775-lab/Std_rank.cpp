#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "Lubuna";
    cout<<s<<endl;
    int n = s.length();
   //  reverse (s.begin(),s.end());
    int i = 0;
    int j = n/2 -1;
    while(i<j){
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
    cout<<s<<endl;
}
// Note :- you can only this line so it reverse half name  
//           reverse (s.begin(),s.end());