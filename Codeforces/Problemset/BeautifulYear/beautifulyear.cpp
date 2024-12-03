#include "iostream"
#include "string"
#include "algorithm"
#include "set"

using namespace std;

bool tieneDigitosDistintos(int& year){
    string yearStr = to_string(year); //Convierte el year a string y lo almacena en otra variable
    set<char> digitos(yearStr.begin(), yearStr.end()); //Almacena los digitos de la cadena de texto que tengan valores unicos
    return digitos.size() == yearStr.size(); //Verifica si el tamaño del conjunto es igual a la cadena
}

int encontrarYearDistintoYMinimo(int& year){
    while(true){
        year++;
        if (tieneDigitosDistintos(year)){
            return year;
        }
    }
}

int main(){
    int year;
    cin >> year;
    cout << encontrarYearDistintoYMinimo(year) << endl;
    system("pause>0");
    return 0;
}