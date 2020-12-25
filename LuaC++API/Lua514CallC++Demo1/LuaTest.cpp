#include <stdio.h>

extern "C" {
#include "lua.h"
#include "lualib.h"
#include "lauxlib.h"
}

/* the Lua interpreter */
lua_State* L;


int main(int argc, char *argv[])
{
	/* initialize Lua */
	L = lua_open();	   //新建一个LuaState

	/* load Lua base libraries */
	luaL_openlibs(L);   //打开标准库

	/* run the script */
	luaL_dofile(L, "Test.lua");

	/* cleanup Lua */
	lua_close(L);

	/* pause */
	printf("Press enter to exit...");
	getchar();

	return 0;
}


