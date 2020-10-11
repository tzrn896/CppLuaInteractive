#include<iostream>
#include<lua.hpp>
using namespace std;
int main() {
	lua_State* L = luaL_newstate();
	if (L == NULL) {
		return 0;
	}
	luaL_openlibs(L);
	luaL_dofile(L, "Lua/Supplier.lua");
	lua_close(L);
	return 0;
}