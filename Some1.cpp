#include <iostream>
#include <list>
#include <vector>
using namespace std;


int main(){
    vector <int> head;
    int n, aux;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin>> aux;
        head.push_back(aux);
    }

    head[head.size()-1]++;
    
    for(int i = n-1; i > 0; i--){
        if(head[i]==10){
            head[i] = 0;
            head[i-1]++;
        }else{
            break;
        }
    }
    
    if(head[0] == 10){
        head.insert(head.begin(), 1);
        head[1] = 0;
        
    }
    
    for(int i = 0; i < head.size(); i++){
        cout << head[i] << endl ;
    }
}
