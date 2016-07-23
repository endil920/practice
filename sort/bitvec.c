#import <stdio.h>
/*
 * implementation of a bitvector for programming pearls problem 1.2
 */

void setBit(int *array, int index)
{
   int arrIndex = index / 32; 
   int bitIndex = index % 32;
   printf("the arrIndex is %d\n", arrIndex);
   printf("the bitIndex is %d\n", bitIndex);

   array[arrIndex] |= (1 << bitIndex);
   printf("arr is now %d\n", array[arrIndex]);
}

int getBit(int *array, int index)
{
   int arrIndex = index / 32; 
   int bitIndex = index % 32;
   return (array[arrIndex] >> bitIndex) & 1;
}

int main(int argc, char *argv[])
{
   int vec[3];
   vec[0] = 0;
   vec[1] = 0;
   vec[2] = 0;
   int position;
   sscanf(argv[1], "%d", &position);
   //set the first bit
   setBit(vec, position);
   printf("the value is now %d\n", getBit(vec, position));
}
