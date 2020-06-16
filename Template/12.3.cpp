#include <iostream>
using namespace std;
template <typename T>
void bubble(T *list, int listsize)
{
    bool changed = false;
    do
    {
        changed = false;
        for (int j = 0; j < listsize - 1; j++)
            if (list[j] > list[j + 1])
            {
                T temp = list[j + 1];
                list[j + 1] = list[j];
                list[j] = temp;
                changed = true;
            }
    } while (changed);
}
int main(void)
{
    int x[9] = {1, 2, 3, 6, 4, 5, 2, 7, 8};
    bubble(x, 9);
    for (int i = 0; i < 9; i++)
        cout << x[i] << " ";
    return 0;
}