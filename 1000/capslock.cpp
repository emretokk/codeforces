#include <iostream>
#include <cctype>
#include <string>
using namespace std;
string changecase(string s){
    for (int i = 0; i < s.length() ; ++i) {
        if (isupper(s[i])) {
            s[i]=tolower(s[i]);  
        }
        else{
            s[i]=toupper(s[i]);  
        }
    }
    return s;
}  
int main()
{
	string s;
    cin >> s;
    bool res;
    for (int i=1; i<s.length(); i++){
        if (isupper(s[i])) {
            res = true;
        }
        else {
            res = false;
            break;
        }
    }
    if (islower(s[0]) && res) {
        cout << changecase(s); 
    }
    else if(isupper(s[0]) && res){
        cout << changecase(s); 
    }
    else{
        cout << s;
    }
    return 0;
}
