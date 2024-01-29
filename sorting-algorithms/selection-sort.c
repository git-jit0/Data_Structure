/* Selection sort algorithm (for ascending order) 
1. Find the minimum element in the array and swap it with the element in the 1st position. 
2. Find the minimum element again in the remaining array[2, n] and swap it with the element 
      at 2nd position, now we have two elements at their correct positions. 
3. We must do this n-1 times to sort the array.
4. time complexity is O(n^2) */

#include <stdio.h>
int main()
{
      int array[100], n, c, d, position, t;
      printf("Enter number of elements\n");
      scanf("%d", &n);
 
      printf("Enter %d integers\n", n);
 
      for (c = 0; c < n; c++)
            scanf("%d", &array[c]);
 
      for (c = 0; c < (n - 1); c++) // finding minimum element (n-1) times
      {
            position = c;

            for (d = c + 1; d < n; d++)
            {
                  if (array[position] > array[d])
                        position = d;
            }

            if (position != c)
            {
                  t = array[c];
                  array[c] = array[position];
                  array[position] = t;
            }
      }
 
      printf("Sorted list in ascending order:\n");
 
      for (c = 0; c < n; c++)
            printf("%d\n", array[c]);
 
      return 0;
}
