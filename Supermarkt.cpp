#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Product {
    public:
    Product(string product_name, int price);

    bool operator<=(const Product& b);

    friend ostream& operator<<(ostream& os, Product p);

    private:
    string product_name;
    int price;

};
Product::Product(string product_name = " ", int price = -1) : product_name(product_name), price(price) {
}
bool Product::operator<=(const Product& b) {
    if ( this->price != b.price) {
        return this->price < b.price;
    } else {
        return this->product_name <= b.product_name;
    }
}

ostream& operator<<(ostream& os, Product p) {
    os << p.product_name;
    return os;
}

void getl(vector <Product> &v, int n) {
    for (int i = 0; i < n; i++) {
        string name;
        int price;
        cin >> name;
        cin >> price;
        Product pdct(name, price);
        v[i] = pdct;
    }
}

void printl(vector <Product> &A, int n) {
    for (int i = 0; i < n; i++) 
        (i+1) < n ? cout << A[i] << ' ':cout << A[i] << endl;
}

void merge(vector <Product> &v, int start, int mid, int end) {
    int start1 = start;
    int start2 = mid+1;
    int start3 = 0;
    vector<Product> b;
    b.resize(end-start+1);
  
    while (start1 <= mid && start2 <= end) {
        if (v[start1] <= v[start2]) {
            b[start3++] = v[start1++];
        } else {
            b[start3++] = v[start2++];
        }
    }

    while (start1 <= mid) {
        b[start3++] = v[start1++];
    }

    while (start2 <= end) {
        b[start3++] = v[start2++];
    }
    
    for (int i = start, j = 0; i <= end; i++, j++) {
        v[i] = b[j];
    }
}


void merge_sort(vector <Product> &v, int start, int end){
    if (start < end) {
        int mid = (start+end) / 2;
        merge_sort(v, start, mid);
        merge_sort(v, mid+1, end);
        merge(v, start, mid, end);
    }
}

void Juntar(vector <Product> &end, vector <Product> &A, int cont, int &final){
    for (int j = 0; j < cont; j++) 
        end[final++] = A[j];
}

int main() {
    
    int n = 0, m = 0, p = 0, q = 0;
    cin>> n >> m >> p >> q;
    
    vector <Product> prat1;
    vector <Product> prat2;
    vector <Product> end;
    
    
    prat1.resize(n);
    prat2.resize(m);
    end.resize((p+q));
    
    getl(prat1, n);
    getl(prat2, m);

    merge_sort(prat1, 0, n-1);
    merge_sort(prat2, 0, m-1);

    int final { 0 };
    
    Juntar(end, prat1, p, final);
    Juntar(end, prat2, q, final);
    
    merge_sort(end, 0, p+q-1);
    
    printl(end, p + q);
 
      
    
    
}
