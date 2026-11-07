#include <iostream>
using namespace std;

int bubble_sort_test(void) {

    int arr[] = { 100, 200, 101, 50, 90, 89 };

    size_t length = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < length - 1; ++i) {

        for (int j = 0; j < length - 1 - i; ++j) {

            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }


        }

    }

    for (int i = 0; i < length; ++i) {

        cout << arr[i] << endl;

    }


    return 0;
}