# include <stdio.h>

int input[10] = {10, 9, 8, 7, 6, 5, 1, 2, 3, 4};
  // Elements are hard coded
void menu() {
  printf("\n1. Insertion Sort \n2. Merge Sort \n3. Quick Sort \n4. Selection Sort  \n5. Shell Sort  \n6. Heap Sort  \n9. Exit");
}

void print_array(){
  printf("\nElements after sorting are ...\n");
  for(int i=0; i<10; i++)
    printf("%d\t", input[i]);
  printf("\n");