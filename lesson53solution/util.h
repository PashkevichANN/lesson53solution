#include <iostream>
using namespace std;
#define DEFAULT_SIZE 10
#include <string>

string convert(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int row, int column);


void init(int matrix[DEFAULT_SIZE][DEFAULT_SIZE],
	int row, int column, int a, int b);

void print(string text);