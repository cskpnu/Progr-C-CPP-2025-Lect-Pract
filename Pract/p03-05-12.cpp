#include "iostream"
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    int matrix[n][t];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = rand() % 100;

        }
    }
    int indexi, indexj;
    double max;

    for (int i = 0; i < n; i++) {
        max = matrix[i][0];
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
                indexi = i;
                indexj = j;

            }
            cout << matrix[i][j] << " ";
        }
    }

    cout << indexi << indexj << endl;


    return 0;
}