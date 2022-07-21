#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

class Estudante{
public:

string nome;

int h;
Estudante(){}

Estudante(string nome, int h) : nome(nome), h(h) {}
};


bool compara(const Estudante e1, const Estudante e2){
    return e1.h > e2.h;
}

int main(){ 


int x = 0, y = 0;

cin >>x>>y;

vector <Estudante> v;

v.resize(x);

for(int i = 0; i < x; i++){
    cin >> v[i].nome >> v[i].h;
}

sort(v.begin(), v.end() , compara );

vector<vector<string>> p;

for (int i=0; i<y; i++){
    vector<string>a = vector<string>();
    p.push_back(a);
}

while (v.size() > 0){
    int flag = 0;
    
    for (int i=0; i<y; i++){
        
        for (int j=0; j<y; j++){
            
            for (string a : p[j]){
                if (a == v.front().nome){
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 0){
            p[i].push_back(v.front().nome);
                if (v.size() > 0)
                    v.erase(v.begin());
        }
    }
}

for (int i=0; i<y; i++){
    cout << "Time " << i+1 << endl;
    
    sort(p[i].begin(), p[i].end());
    
    for (auto a : p[i]){

    cout << a << endl;
}
    cout << endl;
}
    cout << endl;



}
