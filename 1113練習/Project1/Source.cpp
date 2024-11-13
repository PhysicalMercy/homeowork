#include <iostream>
#include <string>
using namespace std;

template <typename T>
int binarySearch(T arr[], int size, T target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;  
        }
        else if (arr[mid] < target) {
            left = mid + 1;  
        }
        else {
            right = mid - 1;  
        }
    }

    return -1;  
}

int main() {
    char type;  
    int n, q;   
    while (cin >> type >> n >> q) {
        if (type == 'i') {
            int data[30];  
            for (int i = 0; i < n; i++) {
                cin >> data[i];  
            }

            for (int i = 0; i < q; i++) {
                int target;
                cin >> target;  
                int result = binarySearch(data, n, target);  

                cout << result << endl;  
            }
        }
        else if (type == 's') {
            string data[30]; 
            for (int i = 0; i < n; i++) {
                cin >> data[i];  
            }

            for (int i = 0; i < q; i++) {
                string target;
                cin >> target;  
                int result = binarySearch(data, n, target);  

                cout << result << endl; 
            }
        }
    }

    return 0;
}

