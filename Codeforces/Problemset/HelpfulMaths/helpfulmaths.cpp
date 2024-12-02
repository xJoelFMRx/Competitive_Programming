#include "iostream"
#include "string"
#include "vector"
#include "sstream"
#include "algorithm"

using namespace std;

int main(){
    string s;
    cin >> s;
    vector<int> numbers; //Vector para guardar los numeros de la cadena s
    stringstream ss(s); //Creamos a partir de la cadena s, esto contiene todo el texto de s pero ahora como flujo para extraer partes
    string num; //Para guardar numero por numero
    while (getline(ss,num,'+')){ //Proceso de extraccion, extrae texto hasta el '+' y lo guarda en num, llendo al vector numbers en forma de entero. Luego elimina lo que leyo (desde '+' hasta antes en el ss) y repite hasta que no quede nada en el ss
        numbers.push_back(stoi(num));
    }
    sort(numbers.begin(), numbers.end()); //Ordena los numeros desde el inicio al final del vector
    for (int i = 0; i < numbers.size(); i++){
        if (i > 0){ //Coloca el '+' antes de cada numero, excepto al inicio
            cout << "+"; 
        }
        cout << numbers[i];
    }
    cout << endl; 
    system("pause>0");
    return 0;
}