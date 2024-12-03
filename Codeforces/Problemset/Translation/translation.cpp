#include "iostream"
#include "string"
#include "algorithm" //Biblioteca que contiene reverse, esto servira para invertir la palabra s

using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    string sInverso = s; //Variable para obtener s y poder invertir la palabra sin afectar a s
    reverse(sInverso.begin(), sInverso.end()); //Invierte la palabra sInverso ahora comenzando desde el final hacia el inicio
    if (sInverso == t){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    system("pause>0");
    return 0;
}