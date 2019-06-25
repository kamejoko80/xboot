#ifndef __FRAMEWORK_CORE_L_PATTERN_H__
#define __FRAMEWORK_CORE_L_PATTERN_H__

#ifdef __cplusplus
extern "C" {
#endif

#include <framework/luahelper.h>

#define MT_PATTERN	"__mt_pattern__"

struct lpattern_t {
	void * pattern;
};

int luaopen_pattern(lua_State * L);

#ifdef __cplusplus
}
#endif

#endif /* __FRAMEWORK_CORE_L_PATTERN_H__ */
