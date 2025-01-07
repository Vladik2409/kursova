#include <stdio.h>
#include <stdlib.h>

int main() 
{
   int AAAAAAAAAAAA, BBBBBBBBBBBB, CCCCCCCCCCCC;
   printf("Enter AAAAAAAAAAAA:");
   scanf("%d", &AAAAAAAAAAAA);
   printf("Enter BBBBBBBBBBBB:");
   scanf("%d", &BBBBBBBBBBBB);
   printf("Enter CCCCCCCCCCCC:");
   scanf("%d", &CCCCCCCCCCCC);
   if ((AAAAAAAAAAAA > BBBBBBBBBBBB))
   {
   if ((AAAAAAAAAAAA > CCCCCCCCCCCC))
   {
   goto Abigger;
   }
   else
   {
   printf("%d\n", CCCCCCCCCCCC);
   goto OutofIF;
Abigger:
   printf("%d\n", AAAAAAAAAAAA);
   goto OutofIF;
   }
   }
   if ((BBBBBBBBBBBB < CCCCCCCCCCCC))
   {
   printf("%d\n", CCCCCCCCCCCC);
   }
   else
   {
   printf("%d\n", BBBBBBBBBBBB);
   }
OutofIF:
   if (((AAAAAAAAAAAA == BBBBBBBBBBBB) && (AAAAAAAAAAAA == CCCCCCCCCCCC) && (BBBBBBBBBBBB == CCCCCCCCCCCC)))
   {
   printf("%d\n", 1);
   }
   else
   {
   printf("%d\n", 0);
   }
   if (((AAAAAAAAAAAA < 0) || (BBBBBBBBBBBB < 0) || (CCCCCCCCCCCC < 0)))
   {
   printf("%d\n", -1);
   }
   else
   {
   printf("%d\n", 0);
   }
   if ((!(AAAAAAAAAAAA < (BBBBBBBBBBBB + CCCCCCCCCCCC))))
   {
   printf("%d\n", (10));
   }
   else
   {
   printf("%d\n", (0));
   }
   system("pause");
    return 0;
}
