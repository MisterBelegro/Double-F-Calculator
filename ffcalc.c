
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(int argc, char **argv) {
    if(argc <= 1) {
        printf("Use this for getting help: \n\t%s --help\n", argv[0]);
        return 0;
    }

    if (!strcmp(argv[1], "--help") || (!strcmp(argv[1], "-h") ) ) {
        printf("    WELCOME TO FAOSFA FREE AND FAST CALCULATOR!\n\n\n  VERY BASIC MATH\nUse argument --add [a] [b] for adding number [a] to number [b].\nUse argument --sub [a] [b] for substracting number [a] from number [b].\n\n  LITTLE MORE COMPLICATED MATH\nUse argument --mul [a] [b] for multiplying number [a] by number [b].\nUse argument --div [a] [b] for dividing number [a] by number [b].\nUse argument --rem [a] [b] to get reminder of\ndivinding number [a] by number [b].\n\n  ADVANCED MATH\nUse argument --exp [a] [b] for raising number [a] to the power of number [b].\n");
    } else if(!strcmp(argv[1], "--add")) {
        if(argc <= 3) {
            printf("'--add' operation requires two parameters.\n");

        } else {
            double a, b;
            if(sscanf(argv[2], "%lg", &a) != 1 || sscanf(argv[3], "%lg", &b) != 1) {
                printf("'--add' operation requires two float parameters.\n");

            } else {
                printf("%lg + %lg = %lg\n", a, b, a+b);

            }
        }
    } else if(!strcmp(argv[1], "--sub")) {
        if(argc <= 3) {
            printf("'--sub' operation requires two parameters.\n");

        } else {
            double a, b;
            if(sscanf(argv[2], "%lg", &a) != 1 || sscanf(argv[3], "%lg", &b) != 1) {
                printf("'--sub' operation requires two float parameters.\n");

            } else {
                printf("%lg - %lg = %lg\n", a, b, a-b);

            }
        }
     } else if(!strcmp(argv[1], "--mul")) {
        if(argc <= 3) {
            printf("'--mul' operation requires two parameters.\n");

        } else {
            double a, b;
            if(sscanf(argv[2], "%lg", &a) != 1 || sscanf(argv[3], "%lg", &b) != 1) {
                printf("'--mul' operation requires two float parameters.\n");

            } else {
                printf("%lg * %lg = %lg\n", a, b, a*b);

            }
        }
     } else if(!strcmp(argv[1], "--div")) {
        if(argc <= 3) {
            printf("'--div' operation requires two parameters.\n");

        } else {
            double a, b;
            if(sscanf(argv[2], "%lg", &a) != 1 || sscanf(argv[3], "%lg", &b) != 1) {
                printf("'--div' operation requires two float parameters.\n");

            } else {
                printf("%lg / %lg = %lg\n", a, b, a/b);

            }
        }
     } else if(!strcmp(argv[1], "--rem")) {
        if(argc <= 3) {
            printf("'--rem' operation requires two parameters.\n");

        } else {
            int a, b;
            if(sscanf(argv[2], "%d", &a) != 1 || sscanf(argv[3], "%d", &b) != 1) {
                printf("'--rem' operation requires two integer parameters.\n");

            } else {
                printf("reminder of operation %d / %d is %d \n", a, b, a % b);

            }
        }
      } else if(!strcmp(argv[1], "--exp")) {
        if(argc <= 3) {
            printf("'--exp' operation requires two parameters.\n");

        } else {
            double a, b;
            if(sscanf(argv[2], "%lg", &a) != 1 || sscanf(argv[3], "%lg", &b) != 1) {
                printf("'--exp' operation requires two float parameters.\n");

            } else {
                printf("%lg ** %lg = %lg \n", a, b, pow(a, b) );

            }
        }
    } else {
        printf("Unknown parameter: '%s'. Type %s --help for help.\n", argv[1], argv[0]);

    }
    return 0;
 }
