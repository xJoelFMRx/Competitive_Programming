#include "iostream"
#include "cmath"

using namespace std;

int main(){
    int matrix[5][5];
    int r, c; //row = fila, column = columna
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cin >> matrix[i][j]; //Recordar que cuando usamos c++ siempre los iteradores comienzan en 0 (numeracion 0-indexada)
            if (matrix[i][j] == 1){
                r = i; //Guarda la fila donde se encuenta
                c = j; //Guarda la columna donde se encuentra
            }
        }
    }
    //Distancia de Manhattan (desplazamiento en una matriz o plano sin usar diagonales)
    //d = |x1 - x2| + |y1 - y2| --> en este caso |r de 1 - r del centro| + |c de 1 - c del centro|
    //El centro estaria en (2,2) ya que es una numeracion 0-indexada en c++
    int movminimos = abs(r - 2) + abs(c - 2);
    cout << movminimos << endl;
    system("pause>0");
    return 0;
}