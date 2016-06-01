#include "io.h"
#include "bdi_interface.h"
#include "cacti_interface.h"

extern "C" int bdi_interface ()
{

  uca_org_t result;

  result = cacti_interface(1048576,
                           64,
                           4,
                           1,
                           0,
                           0,
                           0,
                           1,
                           32,
                           8192,
                           8,
                           8,
                           256,
                           1,
                           14,
                           0,
                           1,
                           0,
                           0,
                           0,
                           0,
                           100,
                           0,
                           60,
                           100000,
                           100000,
                           1000000,
                           100000,
                           2,
                           350,
                           0,
                           0,
                           0,
                           0,
                           0,
                           1,
                           2,
                           2,
                           0,
                           8,
                           0,
                           0,
                           100,
                           100,
                           0,
                           100,
                           0,
                           10,
                           10000,
                           10000,
                           10000,
                           10000,
                           1,
                           1);

  return 500;
}

