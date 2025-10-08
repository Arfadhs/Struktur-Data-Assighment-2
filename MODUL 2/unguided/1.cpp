#include <iostream>
using namespace std;

void inputMatriks(int M[3][3], char nama) {
    cout << "Masukkan elemen matriks " << nama << " (3x3):\n";
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            cin >> M[i][j];
        }
    }
}

void tampilMatriks(int M[3][3]) {
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            cout << M[i][j] << " ";
        }
        cout << endl;
    }
}

void tambahMatriks(int A[3][3], int B[3][3], int C[3][3]) {
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

void kurangMatriks(int A[3][3], int B[3][3], int C[3][3]) {
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            C[i][j] = A[i][j] - B[i][j];
        }
    }
}

void kaliMatriks(int A[3][3], int B[3][3], int C[3][3]) {
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            C[i][j] = 0;
            for(int k=0; k<3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int A[3][3], B[3][3], C[3][3];

    inputMatriks(A, 'A');
    inputMatriks(B, 'B');

    tambahMatriks(A, B, C);
    cout << "\nHasil Penjumlahan A + B:\n";
    tampilMatriks(C);

    kurangMatriks(A, B, C);
    cout << "\nHasil Pengurangan A - B:\n";
    tampilMatriks(C);

    kaliMatriks(A, B, C);
    cout << "\nHasil Perkalian A x B:\n";
    tampilMatriks(C);

    return 0;
}
