#include "pxt.h"

namespace XXserial {
    String readUntil(String delimiter) {
      return PSTR(uBit.serial.readUntil(MSTR(delimiter)));
    }
}