#include "vntlib.h"

// 计数
KEY uint256 count;

constructor For5(){
}

MUTABLE
uint256 test1(){
    for (k = -1; k == 1; k++) {
        count++;
    }

    PrintUint256T("For", count)

    return count;
}

void test2() {
    PrinStr("test1()", "test1()");
    test1();
}