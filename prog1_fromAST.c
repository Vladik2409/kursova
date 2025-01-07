#include <stdio.h>
#include <stdlib.h>

int main() 
{
   int AAAAAAAAAAAA;
   int BBBBBBBBBBBB;
   int XXXXXXXXXXXX;
   int YYYYYYYYYYYY;
   printf("Enter AAAAAAAAAAAA:");
   scanf("%d", &AAAAAAAAAAAA);
   printf("Enter BBBBBBBBBBBB:");
   scanf("%d", &BBBBBBBBBBBB);
   printf("%d\n", (AAAAAAAAAAAA + BBBBBBBBBBBB));
   printf("%d\n", (AAAAAAAAAAAA - BBBBBBBBBBBB));
   printf("%d\n", (AAAAAAAAAAAA * BBBBBBBBBBBB));
   printf("%d\n", (AAAAAAAAAAAA / BBBBBBBBBBBB));
   printf("%d\n", (AAAAAAAAAAAA % BBBBBBBBBBBB));
   XXXXXXXXXXXX = (((AAAAAAAAAAAA - BBBBBBBBBBBB) * 10) + ((AAAAAAAAAAAA + BBBBBBBBBBBB) / 10));
   YYYYYYYYYYYY = (XXXXXXXXXXXX + (XXXXXXXXXXXX % 10));
   printf("%d\n", XXXXXXXXXXXX);
   printf("%d\n", YYYYYYYYYYYY);
   system("pause");
    return 0;
}
