#include <iostream>
#include <list>

using namespace std;


int main(){
    list <int> head;
    
    int n; 
    cin>> n;
    
    int aux;
    
    for(int i = 0; i < n; i++){
        cin>> aux;
        head.push_back(aux);
    }
    
    head.unique();
    
    for(auto i: head){
        cout << i << endl;
    }
}
