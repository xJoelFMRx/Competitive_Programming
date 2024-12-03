#include "iostream"
#include "string"
#include "set" //Para manejar caracteres unicos y no repitan

using namespace std;

int main(){
    string palabra;
    cin >> palabra;
    set<char> caracteresUnicos; //Almacena los caracteres unicos
    for (int i = 0; i < palabra.size(); i++){
        caracteresUnicos.insert(palabra[i]); //Agrega el caracter al conjunto
    }
    if (caracteresUnicos.size() % 2 == 0){ //odd es impar
        cout << "CHAT WITH HER!" << endl;
    }
    else{
        cout << "IGNORE HIM!" << endl;
    }
    system("pause>0");
    return 0;
}