#include <iostream>
#include <vector>

using namespace std;


void merge(vector <int> & A, int start, int mid, int end){
    //Criei o meu vetor auxiliar
    vector <int> B;
    B.resize(end-start + 1);
    
    int start1 = start;
    int start2 = mid+1;
    int start3 = 0;

    while( start1 <= mid && start2 <= end){
        if(A[start1] <= A[start2]){
            B[start3++] = A[start1++];
        }else{
            B[start3++] = A[start2++];
        }
       
    }

    while( start1 <= mid ){
        B[start3++] = A[start1++];
        
    }

    while( start2 <= end ){
        B[start3++] = A[start2++];
        
    }

    for(int i = start, j = 0; i <= end; i++, j++){
        A[i] = B[j];
    }
}

void mergesort(vector <int> & A, int start, int end ){
    if(end > start){
        int mid = (start + end)/2;
        
        mergesort(A, start, mid);
        
        mergesort(A, mid+1, end);
        
        merge(A, start, mid, end );
        
    }

}

int main(){
    int n = 0;
    bool igual = false;
    cin>> n;
    vector <int> A({n});
    
    vector <int> B({n});
    A.resize(n);
    B.resize(n);
    
  
    
    
    for(int i = 0; i<n; i++)
        cin>> A[i];  
        
    for(int i = 0; i<n; i++)
        cin>> B[i]; 
        
        
    mergesort(A, 0, n);
    
    mergesort(B, 0, n);
    
    
    

    for(int i = 0; i<n; i++){
        if(B[i] == A[i]){
            igual = true;
        }
        else{
            igual = false;
        }
    }
    
    if(igual == false){
        cout<< "0" << endl;
    }
    if(igual == true){
        cout<< "1" << endl;
    }
    
        
    }
