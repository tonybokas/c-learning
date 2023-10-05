#include <string.h>
#include <stdio.h>

int main (void) {

   char text[25] = "text";
   char *salt = "salt";
   strncat_s (text, strlen (text) + strlen (salt) + 1, salt, strlen (salt));
   printf ("%s\n", text);
   return 0;
}