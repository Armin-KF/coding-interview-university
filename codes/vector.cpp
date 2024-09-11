#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Adding Numbers To Vector
    vector<int> Numbers = {1, 2, 3, 4, 5};
    Numbers.insert(Numbers.begin() + 5, 6);
    Numbers.insert(Numbers.begin() + 6, 7);
    for (int i : Numbers)
    {
        cout << i << " ";
    }

    cout << " ------------------------ ";

    Numbers.erase(Numbers.begin() + 6);
    for (int i : Numbers)
    {
        cout << i << " ";
    }

    return 0;
}