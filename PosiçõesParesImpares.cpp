#include <iostream>
#include <list>
using namespace std;


int main(){
    int n;
    cin >> n;
    list <int> head, aux;
    
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if( i%2 != 0){
            aux.push_back(x);
            
        }else{
            head.push_back(x);
        }
    }
    
    for(auto i : head)
    cout<< i << endl;
    
    for(auto i : aux)
    cout<< i << endl;
}
