#include <iostream>
#include <list>
using namespace std;

int main(){
    int n, val;
    int aux;
    list <int> head;
    cin >> n >> val;
    
    
    for(int i = 0; i < n; i++){
        cin >> aux;
        head.push_back(aux);
    }
    
    for (auto i = head.begin(); i != head.end();i++ ) {
        if (*i == val)
            i = head.erase(i);
    }
    
    for(auto i : head)
        cout << i << endl;

    
}
