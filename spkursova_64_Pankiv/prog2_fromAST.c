#include <stdio.h>
#include <stdlib.h>

int main() 
{
   int aaaaaaaaaaaa;
   int bbbbbbbbbbbb;
   int cccccccccccc;
   printf("Enter aaaaaaaaaaaa:");
   scanf("%d", &aaaaaaaaaaaa);
   printf("Enter bbbbbbbbbbbb:");
   scanf("%d", &bbbbbbbbbbbb);
   printf("Enter cccccccccccc:");
   scanf("%d", &cccccccccccc);
   if (aaaaaaaaaaaa > bbbbbbbbbbbb) 
   {
   if (aaaaaaaaaaaa > cccccccccccc) 
   {
   goto Abigger;
   }
   else
   {
   printf("%d\n", cccccccccccc);
   goto Outofif;
Abigger:
   printf("%d\n", aaaaaaaaaaaa);
   goto Outofif;
   }
   }
   if (bbbbbbbbbbbb < cccccccccccc) 
   {
   printf("%d\n", cccccccccccc);
   }
   else
   {
   printf("%d\n", bbbbbbbbbbbb);
   }
Outofif:
   if (((aaaaaaaaaaaa == bbbbbbbbbbbb && aaaaaaaaaaaa == cccccccccccc) && bbbbbbbbbbbb == cccccccccccc)) 
   {
   printf("%d\n", 1);
   }
   else
   {
   printf("%d\n", 0);
   }
   if (((aaaaaaaaaaaa < 0 || bbbbbbbbbbbb < 0) || cccccccccccc < 0)) 
   {
   printf("%d\n", (0 - 1));
   }
   else
   {
   printf("%d\n", 0);
   }
   if (!(aaaaaaaaaaaa < (bbbbbbbbbbbb + cccccccccccc))) 
   {
   printf("%d\n", 10);
   }
   else
   {
   printf("%d\n", 0);
   }
   system("pause");
    return 0;
}
