#include <iostream>
#include <list>

using namespace std;

int main(){
    list <int> head;
    list <int> head2;
    list <int> sherek;
    int n1, aux;
    cin >> n1;
    
    
    for(int i = 0; i < n1; i++){
        cin>> aux;
        head.push_back(aux);
        sherek.push_back(aux);
        
    }
    
    cin >> n1;
    for(int i = 0; i < n1; i++){
        cin >> aux;
        head2.push_back(aux);
        sherek.push_back(aux);
    }
    
    sherek.sort();
    
    for(auto i : sherek){
        cout << i << endl;
    }
    
    
    
}
