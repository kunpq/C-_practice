#include <iostream>
using namespace std;
template <typename T>
void selectionSort(T list[], int listSize)
{
    for (int i = 0; i < listSize - 1; i++)
    {
        T currentMin = list[i];
        int currentMinIndex = i;
        for (int j = i + 1; j < listSize; j++)
        {
            if (currentMin > list[j])
            {
                currentMin = list[j];
                currentMinIndex = j;
            }
        }
        if (currentMinIndex != i)
        {
            list[currentMinIndex] = list[i];
            list[i] = currentMin;
        }
    }
}
int main(void)
{
    double x[3] = {12.0, 1999, 16};
    int ss[3] = {23, 455, 44};
    selectionSort(x, 3);
    for (int i = 0; i < 3; i++)
    {
        cout << ss[i] << endl;
        cout << x[i] << endl;
    }
    return 0;
}