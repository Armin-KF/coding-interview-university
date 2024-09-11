#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> myVec;

    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 5; j++)
        {

            myVec.push_back(j);
        }
    }

    /*

    if (!myVec.empty())
    {
        cout << " Its Not Empty. ";
    }
    else
    {
        cout << " its Empty";
    }
    */

    // Get the vector size
    int myVecSize = myVec.size();
    cout << "Vector Size Is : " << myVecSize << endl;

    for (int i : myVec)
    {

        cout << i << " ";
    }

    return 0;
}
