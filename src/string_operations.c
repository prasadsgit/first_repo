#include <stdio.h>

<<<<<<< HEAD:src/string.c
int my_strlen(char *s)
=======
size_t my_strlen(const char *s)
>>>>>>> 46a7ff76714bd7183ac1be20812b2a86a2255a75:string.c
{
   char *p = s;
	new _bracnh testing
   while (*p)
      ++p;

   return (p - s);
}

int main(void)
{
   int i;
   char *s[] = 
   {
      "Git tutorials",
      "Tutorials Point"
   };

   for (i = 0; i < 2; ++i)
      
   printf("string lenght of %s = %d\n", s[i], my_strlen(s[i]));
   
   printf("%s\n", my_strcpy(p1, "Hello, World-- DOT !!!"));

   printf("patch createion);

   return 0;
}
