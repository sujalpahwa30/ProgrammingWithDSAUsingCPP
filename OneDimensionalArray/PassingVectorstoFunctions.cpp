#include<iostream>
#include<vector>
using namespace std;
void change(vector<int>a) {
    a[0] = 100;
    for(int i = 0; i < a.size(); i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
int main() {
    vector<int>v;   // Vectors are passed by value each time we pass, a new vector is created 
    v.push_back(6);
    v.push_back(4);
    v.push_back(8);
    v.push_back(9);
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
    change(v);
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
}