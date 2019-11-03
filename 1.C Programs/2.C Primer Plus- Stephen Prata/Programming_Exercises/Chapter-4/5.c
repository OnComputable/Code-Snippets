// Que5
#include<stdio.h>
int main(void)
{
	float Speed_in_Mbs,File_Size, Download_Time;
	
	// megabytes to bits = megabyte * 8
		
	printf("Enter the Download Speed in Mbs:\n");
	scanf("%f", &Speed_in_Mbs);
	printf("Enter the size of file in MB:\n");
	scanf("%f", &File_Size);
	
	Download_Time = (File_Size*8) / (Speed_in_Mbs);

	printf("At %.2f megabits per second, a file of %.2f megabytes\ndownloads in %.2f seconds.\n", Speed_in_Mbs, File_Size, Download_Time);

	return 0;
}
