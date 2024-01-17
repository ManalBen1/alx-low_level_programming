#define _GNU_SOURCE
#include <dlfcn.h>

int rand(void) {
    return 9;  // Always return the winning number
}
