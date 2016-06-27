#include <stdio.h>
 
int main()
{
   char ch;
   FILE *fp;
  
   fp = fopen("/dev/random","r");

   while(1) {
     while(fgetc(fp))
       printf(".");
   }
   fclose(fp);
   return 0;
}
