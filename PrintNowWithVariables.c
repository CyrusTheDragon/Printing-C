#include <stdio.h>

int main() {
  char waah = 'A';
  int x = 43;
  int y = 26;

  printf("wompy womp\n");
  printf("Now, how do you print a number??\n");
  printf("%d\n", x + y);
  printf("%d\n", x * y);
  printf("%c <--- he said \"A\" ", waah);
  // The Variable Changes here allowing to add or multiple and or divide them if
  // wanted

  x = 25;
  y = 75;
  printf("\n%d\n", x + y);
  float dec = 1.25;
  float d = 5;
  printf("%f", dec * d);
  char Wompper[] = "Waaaaah";
  printf("\n%s   <--- he cri...\n", Wompper);
  double d1 = 22.233e10;
  printf("%f wow thats a big ol number\n", d1);
  d1 = 42.4324e22;
  printf("%f okay thats too big\n", d1);
  printf("%lu\n", sizeof(d1));

  return 0;
}