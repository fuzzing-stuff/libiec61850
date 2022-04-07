#include <stdio.h>
#include <stdlib.h>

#include "iec61850_server.h"
#include "hal_thread.h"

#include "goose_receiver.c"

int LLVMFuzzerTestOneInput(const char *data, size_t size) {
    int out;
    MmsValue *dataSetValues[10];
    GooseParseError error = parseAllData((uint8_t*) data, size, (MmsValue*) dataSetValues);

    return 0;
}
