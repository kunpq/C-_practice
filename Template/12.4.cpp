#include <iostream>
using namespace std;
template<typename T>
bool areStrictlyIdentical(const T list1[],const T list2[],int size)
{
    bool truth = false;
    for (int i = 0; i < size;i++)
        if(list1[i]==list2[i])
            truth = true;
    return truth;
}
int main(void)
{
    int s1[3] = {1, 55, 66};
    int s2[3] = {1, 55, 66};
    string ss1[3] = {
        "a",
        "b",
        "c"};
    string ss2[3] = {
        "a",
        "b",
        "c"};
    if(areStrictlyIdentical(s1,s2,3))
        cout << "Identical" << endl;
    if(areStrictlyIdentical(s1,s2,3))
        cout << "Identical" << endl;
    return 0;
}