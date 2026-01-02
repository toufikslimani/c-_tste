
#include <iostream>
using namespace std;

int MultiToNumbers(int a ,int b) {
    return (a * b);
}
void PrintMultiTable() {
    int i, j;
    cout << " \t\t\tMulti table 1 to 10\n";
    cout << "\t 1\t 2\t 3\t 4\t 5\t 6\t 7\t 8\t 9\t 10\n";
    cout << "----------------------------------------------------------------------------------------\n";
    for (i = 1; i <= 10; i++) {
        cout << i;
        cout << "\t|";
        for (j = 1; j <= 10; j++) {
            cout << i * j;
            cout << "\t|";
        }
        cout << "\n";

    }
}

int main()
{

    PrintMultiTable();



    return 0;

}
