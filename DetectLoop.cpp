#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main(){
    
    int n, aux, val, cont = 0;
    list <int> head;
    
    cin>> n >> aux;
    for(int i = 0; i < n; i++){
        cin>> val;
        cont = 1;
        if(aux == val){
            cout << "1" << endl;
            cont = 0; break;
        }
    }
    if(cont !=0)
    cout<< "0" << endl;

    return 0;    
}
