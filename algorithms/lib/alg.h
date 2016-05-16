#include <stdio.h>

void bubble_sort(int arr[], int num) {
   int i, j, k, temp;

   printf("\nUnsorted Data:");
   for (k = 0; k < num; k++) {
      printf("%5d", arr[k]);
   }

   for (i = 1; i < num; i++) {
      for (j = 0; j < num - 1; j++) {
         if (arr[j] > arr[j + 1]) {
            temp = iarr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
         }
      }

      printf("\nAfter pass %d : ", i);
      for (k = 0; k < num; k++) {
         printf("%5d", arr[k]);
      }
   }
}

