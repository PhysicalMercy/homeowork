#include <iostream>

using namespace std;

void print_arr(int* arr, int size);
void change_size(int*& arr, int size, int new_size);

int main() {
    int size;
    cout<<"請輸入陣列大小"<<endl;
    cin >> size;
    int* arr = new int[size];

    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
    };

    print_arr(arr, size); 

    int new_size = size*2;
    change_size(arr, size, new_size);
    print_arr(arr, new_size);
}

void print_arr(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    
    }
    cout << '\n';
}
void change_size(int*& arr, int size, int new_size) {
    int* new_arr = new int[new_size];
    int* recycler = arr;
    copy(arr, arr + size, new_arr);

    for (int i = size; i < new_size; i++) {
        new_arr[i] = 0;
    }

    delete[] recycler;
    arr = new_arr;
}
