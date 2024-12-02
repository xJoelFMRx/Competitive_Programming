#include "iostream"
#include "string"
#include "vector"

using namespace std;

string abreviarPalabras(const string& palabra){
    int longitud = palabra.length();
    if (longitud > 10){
        return palabra[0] + to_string(longitud - 2) + palabra[longitud - 1];
    }
    return palabra;
}

int main(){
    int num;
    cin >> num;
    vector<string> palabras(num);
    for (int i = 0; i < num; i++) {
        cin >> palabras[i];
    }
    for (int i = 0; i < palabras.size(); i++) { 
        cout << abreviarPalabras(palabras[i]) << endl;
    }
    system("pause>0");
    return 0;
}