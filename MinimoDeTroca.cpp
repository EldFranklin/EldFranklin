#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int selection_sort(vector<int>& v, int start, int end) {
int cont {0};
    if (start < end) {
        int minidx = start;
        bool swaped {false};
        for (int i = start + 1; i <= end; i++) {
            if (v[i] < v[minidx]) {
                minidx = i;
                swaped = true;
            }
        }
    swap(v[start], v[minidx]);
        if (swaped == true){
            cont++;
        }
        return cont + selection_sort(v, start + 1, end);
    }
    return cont;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i<n; i++){
       cin>> v[i];
    }
    cout << selection_sort(v, 0, n-1) << '\n';
}
