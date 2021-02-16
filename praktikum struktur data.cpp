/* Nama : Nurma Sari Laras Aji */
/* NIM : 20051397062 */
/* Kelas : MI 2020B */

#include <iostream>

using namespace std;
int main (){
	const int column = 6, rows = 2;
    int arrayA[rows][column] = {{1,2,3,4,5,6},{7,8,9,10,11,12}};
    int arrayB[column][rows]= {{1,2},{3,4},{5,6},{7,8},{9,10},{11,12}};

    cout << "Matriksnya adalah " << endl;
    for(int z = 0; z<rows; z++){
        for(int x = 0; x<column; x++){
            cout << arrayA[z][x] << " ";
        }
        cout << endl;
    }

    cout << endl;
    for(int z = 0; z<column; z++){
        for(int x = 0; x<rows; x++){
            cout << arrayB[x][z] << " ";
        }
        cout << endl;
    }

    cout << endl << "Perkalian Matriks nya" << endl;

    for(int z = 0; z<rows; z++){
        for(int x = 0; x<column; x++){
            int hasil = arrayA[z][x] * arrayB[x][z];
            cout << "Hasil " << arrayA[z][x] << " x " << arrayB[x][z] << " = " << hasil << endl;
        }
    }

    return 0;
}
