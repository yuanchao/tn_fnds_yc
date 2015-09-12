
#ifndef WORLD_WINDOWS_H
#define WORLD_WINDOWS_H

#include <stdint.h>
#include <stdio.h>
#include <sys/time.h>

#define min(a,b) (((a)<(b))?(a):(b))
#define max(a,b) (((a)>(b))?(a):(b))

#define DWORD uint32_t

static DWORD timeGetTime() {
  DWORD ret;
  struct timeval tv;
  gettimeofday(&tv,NULL);
  ret = ((DWORD)(tv.tv_sec*1000 + tv.tv_usec/1000));
  return ret;
}

#endif
