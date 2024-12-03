#include "iostream"

using namespace std;

int numeromaximoproblemas(int& p, int& t){
    int totalt = 240 - t;
    int maxproblemasposibles = 0;
    int tiempoempleado = 0;
    for (int i = 1; i <= p; i++){
        int tiempoproblema = 5 * i;
        if (tiempoempleado + tiempoproblema > totalt){
            break;
        }
        tiempoempleado += tiempoproblema;
        maxproblemasposibles++;
    }
    return maxproblemasposibles;
}

int main(){
    int p, t;
    cin >> p >> t;
    cout << numeromaximoproblemas(p,t) << endl;
    system("pause>0");
    return 0;
}