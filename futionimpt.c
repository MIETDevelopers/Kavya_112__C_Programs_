// AUTHOR : KAVYA DHAR

#include <stdio.h>
#include <string.h>
int main()
{
  struct student
  {
    int roll_no;
    char name[30];
    int phone_number;
  };
  struct student p1 = {1,"Brown",123443};
  struct student p2, p3;
  p2.roll_no = 2;
  strcpy(p2.name,"Sam");
  p2.phone_number = 1234567822;
  p3.roll_no = 3;
  strcpy(p3.name,"Addy");
  p3.phone_number = 1234567844;
  printf("First Student\n");
  printf("roll_no : %d\n", p1.roll_no);
  printf("name : %s\n", p1.name);
  printf("phone_number : %d\n", p1.phone_number);
  printf("Second Student\n");
  printf("roll_no : %d\n", p2.roll_no);
  printf("name : %s\n", p2.name);
  printf("phone_number : %d\n", p2.phone_number);
  printf("Third Student\n");
  printf("roll_no : %d\n", p3.roll_no);
  printf("name : %s\n", p3.name);
  printf("phone_number : %d\n", p3.phone_number);
  return 0;
}
