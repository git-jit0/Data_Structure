/* Bubble sort algorithm 
      1. Start at index zero, compare the element with the next one (a[0] & a[1] (a is the name of 
            the array)), and swap if a[0] > a[1]. Now compare a[1] & a[2] and swap if a[1] > a[2]. 
            Repeat this process until the end of the array. After doing this, the largest element is present 
            at the end. This whole thing is known as a pass. In the first pass, we process array elements 
            from [0,n-1]. 
      2. Repeat step one but process array elements [0, n-2] because the last one, i.e., a[n-1], is 
            present at its correct position. After this step, the largest two elements are present at the 
            end. 
      3. Repeat this process n-1 times.
      4. time complexity O(n^2) */ 
/* Bubble sort code */

#include <stdio.h>
int main()
{
      int array[100], n, c, d, swap;

      printf("Enter number of elements\n");
      scanf("%d", &n);
      printf("Enter %d integers\n", n);

      for (c = 0; c < n; c++)
            scanf("%d", &array[c]);

      for (c = 0 ; c < n - 1; c++)
      {
            for (d = 0 ; d < n - c - 1; d++)
            {
                  if (array[d] > array[d+1]) /* For decreasing order use '<' instead of '>' */
                  {
                        swap = array[d];
                        array[d] = array[d+1];
                        array[d+1] = swap;
                  }
            }
      }
      printf("Sorted list in ascending order:\n");

      for (c = 0; c < n; c++)
            printf("%d\n", array[c]);
      return 0;
}