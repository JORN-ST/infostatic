#ifndef LIBINFOSTATIC_LIBRARY_H
#define LIBINFOSTATIC_LIBRARY_H

//
// Created by az on 02.11.2020.
//

enum {
	SAVE_BMP,
	SAVE_JPG,
	SAVE_PNG
};

typedef struct cmd {
	int WIDTH_W; // szczerokość ekranu
	int HEIGHT_H; // wysokość ekranu
	struct  DRAW_RECTANGLE {
		int X; // wsp x
		int Y; // wsp y górnego rogu
		int W; // szerokość
		int H; // wysokość
	};
	struct DRAW_TRIANGLE {
		int X1;
		int Y1;
		int X2;
		int Y2;
		int X3;
		int Y3;
	};
}cmdS;

extern cmdS commands;

#endif //LIBINFOSTATIC_LIBRARY_H
