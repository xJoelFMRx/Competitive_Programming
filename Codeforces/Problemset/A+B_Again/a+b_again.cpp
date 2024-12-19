#include "iostream"
#include "string"
#include "vector"

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> numeros(n);
    for (int i = 0; i < n; i++){
        cin >> numeros[i];
    }
    for (int i = 0; i < numeros.size(); i++){
        int sumaDigitos = 0;
        for (int j = 0; j < numeros[i].size(); j++){ //Recorre cada caracter de la cadena del numero string
            sumaDigitos += numeros[i][j] - '0'; //Convierte el caracter en un numero y lo suma
        }
        cout << sumaDigitos << endl;
    }
    system("pause>0");
    return 0;
}