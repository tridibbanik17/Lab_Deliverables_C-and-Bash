#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
puts(argv[0]);
if (argc > 1) {
puts(argv[1]);
}
if (argc > 2) {
puts(argv[2]);
}
return EXIT_SUCCESS;
}
