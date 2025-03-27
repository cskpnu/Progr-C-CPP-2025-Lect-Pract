#include <iostream>
#include <string>
using namespace std;
int main(){
    string text;
    getline(cin,text);
    int pos = text.find("..",0);
    while (pos != string::npos){
        text.replace(pos,2,".");
        pos = text.find("..",0);
    }
    cout << text << endl;


    return 0;

}