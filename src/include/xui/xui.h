#ifndef __XUI_H__
#define __XUI_H__

#ifdef __cplusplus
extern "C" {
#endif

#include <xboot/window.h>
#include <input/keyboard.h>
#include <graphic/point.h>
#include <graphic/region.h>
#include <graphic/color.h>
#include <graphic/font.h>
#include <graphic/text.h>
#include <graphic/icon.h>

#define XUI_COMMAND_LIST_SIZE		(256 * 1024)
#define XUI_ROOT_LIST_SIZE			(32)
#define XUI_CONTAINER_STACK_SIZE	(32)
#define XUI_CLIP_STACK_SIZE			(32)
#define XUI_ID_STACK_SIZE			(32)
#define XUI_LAYOUT_STACK_SIZE		(16)
#define XUI_CONTAINER_POOL_SIZE		(48)
#define XUI_TREENODE_POOL_SIZE		(48)
#define XUI_MAX_WIDTHS				(16)

#define xui_push(stk, val)	do { assert((stk).idx < (int)(sizeof((stk).items) / sizeof(*(stk).items))); (stk).items[(stk).idx] = (val); (stk).idx++; } while(0)
#define xui_pop(stk)		do { assert((stk).idx > 0); (stk).idx--; } while(0)

enum {
	XUI_OPT_NOINTERACT		= (0x1 << 0),
	XUI_OPT_NOSCROLL		= (0x1 << 1),
	XUI_OPT_HOLDFOCUS		= (0x1 << 2),
	XUI_OPT_CLOSED			= (0x1 << 3),
	XUI_OPT_EXPANDED		= (0x1 << 4),
	XUI_OPT_TEXT_LEFT		= (0x0 << 5),
	XUI_OPT_TEXT_RIGHT		= (0x1 << 5),
	XUI_OPT_TEXT_TOP		= (0x2 << 5),
	XUI_OPT_TEXT_BOTTOM		= (0x3 << 5),
	XUI_OPT_TEXT_CENTER		= (0x4 << 5),
};

enum {
	XUI_COLOR_BORDER,
	XUI_COLOR_BASE,
	XUI_COLOR_BASEHOVER,
	XUI_COLOR_BASEFOCUS,
	XUI_COLOR_MAX,
};

enum {
	XUI_RES_ACTIVE			= (0x1 << 0),
	XUI_RES_SUBMIT			= (0x1 << 1),
	XUI_RES_CHANGE			= (0x1 << 2),
};

enum {
	XUI_KEY_POWER			= (0x1 << 0),
	XUI_KEY_UP				= (0x1 << 1),
	XUI_KEY_DOWN			= (0x1 << 2),
	XUI_KEY_LEFT			= (0x1 << 3),
	XUI_KEY_RIGHT			= (0x1 << 4),
	XUI_KEY_VOLUME_UP		= (0x1 << 5),
	XUI_KEY_VOLUME_DOWN		= (0x1 << 6),
	XUI_KEY_VOLUME_MUTE		= (0x1 << 7),
	XUI_KEY_TAB				= (0x1 << 8),
	XUI_KEY_TASK			= (0x1 << 9),
	XUI_KEY_HOME			= (0x1 << 10),
	XUI_KEY_BACK			= (0x1 << 11),
	XUI_KEY_ENTER			= (0x1 << 12),
	XUI_KEY_CTRL			= (0x1 << 13),
	XUI_KEY_ALT				= (0x1 << 14),
	XUI_KEY_SHIFT			= (0x1 << 15),
};

enum {
	XUI_MOUSE_LEFT			= (0x1 << 0),
	XUI_MOUSE_RIGHT			= (0x1 << 1),
	XUI_MOUSE_MIDDLE		= (0x1 << 2),
	XUI_MOUSE_X1			= (0x1 << 3),
	XUI_MOUSE_X2			= (0x1 << 4),
};

enum xui_cmd_type_t {
	XUI_CMD_TYPE_BASE		= 0x0,
	XUI_CMD_TYPE_JUMP		= 0x1,
	XUI_CMD_TYPE_CLIP		= 0x2,
	XUI_CMD_TYPE_LINE		= 0x3,
	XUI_CMD_TYPE_POLYLINE	= 0x4,
	XUI_CMD_TYPE_CURVE		= 0x5,
	XUI_CMD_TYPE_TRIANGLE	= 0x6,
	XUI_CMD_TYPE_RECTANGLE	= 0x7,
	XUI_CMD_TYPE_POLYGON	= 0x8,
	XUI_CMD_TYPE_CIRCLE		= 0x9,
	XUI_CMD_TYPE_ELLIPSE	= 0xa,
	XUI_CMD_TYPE_ARC		= 0xb,
	XUI_CMD_TYPE_TEXT		= 0xc,
	XUI_CMD_TYPE_ICON		= 0xd,
};

struct xui_cmd_base_t {
	enum xui_cmd_type_t type;
	int len;
};

struct xui_cmd_jump_t {
	enum xui_cmd_type_t type;
	int len;

	void * addr;
};

struct xui_cmd_clip_t {
	enum xui_cmd_type_t type;
	int len;

	struct region_t r;
};

struct xui_cmd_line_t {
	enum xui_cmd_type_t type;
	int len;

	struct point_t p0;
	struct point_t p1;
	int thickness;
	struct color_t c;
};

struct xui_cmd_polyline_t {
	enum xui_cmd_type_t type;
	int len;

	int n;
	int thickness;
	struct color_t c;
	struct point_t p[1];
};

struct xui_cmd_curve_t {
	enum xui_cmd_type_t type;
	int len;

	int n;
	int thickness;
	struct color_t c;
	struct point_t p[1];
};

struct xui_cmd_triangle_t {
	enum xui_cmd_type_t type;
	int len;

	struct point_t p0;
	struct point_t p1;
	struct point_t p2;
	int thickness;
	struct color_t c;
};

struct xui_cmd_rectangle_t {
	enum xui_cmd_type_t type;
	int len;

	int x, y, w, h;
	int radius;
	int thickness;
	struct color_t c;
};

struct xui_cmd_polygon_t {
	enum xui_cmd_type_t type;
	int len;

	int n;
	int thickness;
	struct color_t c;
	struct point_t p[1];
};

struct xui_cmd_circle_t {
	enum xui_cmd_type_t type;
	int len;

	int x, y;
	int radius;
	int thickness;
	struct color_t c;
};

struct xui_cmd_ellipse_t {
	enum xui_cmd_type_t type;
	int len;

	int x, y, w, h;
	int thickness;
	struct color_t c;
};

struct xui_cmd_arc_t {
	enum xui_cmd_type_t type;
	int len;

	int x, y;
	int radius;
	int a1, a2;
	int thickness;
	struct color_t c;
};

struct xui_cmd_text_t {
	enum xui_cmd_type_t type;
	int len;

	const char * family;
	int size;
	int x, y;
	int wrap;
	struct color_t c;
	char utf8[1];
};

struct xui_cmd_icon_t {
	enum xui_cmd_type_t type;
	int len;

	const char * family;
	uint32_t code;
	int x, y, w, h;
	struct color_t c;
};

union xui_cmd_t {
	struct xui_cmd_base_t base;
	struct xui_cmd_jump_t jump;
	struct xui_cmd_clip_t clip;
	struct xui_cmd_line_t line;
	struct xui_cmd_polyline_t polyline;
	struct xui_cmd_curve_t curve;
	struct xui_cmd_triangle_t triangle;
	struct xui_cmd_rectangle_t rectangle;
	struct xui_cmd_polygon_t polygon;
	struct xui_cmd_circle_t circle;
	struct xui_cmd_ellipse_t ellipse;
	struct xui_cmd_arc_t arc;
	struct xui_cmd_text_t text;
	struct xui_cmd_icon_t icon;
};

struct xui_pool_item_t {
	unsigned int id;
	int last_update;
};

struct xui_layout_t {
	struct region_t body;
	struct region_t next;
	int position_x, position_y;
	int size_width, size_height;
	int max_width, max_height;
	int widths[XUI_MAX_WIDTHS];
	int items;
	int item_index;
	int next_row;
	int next_type;
	int indent;
};

struct xui_container_t {
	union xui_cmd_t * head, * tail;
	struct region_t region;
	struct region_t body;
	int content_width;
	int content_height;
	int scroll_x;
	int scroll_y;
	int zindex;
	int open;
};

struct xui_widget_color_t {
	struct {
		struct color_t face;
		struct color_t border;
		struct color_t text;
	} normal;
	struct {
		struct color_t face;
		struct color_t border;
		struct color_t text;
	} hover;
	struct {
		struct color_t face;
		struct color_t border;
		struct color_t text;
	} focus;
};

struct xui_style_t {
	struct color_t colors[XUI_COLOR_MAX];//TODO REMOVE ME!

	struct color_t background;
	struct xui_widget_color_t primary;
	struct xui_widget_color_t secondary;
	struct xui_widget_color_t success;
	struct xui_widget_color_t info;
	struct xui_widget_color_t warning;
	struct xui_widget_color_t danger;
	struct xui_widget_color_t light;
	struct xui_widget_color_t dark;

	struct {
		const char * icon_family;
		const char * font_family;
		struct color_t color;
		int size;
	} font;

	struct {
		int width;
		int height;
		int padding;
		int spacing;
		int indent;
	} layout;

	struct {
		uint32_t close_icon;
		int border_radius;
		int border_width;
		int title_height;
		struct color_t face_color;
		struct color_t border_color;
		struct color_t title_color;
		struct color_t text_color;
	} window;

	struct {
		int scroll_size;
		int scroll_radius;
		int thumb_size;
		int thumb_radius;
		struct color_t scroll_color;
		struct color_t thumb_color;
	} scroll;

	struct {
		uint32_t collapsed_icon;
		uint32_t expanded_icon;
		int border_radius;
		int border_width;
		struct {
			struct color_t face_color;
			struct color_t border_color;
			struct color_t text_color;
		} normal;
		struct {
			struct color_t face_color;
			struct color_t border_color;
			struct color_t text_color;
		} hover;
		struct {
			struct color_t face_color;
			struct color_t border_color;
			struct color_t text_color;
		} focus;
	} treenode;

	struct {
		int border_radius;
		int border_width;
		int outline_width;
	} button;

	struct {
		uint32_t check_icon;
		int border_radius;
		int border_width;
		int outline_width;
	} checkbox;

	struct {
		int border_width;
		int outline_width;
	} radio;

	struct {
		int border_width;
		int outline_width;
	} toggle;

	struct {
		int border_radius;
	} progress;

	struct {
		int line_width;
		struct color_t face_color;
	} split;
};

struct xui_context_t {
	/*
	 * Context
	 */
	struct window_t * w;
	struct font_context_t * f;
	struct region_t screen;

	/*
	 * Core state
	 */
	struct xui_style_t style;
	struct region_t clip;
	unsigned int hover;
	unsigned int focus;
	unsigned int last_id;
	struct region_t last_rect;
	int last_zindex;
	int updated_focus;
	int frame;
	unsigned int resize_id;
	int resize_cursor_x;
	int resize_cursor_y;
	unsigned int cmd_hash_old;
	unsigned int cmd_hash_new;
	struct xui_container_t * hover_root;
	struct xui_container_t * next_hover_root;
	struct xui_container_t * scroll_target;
	char number_edit_buf[127];
	unsigned int number_edit;

	/*
	 * Stack
	 */
	struct {
		int idx;
		char items[XUI_COMMAND_LIST_SIZE];
	} cmd_list;

	struct {
		int idx;
		struct xui_container_t * items[XUI_ROOT_LIST_SIZE];
	} root_list;

	struct {
		int idx;
		struct xui_container_t * items[XUI_CONTAINER_STACK_SIZE];
	} container_stack;

	struct {
		int idx;
		struct region_t items[XUI_CLIP_STACK_SIZE];
	} clip_stack;

	struct {
		int idx;
		unsigned int items[XUI_ID_STACK_SIZE];
	} id_stack;

	struct {
		int idx;
		struct xui_layout_t items[XUI_LAYOUT_STACK_SIZE];
	} layout_stack;

	/*
	 * Retained state pool
	 */
	struct xui_container_t containers[XUI_CONTAINER_POOL_SIZE];
	struct xui_pool_item_t container_pool[XUI_CONTAINER_POOL_SIZE];
	struct xui_pool_item_t treenode_pool[XUI_TREENODE_POOL_SIZE];

	/*
	 * Input state
	 */
	int mouse_pos_x, mouse_pos_y;
	int last_mouse_pos_x, last_mouse_pos_y;
	int mouse_delta_x, mouse_delta_y;
	int scroll_delta_x, scroll_delta_y;
	int mouse_down;
	int mouse_pressed;
	int key_down;
	int key_pressed;
	char input_text[32];

	/*
	 * Misc
	 */
	char tempbuf[4096];

	/*
	 * Callback
	 */
	void (*draw_frame)(struct xui_context_t * ctx, struct region_t * r, int cid);
};

void xui_begin(struct xui_context_t * ctx);
void xui_end(struct xui_context_t * ctx);
const char * xui_format(struct xui_context_t * ctx, const char * fmt, ...);
void xui_set_front(struct xui_context_t * ctx, struct xui_container_t * c);
void xui_set_focus(struct xui_context_t * ctx, unsigned int id);
unsigned int xui_get_id(struct xui_context_t * ctx, const void * data, int size);
void xui_push_id(struct xui_context_t * ctx, const void * data, int size);
void xui_pop_id(struct xui_context_t * ctx);
struct region_t * xui_get_clip(struct xui_context_t * ctx);
void xui_push_clip(struct xui_context_t * ctx, struct region_t * r);
void xui_pop_clip(struct xui_context_t * ctx);
struct xui_layout_t * xui_get_layout(struct xui_context_t * ctx);
struct xui_container_t * xui_get_container(struct xui_context_t * ctx, const char * name);
struct xui_container_t * xui_get_current_container(struct xui_context_t * ctx);

void pop_container(struct xui_context_t * ctx);
struct xui_container_t * get_container(struct xui_context_t * ctx, unsigned int id, int opt);
void push_container_body(struct xui_context_t * ctx, struct xui_container_t * c, struct region_t * body, int opt);
void begin_root_container(struct xui_context_t * ctx, struct xui_container_t * c);
void end_root_container(struct xui_context_t * ctx);

void xui_layout_width(struct xui_context_t * ctx, int width);
void xui_layout_height(struct xui_context_t * ctx, int height);
void xui_layout_row(struct xui_context_t * ctx, int items, const int * widths, int height);
void xui_layout_begin_column(struct xui_context_t * ctx);
void xui_layout_end_column(struct xui_context_t * ctx);
void xui_layout_set_next(struct xui_context_t * ctx, struct region_t * r, int relative);
struct region_t * xui_layout_next(struct xui_context_t * ctx);

void xui_draw_line(struct xui_context_t * ctx, struct point_t * p0, struct point_t * p1, int thickness, struct color_t * c);
void xui_draw_polyline(struct xui_context_t * ctx, struct point_t * p, int n, int thickness, struct color_t * c);
void xui_draw_curve(struct xui_context_t * ctx, struct point_t * p, int n, int thickness, struct color_t * c);
void xui_draw_triangle(struct xui_context_t * ctx, struct point_t * p0, struct point_t * p1, struct point_t * p2, int thickness, struct color_t * c);
void xui_draw_rectangle(struct xui_context_t * ctx, int x, int y, int w, int h, int radius, int thickness, struct color_t * c);
void xui_draw_polygon(struct xui_context_t * ctx, struct point_t * p, int n, int thickness, struct color_t * c);
void xui_draw_circle(struct xui_context_t * ctx, int x, int y, int radius, int thickness, struct color_t * c);
void xui_draw_ellipse(struct xui_context_t * ctx, int x, int y, int w, int h, int thickness, struct color_t * c);
void xui_draw_arc(struct xui_context_t * ctx, int x, int y, int radius, int a1, int a2, int thickness, struct color_t * c);
void xui_draw_text(struct xui_context_t * ctx, const char * family, int size, const char * utf8, int x, int y, int wrap, struct color_t * c);
void xui_draw_icon(struct xui_context_t * ctx, const char * family, uint32_t code, int x, int y, int w, int h, struct color_t * c);

void xui_control_update(struct xui_context_t * ctx, unsigned int id, struct region_t * r, int opt);
void xui_control_draw_text(struct xui_context_t * ctx, const char * utf8, struct region_t * r, struct color_t * c, int opt);
void xui_control_draw_frame(struct xui_context_t * ctx, unsigned int id, struct region_t * r, int cid, int opt);

int xui_begin_treenode_ex(struct xui_context_t * ctx, const char * label, int opt);
int xui_begin_treenode(struct xui_context_t * ctx, const char * label);
void xui_end_treenode(struct xui_context_t * ctx);
int xui_header_ex(struct xui_context_t * ctx, const char * label, int opt);
int xui_header(struct xui_context_t * ctx, const char * label);

int xui_slider_ex(struct xui_context_t * ctx, float * value, float low, float high, float step, const char * fmt, int opt);
int xui_slider(struct xui_context_t * ctx, float * value, float low, float high);

int xui_textbox_ex(struct xui_context_t * ctx, char * buf, int bufsz, int opt);
int xui_textbox(struct xui_context_t * ctx, char * buf, int bufsz);

int xui_number_ex(struct xui_context_t * ctx, float * value, float step, const char * fmt, int opt);
int xui_number(struct xui_context_t * ctx, float * value, float step);

struct xui_context_t * xui_context_alloc(const char * fb, const char * input, struct xui_style_t * style);
void xui_context_free(struct xui_context_t * ctx);
void xui_loop(struct xui_context_t * ctx, void (*func)(struct xui_context_t *));

#ifdef __cplusplus
}
#endif

#endif /* __XUI_H__ */
