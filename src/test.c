#include <stdio.h>
#include <cpuinfo.h>

int main() {
  cpuinfo_initialize();
  printf("Running on %s CPU\n", cpuinfo_get_package(0)->name);
  cpuinfo_deinitialize();
  return 0;
}
