#include <math.h>
#include <stdio.h>
#include <GL/glut.h>

#define res        1               // 0=160x120 1=360x240 4=640x480
#define SW         160*res         // screen width
#define SH         120*res         // screen height
#define SW2        (SW/2)          // half of screen width
#define SH2        (SH/2)          // half of screen height
#define pixelScale 4/res           // OpenGL pixel scale
#define GLSW       (SW*pixelScale) // opengl window width
#define GLSH       (SH*pixelScale) // opengl window height
// -----------------------------------------------------

typedef struct {
    int fr1, fr2; // frame 1 and 2 to create constant framerate
} time; time T;

typedef struct {
    int w,a,s,d; // move up down left right
    int sl, sr;  // strafe left right
    int m;       // move up, down, look up, down
} keys; keys K;
// -----------------------------------

void pixel(int x, int y, int c) { // draw a pixel at x/y with rgb
    int rgb[3];
    if (c==0) { rgb[0]=255; rgb[1]=255; rgb[2]=  0; } // yellow
    if (c==1) { rgb[0]=160; rgb[1]=160; rgb[2]=  0; } // yellow darker
    if (c==2) { rgb[0]=  0; rgb[1]=255; rgb[2]=  0; } // green
    if (c==3) { rgb[0]=  0; rgb[1]=160; rgb[2]=  0; } // green darker
    if (c==4) { rgb[0]=  0; rgb[1]=255; rgb[2]=255; } // cyan
    if (c==5) { rgb[0]=  0; rgb[1]=160; rgb[2]=160; } // cyan darker
    if (c==6) { rgb[0]=160; rgb[1]=100; rgb[2]=  0; } // brown
    if (c==7) { rgb[0]=110; rgb[1]= 50; rgb[2]=  0; } // brown darker
    if (c==8) { rgb[0]=  0; rgb[1]= 60; rgb[2]=130; } // background
    glColor3ub(rgb[0], rgb[1], rgb[2]);
    glBegin(GL_POINTS);
    glVertex2i(x*pixelScale+2, y*pixelScale+2);
    glEnd();
}

int main() {

}
