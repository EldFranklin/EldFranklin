#include <iostream>
#include <vector>

using namespace std;

int main (){
    int n;
    
    cin >> n;
    
    vector<int> v(n);
    
    vector<int> aux(n);
    
    for (int i = 0; i < n; i++)
    cin >> v[i];
    
    
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n ; j++){
            if (v[i] < v[j]){
                aux[i] = j;
                break;
            }else
            {
                aux[i] = -1;
            }
        }
    }
    
    //gambiarra a gente aceita pela criatividade <3
    for (int i = 0; i < n; i++){
        int a = i;
        
        cout << aux[i];
        
        if (a + 1 < n){
            cout << " ";
        }
    }
    cout << endl;
    
    
    return 0;
