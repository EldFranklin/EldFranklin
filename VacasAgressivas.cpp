#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>

using namespace std;

bool isCompatible(vector <int> A, int dist, int cows) {
  int n = A.size();
  int k = A[0];
  cows--;
  for (int i = 1; i < n; i++) {
    if (A[i] - k >= dist) {
      cows--;
      if (!cows) {
        return true;
      }
      k = A[i];
    }
  }
  return false;
}
int main() {

    int n = 0, c = 0;
    cin>> n >> c;
    vector<int> A(n);
    
    A.resize(n);

    for(int i = 0; i< n ;i++)
    cin>>A[i];


    sort(A.begin(), A.end());
    
    int dif = A[n - 1] - A[0];
    
    int resultado = INT_MIN;
        
        for (int i = 1; i <= dif; i++){
            
            bool possible = isCompatible(A, i, c);
                
                if (possible){
                resultado = max(resultado, i);
                }
        }
    
    cout << resultado <<endl;
}
