#include<GL/gl.h>
#include <GL/glut.h>
#include <math.h>


///river
void river()
{
    glColor3ub(82, 163, 161);
    glBegin(GL_QUADS);

    glVertex3i(0, 0, 0);
    glVertex3i(1200, 0, 0);
    glVertex3i(1200, 300, 0);
    glVertex3i(0, 300, 0);


    glEnd();



}
//land
void land()
{
    glColor3ub(82, 163, 161);
    glBegin(GL_POLYGON);

    glVertex3i(0, 300, 0);
    glVertex3i(1200, 300, 0);
    glVertex3i(1200, 600, 0);
    glVertex3i(0, 600, 0);


    glEnd();

}

void sky()
{
    glColor3ub(71, 36, 84);
    glBegin(GL_QUADS);

    glVertex3i(0, 600, 0);
    glVertex3i(1200, 600, 0);
    glVertex3i(1200, 1200, 0);
    glVertex3i(0, 1200, 0);


    glEnd();

}

void wave(){
    glColor3ub(71, 36, 84);
    glBegin(GL_TRIANGLES);

    glVertex3i(0, 600, 0);
    glVertex3i(200, 550, 0);
    glVertex3i(350, 600, 0);

    glColor3ub(71, 36, 84);
    glBegin(GL_TRIANGLES);

    glVertex3i(350, 600, 0);
    glVertex3i(550, 550, 0);
    glVertex3i(700, 600, 0);

    glColor3ub(71, 36, 84);
    glBegin(GL_TRIANGLES);

    glVertex3i(700, 600, 0);
    glVertex3i(900, 550, 0);
    glVertex3i(1050, 600, 0);

    glColor3ub(71, 36, 84);
    glBegin(GL_TRIANGLES);

    glVertex3i(1050, 600, 0);
    glVertex3i(1250, 550, 0);
    glVertex3i(1400, 600, 0);

    glEnd();


}






//hill
void hill()
{
    glColor3ub(87, 27, 7);
    glBegin(GL_TRIANGLES);

    glVertex3i(0, 600, 0);
    glVertex3i(150, 750, 0);
    glVertex3i(250, 600, 0);



    glColor3ub(87, 47, 34);
    glBegin(GL_TRIANGLES);

    glVertex3i(100, 600, 0);
    glVertex3i(250, 750, 0);
    glVertex3i(350, 600, 0);




   glColor3ub(87, 27, 7);
    glBegin(GL_TRIANGLES);

    glVertex3i(200, 600, 0);
    glVertex3i(350, 750, 0);
    glVertex3i(450, 600, 0);

    glColor3ub(87, 47, 34);
    glBegin(GL_TRIANGLES);


    glVertex3i(300, 600, 0);
    glVertex3i(450, 750, 0);
    glVertex3i(550, 600, 0);





    glColor3ub(87, 27, 7);
    glBegin(GL_TRIANGLES);

    glVertex3i(400, 600, 0);
    glVertex3i(550, 750, 0);
    glVertex3i(650, 600, 0);





    glEnd();

}




int rad,x,y,a,b,h;
bool SE,E;

void circle(float cx, float cy, float r, int num_segments)
{

    glBegin(GL_TRIANGLE_FAN);
    for (int i = 0; i < num_segments; i++)
    {
        float theta = 2.0f * 3.1415926f * float(i) / float(num_segments);//get current angle

        float x = r * cosf(theta);//calculate x
        float y = r * sinf(theta);//calculate y
        glVertex2f(x + cx, y + cy);//output vertex
    }
    glEnd();
    glFlush();
}
void cloud(int x, int y,int rad){
    glColor3ub(206, 207, 200);
    circle(x,y,rad,500);
    circle(x-50,y-15,rad-10,100);
    circle(x+50,y-15,rad-10,2000);
}

void clouds(void){
    cloud(480,1100,50);
    cloud(780,980,50);
    //cloud(1100,1150,50);
    //cloud(1020,980,40);
}

void moon()
{
    glColor3ub(255, 255, 255);
    circle(1100,1050,65,500);
}
void star(){
    glColor3ub(177, 187, 189);
    circle(200,1000,5,500);
}

void star1(){
    glColor3ub(177, 187, 189);
    circle(100,1100,5,500);
}

void star2(){
    glColor3ub(177, 187, 189);
    circle(220,1160,5,500);
}

void star3(){
    glColor3ub(177, 187, 189);
    circle(250,1120,5,500);
}

void star4(){
    glColor3ub(177, 187, 189);
    circle(50,1000,5,500);
}



void boat()
{
    ///boat1
    glColor3f(0,0,0);
    glBegin(GL_QUADS);


    glVertex3i(150,290,0);
    glVertex3i(150+190,290,0);
    glVertex3i(120+190,240,0);
    glVertex3i(170,240,0);
    glEnd();
    glColor3ub(110, 10, 18);
    glBegin(GL_QUADS);


    glVertex3i(190,290,0);
    glVertex3i(290,290,0);
    glVertex3i(290,360,0);
    glVertex3i(190,360,0);
    glEnd();
}



void boat1()
{
    ///boat1
    glColor3f(0,0,0);
    glBegin(GL_QUADS);


    glVertex3i(400+150,290+150,0);
    glVertex3i(400+150+190,290+150,0);
    glVertex3i(400+120+190,240+150,0);
    glVertex3i(400+170,240+150,0);
    glEnd();
    glColor3ub(110, 10, 18);
    glBegin(GL_QUADS);


    glVertex3i(400+190,290+150,0);
    glVertex3i(400+290,290+150,0);
    glVertex3i(400+290,360+150,0);
    glVertex3i(400+190,360+150,0);
    glEnd();
}



void tree()
{

glColor3ub(161, 94, 6);

    glBegin(GL_QUADS);


    glVertex3i(50+1000, 350+100+150, 0);
    glVertex3i(70+1000, 350+100+150, 0);


    glVertex3i(70+1000, 500+100+150, 0);
    glVertex3i(50+1000, 500+100+150, 0);


    glEnd();

    glColor3ub(26, 191, 17);

    glBegin(GL_TRIANGLES);


    glVertex3i(10+1000, 500+100+150, 0);
    glVertex3i(110+1000, 500+100+150, 0);


    glVertex3i(60+1000, 600+100+150, 0);



    glEnd();
    glBegin(GL_TRIANGLES);


    glVertex3i(15+1000, 550+100+150, 0);
    glVertex3i(105+1000, 550+100+150, 0);


    glVertex3i(60+1000, 650+100+150, 0);



    glEnd();
}




void display(void)
{

    glClear(GL_COLOR_BUFFER_BIT);


    sky();
    clouds();

    land();
    hill();
    star();
    star1();
    star2();
    star3();
    star4();
    river();
    moon();
    boat();
    boat1();
    tree();
    wave();



    glFlush();
}

void init(void)
{

    glClearColor(255,255, 255, 0);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, 1200, 0, 1200, -10.0, 10.0);


}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1000, 800);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Liza + Nabanita + Farin");


    glutDisplayFunc(display);


    init();

    glutMainLoop();
    return 0;
}
