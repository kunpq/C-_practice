#include <iostream>
using namespace std;
void selectionSort(double list[], int listSize)
{
    for (int i = 0; i < listSize - 1; i++)
    {
        double currentMin = list[i];
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
    double x[3] = {12.0, 16, 16};
    selectionSort(x, 3);
    for (int i = 0; i < 3; i++)
        cout << x[i] << endl;
    return 0;
}