#include<iostream>
#include<queue>
using namespace std;

int main(){
    
    queue<char>p;
    
    char jogos[16] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P'};
    
    for (auto x : jogos){
        p.push(x);
    }
    
    while (p.size() > 1){
        
    int x, y;
    
    cin >> x >> y;
    
    if (x > y){
        
        p.push(p.front());
        p.pop();
        p.pop();
        
    }else{

        p.pop();
        p.push(p.front());
        p.pop();
    }
    
        
    }


cout << p.front() << endl;
}
