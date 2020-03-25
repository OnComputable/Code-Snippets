/********************************************************
 * [ File: matrix/matrix5.c ]
 * ******************************************************/ 
#define X_SIZE 60
#define Y_SIZE 30

int matrix[X_SIZE][Y_SIZE];

/********************************************************
 * init_matrix -- set every element of matrix to -1
 * ******************************************************/ 

void init_matrix()
{
	register int index;	// element counter
	register int *matrix_ptr;

	matrix_ptr = &matrix[0][0];
	for (index = 0; index < X_SIZE * Y_SIZE; ++index)
	{
		*matrix_ptr = -1;
		++matrix_ptr;
	}
}

