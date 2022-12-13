#include<glut.h>
#include <math.h>
GLUquadricObj* gl = gluNewQuadric();


void display() {

    glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix();
    glBegin(GL_QUADS);//shoes
    glColor3ub(153, 0, 0);
    glVertex2f(110, 5);
    glVertex2f(150, 5);
    glVertex2f(150, 25);
    glVertex2f(110, 25);
    glEnd();
    glBegin(GL_QUADS);//leg
    glColor3ub(0, 0, 0);
    glVertex2f(110, 25);
    glVertex2f(130, 25);
    glVertex2f(150, 200);
    glVertex2f(110, 200);
    glEnd();
    glBegin(GL_POLYGON);//body
    glColor3ub(102, 51, 0);
    glVertex2f(110, 200);
    glVertex2f(150, 200);
    glVertex2f(160, 275);
    glVertex2f(155, 300);
    glVertex2f(145, 300);
    glVertex2f(120, 300);
    glVertex2f(110, 275);
    glEnd();
    glLineWidth(20);
    glBegin(GL_LINES);//dera3
    glColor3ub(102, 51, 0);
    glVertex2f(140, 285);
    glVertex2f(210, 285);
    glEnd();


    glBegin(GL_QUADS);//knee
    glColor3ub(255, 178, 102);
    glVertex2f(130, 300);
    glVertex2f(145, 300);
    glVertex2f(145, 320);
    glVertex2f(130, 320);
    glEnd();




    glBegin(GL_POLYGON);//face
    glColor3ub(255, 178, 102);
    glVertex2f(120, 320);//wesh ta7t left
    glVertex2f(155, 320);//wesh ta7t right
    glVertex2f(155, 340);//start nose
    glVertex2f(159, 340);//nose right
    glVertex2f(155, 355);//end nose
    glVertex2f(155, 400);//tol el wesh
    glVertex2f(120, 400);//end head
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);//7ageb
    glColor3ub(0, 0, 0);
    glVertex2f(145, 373);
    glVertex2f(154, 373);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);//BO2
    glColor3ub(153, 0, 0);
    glVertex2f(150, 330);
    glVertex2f(155, 330);
    glEnd();

    glPushMatrix(); // right 3en
    glColor3ub(0, 0, 0);
    glTranslated(150, 365, 0);
    gluDisk(gl, 0, 2, 50, 50);
    glPopMatrix();
    glBegin(GL_QUADS);//hat
    glColor3ub(0, 0, 0);
    glVertex2f(120, 380);
    glVertex2f(155, 380);
    glVertex2f(155, 410);
    glVertex2f(120, 410);
    glEnd();





    /* glBegin(GL_POLYGON);//head
     glColor3ub(102, 51, 0);
     glVertex2f(110, 200);
     glVertex2f(150, 200);
     glVertex2f(160, 275);
     glVertex2f(155, 300);

     glVertex2f(145, 300);
     glVertex2f(145, 310);
     glVertex2f(125, 310);
     glVertex2f(125, 300);
     glVertex2f(110, 300);
     glVertex2f(110, 275);

     glEnd();
     */
     /* glBegin(GL_TRIANGLES);//right

      glColor3ub(250, 250, 250);
      glVertex2f(510, 560);

      glVertex2f(575, 675);

      glVertex2f(540, 765);
      glEnd();
      glBegin(GL_TRIANGLES);//left

      glColor3ub(250, 250, 250);
      glVertex2f(390, 550);

      glVertex2f(350, 765);

      glVertex2f(320, 675);
      glEnd();
      glBegin(GL_QUADS);//MOraba3 ta7t
      glColor3ub(250, 250, 250);
      glVertex2f(415, 470);
      glVertex2f(485, 470);
      glVertex2f(485, 510);
      glVertex2f(415, 510);
      glEnd();
      glPushMatrix();
      glColor3ub(255, 255, 255);
      glTranslated(330, 420, 0);
      gluDisk(gl, 0, 105, 50, 50);
      glPopMatrix();
      glPushMatrix();
      glColor3ub(255, 255, 255);
      glTranslated(580, 420, 0);
      gluDisk(gl, 0, 105, 50, 50);
      glPopMatrix();
      glBegin(GL_QUADS);//I
      glColor3f(0, 0, 0);
      glVertex2f(435, 300);
      glVertex2f(465, 300);
      glVertex2f(465, 470);
      glVertex2f(435, 470);
      glEnd();

      glPopMatrix();
      glPushMatrix();
      glColor3b(0, 0, 0);
      glTranslated(330, 380, 0);
      gluDisk(gl, 0, 95, 50, 50);
      glPopMatrix();
      glPushMatrix();
      glColor3ub(255, 255, 255);
      glTranslated(350, 380, 0);
      gluDisk(gl, 0, 80, 50, 50);
      glPopMatrix();
      glPushMatrix();
      glColor3b(0, 0, 0);
      glTranslated(580, 380, 0);
      gluDisk(gl, 0, 95, 50, 50);
      glPopMatrix();
      glPushMatrix();
      glColor3ub(255, 255, 255);
      glTranslated(600, 380, 0);
      gluDisk(gl, 0, 80, 50, 50);
      */
    glPopMatrix();
    glFlush();

}

void main() {

    glutInitWindowSize(1000, 1000);

    glutInitWindowPosition(100, 100);

    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    glutCreateWindow("logo");

    glutDisplayFunc(display);

    glClearColor(250, 250, 250, 250);

    gluOrtho2D(0, 1000, 0, 1000);

    glutMainLoop();
}