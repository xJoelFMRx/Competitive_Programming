#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

int main(){
    int t;
    cin >> t;
    vector<string> palabras(t);
    vector<string> respuestas(t);
    for (int i = 0; i < t; i++){
        cin >> palabras[i];
        transform(palabras[i].begin(), palabras[i].end(), palabras[i].begin(), ::toupper);
        if (palabras[i] == "YES"){
            respuestas[i] = "YES";
        }
        else{
            respuestas[i] = "NO";
        }
    }
    for (int i = 0; i < t; i++){
        cout << respuestas[i] << endl;
    }
    system("pause>0");
    return 0;
}