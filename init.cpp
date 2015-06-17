#include <stdio.h>
extern "C" {
  #include "lua.h"
}
#include <iostream>
using namespace std;

extern "C" {
    int luaopen_libclnn( lua_State *L );
}

void clnn_MSECriterion_init(lua_State *L);

int luaopen_libclnn( lua_State *L ) {
//    printf("luaopen_libclnn called :-)\n");
    clnn_MSECriterion_init(L);
//    cout << " try cout" << endl;
    return 1;
}
