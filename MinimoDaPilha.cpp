#include <iostream>
#include<stack>
using namespace std;

class StackMin
{
private:
    stack<int> p;
    stack<int> menor;

public:
    StackMin() {
        
    }
    
    void push(int n)
    {
        if(p.empty()){
           
            p.push(n);
            
            menor.push(n);
            
        } else{
            if (menor.top() >= n){
                
                p.push(n);
                
                menor.push(n);
                
            } else{
                
                p.push(n);
                
                menor.push(menor.top());   
                }
            }
    }
    
    void pop() {
        
        p.pop();
        
        menor.pop();
    }
    
    int top() {
      
       return p.top();
    }
    
    int getmin() {
       
        return menor.top();
    }
};

int main()
{
    int n;
    StackMin s;

    cin >> n;

    for(int i = 0; i < n; i++){
        int op, x;
        cin >> op;
        
        if(op==1){
            cin >> x;
            s.push(x);
        }else if(op==2){
            s.pop();
        }else{
            cout << s.getmin() << endl;
        }

    }
}
