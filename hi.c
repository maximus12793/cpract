#include <stdio.h>

main() {
    printf("Hello World!\n");

    int a, b, c;
    a = 5;
    b = 7;
    c = a + b;
    printf("%d + %d = %d\n", a, b, c);
    printf ( "Line1\nLine2\nLine3\n" );
   
    dog();
    tellmeloc();
    return 0;
}


int dog(){

int x = 33;
  int y = 12;
  int z = 8;
   printf ( "Line69\nLine2\nLine3\n" );

  foo_function(&x, &y, &z);
}

int foo_function(int* x, int* y, int* z) {
  int g;
  *x = *y * *z;
  int f = *x;
  g = *x + *y + *z;
  printf("%d be talkin shit about that sum: %d\n",f ,g);
  return 0;
}

int tellmeloc(){

  int random = 0;
  while (random < 4)
  {
  printf("THIS IS THE NUMBER %d copy!!",random);

  

  system("ls -a");
  system("cp hi.c demo.c",random);
  random++;
  }
  return 0;

}




    // $ make
        // gcc hi.c -o randomtitle 
    // $ ./hello-c-world
    // $ ./hello-cpp-world