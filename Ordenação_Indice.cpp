#include <iostream>
#include <vector>

using namespace std;

void index(vector<int> v){
vector<int> aux = v;
bool swapped = true;
int n = v.size();
    while(swapped != false){
        swapped = false;
            for (int i = 0; i < n-1; i++)
                if(v[i] > v[i+1]){
                    swap(v[i],v[i+1]);
                    swapped = true;
                }
    }
    for(int i = 0; i < n;i++){
        for (int j = 0; j < n; j++)
            if(v[i] == aux[j]){
                cout<<j; 
            break;
            }
        if(i!= n-1)
            cout<<" ";
    }
}
int main(){
    int n = 0;
    cin>>n;
    vector<int> v;
    for(int i = 0;i < n;i++){
        int n2;
        cin>>n2;
        v.push_back(n2);
    }
    index(v);
    cout<< "\n";
    return 0;
}
