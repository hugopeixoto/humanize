#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

const int base = 1024;
const char* fmt[] = { "B", "KiB", "MiB", "GiB", "TiB", "PiB", "EiB", "ZiB", "YiB" };

int main() {
  long double n;
  while (scanf("%llf", &n) == 1) {
    int units = 0;

    while (n > base && units+1 < sizeof(fmt)/sizeof(*fmt)) {
      units++;
      n /= base;
    }

    printf("%.2llf %s\n", n, fmt[units]);
  }
  return 0;
}
