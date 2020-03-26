/********************************************************
 * [ File: matrix/matrix8.c ]
 * ******************************************************/ 
#define X_SIZE 60
#define Y_SIZE 30

int matrix[X_SIZE][Y_SIZE];

/********************************************************
 * init_matrix -- Sets every element of matrix to -1.
 * ******************************************************/ 
#define init_matrix() \
	memset(matrix, -1, sizeof(matrix));

