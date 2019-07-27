#include "vntlib.h"

constructor Function5(){
    PrintUint256T("recurrent times:", res);
}

MUTABLE
uint256 test1() {
    uint256 a = 20;
    PrintUint256T("a:", a);
    uint256 i = U256SafeMul(a, a);
    Require(i > a, "i > a");
    test2(a, i);

    return i;
}

MUTABLE
void test2(uint256 a, uint256 i) {
    Assert(a < i, "require a < i");
    PrintUint256T("a < i", a);
}

