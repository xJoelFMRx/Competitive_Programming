#include "iostream"
#include "vector"

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> scores(n);
    for (int i = 0; i < n; i++){
        cin >> scores[i];
    }
    int umbral = scores[k-1]; //porque el indice en arreglos siempre comienza en 0
    int conteo = 0;
    for (int i = 0; i < n; i++){
        if (scores[i] >= umbral && scores[i] > 0){
            conteo++;
        }
    }
    cout << conteo << endl; 
    system("pause>0");
    return 0;
}