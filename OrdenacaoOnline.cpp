 #include <iostream>
#include <vector>

using namespace std;
void booble(vector <int> & A, int n){
int aux;
    bool swapped = true;

    while(swapped){
        swapped = false;

        for(int j = 0; j < n-1; j++ ){
            if(A[j] > A[j+1]){
                aux = A[j];
                A[j] = A[j+1];
                A[j+1] = aux;
                swapped = true;
            }
        }
    }
}
int main(){
    int n = 0, valor = 0, ope = 0,  pos = 0;
    cin>>n;
    vector <int> A;
    int tam = n;
   
    for(int i = 0; i<n ; i++){
      //cout << "qual operacao" << endl;
      
      cin>> ope;
      if(ope == 1){
          cin>> valor; 
          A.push_back(valor);
          booble(A, A.size());
           
      }else if(ope == 2){
          cin>> pos;
          cout<< A[pos] << endl;
           
      }
    }
  }
