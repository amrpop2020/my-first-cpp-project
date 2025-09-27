
#include <iostream>
#include <iomanip>
#include <limits>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int ReadPositiveNumber(string msg)
{
    int number;
    do
    {
        cout << msg << endl;
        cin >> number;
    } while (number <= 0);

    return number;
}
void ReadArray(int arr[], int& size)
{
    size = ReadPositiveNumber("Enter The Size Of Array ( Numbers Of Elements ): ");

    cout << "Enter The Size Of Array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Elements " << i + 1 << ": ";
        cin >> arr[i];
    }
}
void PrintArray(int arr[], int size)
{
    cout << "\nNumbers Of Elements Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int CountRepeats(int arr[], int size, int number)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == number)
            count++;
    }
    return count;
}

int main()
{
    int arr[100], size;


    ReadArray(arr, size);
    PrintArray(arr, size);

    int num = ReadPositiveNumber("\nEnter The Number Would you Want To Know How Mnany Reapeted : ");
    int repeats = CountRepeats(arr, size, num);
    cout << " Number " << num << " Reapeted " << repeats << " Time(s)." << endl;
    return 0;
}

