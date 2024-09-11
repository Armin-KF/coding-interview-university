#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int NumberOfScores;
    cout << "Please Enter The Amount Of Scores You Need : ";
    cin >> NumberOfScores;

    vector<int> scores(NumberOfScores);
    cout << "Enter The Scores : ";
    for (int i = 0; i < NumberOfScores; i++)
    {
        cin >> scores[i];
    }

    int sum = 0;
    for (int score : scores)
    {
        sum += score;
        }

    double average = static_cast<double>(sum) / NumberOfScores;
    cout << "Average Score Is : " << average << endl;

    return 0;
}
