#include "logic.h"

int main() {
	int matrix[DEFAULT_SIZE][DEFAULT_SIZE];
	int row, column;

	do {
		system("cls");
		print("Input size of matrix (NxM): ");
		cin >> row >> column;
	} while (row <= 0 || column <= 0);

	init(matrix, row, column, -10, 10);
	print("Matrix:\n");
	print(convert(matrix, row, column));


	return 0;
}