typedef enum {
	RED = 41,
	GREEN,
	YELLOW,
	BLUE,
	PURPLE,
	CYAN,
	WHITE,
	BLACK = 0
}Color;

typedef enum {
	I,
	J,
	L,
	O,
	S,
	T,
	Z
}Shapeid;

typedef struct {
	Color color;
	Shapeid shape;
}Block;