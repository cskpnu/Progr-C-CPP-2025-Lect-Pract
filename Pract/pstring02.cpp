#include <iostream>
#include"string"
using namespace std;
int main(){
    string text,s,k;
    getline(cin,text);
    for(int i = 0; i < text.length(); i++){
        k="";
        s="";
        while(text[i] != ' '){
            s += text[i];
            i++;
        }
        while(text[i] == ' '){
            i++;
        }
        while(text[i] != ' '){
            k += text[i];
            i++;
        }
        cout << k << " " << s << " ";
        if(k==""){
            cout << s << " ";
        }
    }


}