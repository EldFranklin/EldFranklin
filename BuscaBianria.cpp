#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int buscaBinaria(vector <int> &A, int m, int item){
    int start = 0, end = m-1, cont = 0, middle = 0;
    
    while(start <= end){
        middle = (start + end)/2;
        cont++;
        
        if(A[middle] == item){
            break;
            
        }else{
            if(A[middle]> item){
                end = middle -1;
                }else{
                    start = middle +1;
                }
            }
        }
    return cont;
    }
    


void recebeVector(vector <int> &A, int m){
    for(int i = 0; i<m; i++)
    cin>> A[i];
}



int main(){
    int m = 0, n = 0, item = 0;
    cin>> m >> n;
    
    vector <int> A(m);
    A.resize(m);
    vector <int> B(n);
    B.resize(n);
    
    
    recebeVector(A, m);
    
    recebeVector(B, n);
    
    for(int i = 0; i<n; i++){
        
        if(i == n-1){
            cout<< buscaBinaria(A, m, B[i]) << endl;
        }
        else{
           cout<< buscaBinaria(A, m, B[i]) << " ";
        }
    }
    
      
