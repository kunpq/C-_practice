#include <iostream>
using namespace std;
template<typename T>
T Mini(T *arr, int size)
{
    T temp = arr[0];
    for (int i = 0; i < size-1;i++)
        if(temp>arr[i+1])
            temp = arr[i + 1];
    return temp;
}
int main(void)
{
    int size = 6;
    int arr1[size] = {9, 2, 3, 4, 5, 6};
    double arr2[size] = {1, 2, 100, 4, 5, 6};
    string arr3[size] = {
        "a",
        "ab",
        "abc",
        "abcd",
        "abcde",
        "abcdef"};
    cout << Mini(arr1, size) << " " << Mini(arr2, size) << " " << Mini(arr3, size) << endl;
    return 0;
}