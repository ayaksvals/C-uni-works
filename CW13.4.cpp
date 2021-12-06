#include <iostream>
#include <sstream>
#include <string>
#include <typeinfo>
using namespace std;


string f( string& s) {
    string ss = "";
    for(int i = 0; i < s.size() - 1; i++){
        if (!(s[i] != ' ' && s[i + 1] == ' ')) {
            ss += s[i];
        }
    }
    return ss;
}


int main() {
    string s = "adsda    yiyui zxccvxcv z poijlp    xcvvvcx  igy  ";
    cout << f(s) << endl;
    return 0;
}