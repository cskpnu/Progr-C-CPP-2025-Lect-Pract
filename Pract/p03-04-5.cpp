#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int matrix[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin>>matrix[i][j];
        }
    }
    int mod = 1,mod1 = 1;
    for (int i = 0; i < n; i++){
        if(matrix[i][n-i-1] < 9) {


            mod = mod * matrix[i][i];
            mod1 = mod1 * matrix[i][n - i - 1];
        }
            }
    cout<<mod1<<endl;
    return 0;
        }

