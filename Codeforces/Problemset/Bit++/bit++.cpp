#include "iostream"
#include "string"

using namespace std;

int main(){
    int n;
    cin >> n;
    int total = 0;
    for (int i = 0; i < n; i++){
        string a;
        cin >> a;
        if (a == "++X" || a == "X++"){
            total++;
        }
        else if (a == "--X" || a == "X--"){
            total--;
        }
        else if (a == "X"){
            total+=0;
        }
    }
    cout << total << endl;
    system("pause>0");
    return 0;
}