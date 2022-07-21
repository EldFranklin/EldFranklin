#include <iostream>
#include <vector>
#include <cassert>
#include <list>
using namespace std;


void meio(list <int> head, int n){
    int m = 0;
    m = n/2;
    if(n%2 == 0){
        cout<< *next(head.begin(), (m)) << endl;
    }else{
        cout << *next(head.begin(), (m))<< endl;
    }
}

int main(){
    
    int n, aux;
    cin>> n;
    
    list <int> head;
    
    for(int i = 0; i< n; i++){
        cin >> aux;
        head.push_back(aux);
}
    meio(head, n);
    
    
    return 0;    
}
