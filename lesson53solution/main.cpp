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

	int sum = sum1(matrix, row, column);
	print("Example of sum1: " +to_string(sum) + "\n");// выше центра

	int sum02 = sum2(matrix, row, column);// ниже центра
	print("Example of sum1: " + to_string(sum02) + "\n");

	int sum03 = sum3(matrix, row, column);// центр
	print("Example of sum1: " + to_string(sum03) + "\n");

	int sum04 = sum4(matrix, row, column);// ниже центра
	print("Example of sum1: " + to_string(sum04) + "\n");


	return 0;
}