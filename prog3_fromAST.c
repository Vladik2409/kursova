#include <stdio.h>
#include <stdlib.h>

int main() 
{
   int AAAAAAAAAAAA;
   int AAAAAAAAAAA2;
   int BBBBBBBBBBBB;
   int XXXXXXXXXXXX;
   int CCCCCCCCCCC1;
   int CCCCCCCCCCC2;
   printf("Enter AAAAAAAAAAAA:");
   scanf("%d", &AAAAAAAAAAAA);
   printf("Enter BBBBBBBBBBBB:");
   scanf("%d", &BBBBBBBBBBBB);
   for (int AAAAAAAAAAA2 = AAAAAAAAAAAA; AAAAAAAAAAA2 <= BBBBBBBBBBBB; AAAAAAAAAAA2++)
   printf("%d\n", (AAAAAAAAAAA2 * AAAAAAAAAAA2));
   for (int AAAAAAAAAAA2 = BBBBBBBBBBBB; AAAAAAAAAAA2 <= AAAAAAAAAAAA; AAAAAAAAAAA2++)
   printf("%d\n", (AAAAAAAAAAA2 * AAAAAAAAAAA2));
   XXXXXXXXXXXX = 0;
   CCCCCCCCCCC1 = 0;
   while (CCCCCCCCCCC1 < AAAAAAAAAAAA)
   {
   {
   CCCCCCCCCCC2 = 0;
   while (CCCCCCCCCCC2 < BBBBBBBBBBBB)
   {
   {
   XXXXXXXXXXXX = (XXXXXXXXXXXX + 1);
   CCCCCCCCCCC2 = (CCCCCCCCCCC2 + 1);
   }
   }
   CCCCCCCCCCC1 = (CCCCCCCCCCC1 + 1);
   }
   }
   printf("%d\n", XXXXXXXXXXXX);
   XXXXXXXXXXXX = 0;
   CCCCCCCCCCC1 = 1;
   do
   {
   CCCCCCCCCCC2 = 1;
   do
   {
   XXXXXXXXXXXX = (XXXXXXXXXXXX + 1);
   CCCCCCCCCCC2 = (CCCCCCCCCCC2 + 1);
   }
   while (!(CCCCCCCCCCC2 > BBBBBBBBBBBB));
   CCCCCCCCCCC1 = (CCCCCCCCCCC1 + 1);
   }
   while (!(CCCCCCCCCCC1 > AAAAAAAAAAAA));
   printf("%d\n", XXXXXXXXXXXX);
   system("pause");
    return 0;
}
