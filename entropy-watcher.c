#include <stdio.h>
 
int main()
{
   char ch;
   FILE *fp;
  
   fp = fopen("/proc/sys/kernel/random/entropy_avail","r");

   while(1) {
     while( ( ch = fgetc(fp) ) != EOF )
       printf("%c",ch);
     sleep(1);
     rewind(fp);
   }
   fclose(fp);
   return 0;
}
