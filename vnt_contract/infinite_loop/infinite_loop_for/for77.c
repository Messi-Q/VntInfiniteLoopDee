#include "vntlib.h"

// 计数
KEY uint64 count;

constructor For7(){}

MUTABLE
uint64 test1(){
    PrintStr("uint64", "uint64")

    for (uint64 i = 1000; i > 0; i++) {
        count++;
    }

    return count;
}
