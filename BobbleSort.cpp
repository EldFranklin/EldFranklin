#include <iostream>
using namespace std;

int main(){
    int n = 0, aux = 0, cont = 0;
    bool swapped = true;
    cin >> n;
    
    int a[n];
    
for(int i = 0 ; i < n; i++)
    cin>> a[i];
    
    while(swapped){
        swapped = false;
        cont++;
        
    for(int j = 0; j < n-1; j++ ){
        if(a[j] > a[j+1]){
            aux = a[j];
            a[j] = a[j + 1];
            a[j + 1] = aux;
                swapped = true;
            }
        }
    }
    
    cout<< cont << endl;
  
}
