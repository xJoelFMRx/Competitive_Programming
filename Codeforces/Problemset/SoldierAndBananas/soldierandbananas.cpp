#include "iostream"

using namespace std;

int cantidadDolaresPrestado(int& k, int& n, int& w){
    int cantidadDolaresPrestado = 0;
    int dineropagar = 0;
    for (int i = 1; i <= w; i++){
        dineropagar += k * i;
    }
    cantidadDolaresPrestado = dineropagar - n;
    if (n > dineropagar){
        cantidadDolaresPrestado = 0;
    }
    return cantidadDolaresPrestado;
}

int main(){
    int k, n, w;
    cin >> k >> n >> w;
    cout << cantidadDolaresPrestado(k,n,w) << endl;
    system("pause>0");
    return 0;
}