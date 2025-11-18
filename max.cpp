#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {34, 67, 23, 89, 2, 90, 11, 78, 56, 45};
    int max = arr[0];
    for (int i = 0; i<10; i++) {
        if (arr[i] > max) {
            max =arr[i];
        }
    }
    cout << "Maximum element is: " << max << endl;
    return 0;
}