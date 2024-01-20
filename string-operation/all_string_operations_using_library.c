#include<stdio.h>
#include<string.h>
int main()
{
      char name[200];
      printf("Enter something: ");
      fgets(name,sizeof(name),stdin);
      printf("%s",name);

      int length = strlen(name); // to measure the length of string
      printf("\nLength of string %d",length);
      int cmp = strcmp(name,name); // compareing the same string , will return 1 
      printf("\ncompared string %d",cmp);
      char new_name[200]; strcpy(new_name,name); // destination, source // to copy string
      puts("\ncopied string");
      puts(new_name);
      strcat(name,new_name); // addes new_name after name
      puts("\nconcaatinated string ");
      puts(name);
      strrev(new_name); //reverse the string
      puts("\nreversed string ");
      puts(new_name);
      return 0;
}