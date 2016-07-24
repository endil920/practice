#import <stdio.h>
#import <math.h>
/*
 * implementation of a bitvector sort for programming pearls problem 1.3
 */

void setBit(int *array, int index)
{
   int arrIndex = index / 32; 
   int bitIndex = index % 32;
   array[arrIndex] |= (1 << bitIndex);
}

int getBit(int *array, int index)
{
   int arrIndex = index / 32; 
   int bitIndex = index % 32;
   return (array[arrIndex] >> bitIndex) & 1;
}

/*
 * arg 0: array size
 * arg 1: file name
 */
int main(int argc, char *argv[])
{
   int arraySize;
   sscanf(argv[1], "%d", &arraySize);
   int numInts = ceil(arraySize / 32.0);
   printf("we will need %d ints\n", numInts);

   int vec[numInts];
   for (int i = 0; i < numInts; i++)
   {
       vec[i] = 0;
   }

   char *fname = argv[2];
   printf("file %s\n", fname);

   FILE *f = fopen(fname, "r");
   int num;
   while(fscanf(f, "%d,", &num) != EOF)
   {
       setBit(vec, num);
   }
   printf("\n");
   for(int i = 0; i < arraySize; i++)
   {
       if(getBit(vec, i) == 1)
       {
           printf("%d\n", i);
       }
   }
}
