//https://www.hackerrank.com/challenges/students-marks-sum/problem
// Used gdb to debug this program 

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
  //Write your code here.
  int marks_total = 0;
  if (gender == 'b') {
      for(int i = 0; i<number_of_students;i = i+2) // Bug was here i was doing i+2 but not assigning to i as i++ does.
	      // Therefore it got into infinite loop
      {
        if (i >= number_of_students) {
            break;
        }
        marks_total += *(marks + i);
      }
  }
  else if (gender == 'g') {
      for(int i = 1; i<number_of_students;i =i+2)
      {
        if (i >= number_of_students) {
            break;
        }
        marks_total += *(marks + i);
      }
    
  }
  
  return marks_total;
}

int main() {
    int number_of_students;
    char gender;
    int sum;
  
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }
    
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
 
    return 0;
}
