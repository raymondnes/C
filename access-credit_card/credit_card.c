#include <stdio.h>
#include <string.h>

struct credit_card {
  char name[100];
  char card_number[100];
  char expiration_date[100];
  int security_code;
};

void print_credit_card_info(struct credit_card cc) {
  printf("Name: %s\n", cc.name);
  printf("Card Number: %s\n", cc.card_number);
  printf("Expiration Date: %s\n", cc.expiration_date);
  printf("Security Code: %d\n", cc.security_code);
}

int main() {
  struct credit_card cc1;
  strcpy(cc1.name, "John Doe");
  strcpy(cc1.card_number, "1234 5678 9012 3456");
  strcpy(cc1.expiration_date, "12/25");
  cc1.security_code = 123;
  
  print_credit_card_info(cc1);
  
  return 0;
}
