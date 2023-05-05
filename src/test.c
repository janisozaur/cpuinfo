#include <stdio.h>
#include <cpuinfo.h>

int main() {
  printf("Init\n");
  fflush(stdout);
  cpuinfo_initialize();
  printf("Running on %s CPU\n", cpuinfo_get_package(0)->name);
  cpuinfo_deinitialize();
  printf("Denit\n");
  fflush(stdout);
  return 0;
}
