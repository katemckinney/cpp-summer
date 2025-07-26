/*Jagged array.
The following code creates a 2 dimensional array that contains rows of uneven sizes. 
Fill in the code to first print the contents of the array and then print
row sums and print column sums.*/

#include <iostream>
using namespace std;

int main()
{
    int** TwoDimArray; // pointer to pointer — will point to jagged array
    const int ROW_COUNT = 5;

    TwoDimArray = new int*[ROW_COUNT]; // allocate array of 5 int* (rows)

    for (int i1 = 0, i2 = 1, k1 = 1; i1 < ROW_COUNT; i1++, i2++) // i1 = row, i2 = row size
    {
        TwoDimArray[i1] = new int[i2]; // allocate row of size i2 (i2 = i1 + 1)

        for (int j1 = 0; j1 < i2; j1++) {
            TwoDimArray[i1][j1] = k1++; // fill with increasing numbers
        }
    }

    // print contents
    for (int i1 = 0; i1 < ROW_COUNT; i1++) {
        for (int j1 = 0; j1 < i1 + 1; j1++) {
            cout << TwoDimArray[i1][j1] << " ";
        }
        cout << endl;
    }

	cout << endl;
    // print row sums
    for (int i1 = 0; i1 < ROW_COUNT; i1++) {
        int RowSum = 0;
        for (int j1 = 0; j1 < i1 + 1; j1++) {
            RowSum += TwoDimArray[i1][j1];
        }
        cout << RowSum << endl; // moved inside row loop
	}

	cout << endl;

    // print column sums
    for (int j1 = 0; j1 < ROW_COUNT; j1++) { // j1 = column index
        int ColumnSum = 0;
        for (int i1 = 0; i1 < ROW_COUNT; i1++) { // i1 = row index
            if (j1 <= i1) { // only sum if this row has this column
                ColumnSum += TwoDimArray[i1][j1];
            }
        }
        cout << ColumnSum << endl;
    }

    return 0;
}

