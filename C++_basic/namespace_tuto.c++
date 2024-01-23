#include <iostream>

namespace {
    int OnlyInThisFile() {}
    // static int OnlyInTHisFile()과 동일
    int only_in_this_file = 0;
    //static int x와 동일
}

int main(){
    OnlyInThisFile();
    only_in_this_file = 3;
}