#include "robo.h"
#include <math.h>

void Robo::DesenhaRect(GLint height, GLint width, GLfloat R, GLfloat G, GLfloat B)
{  
    glColor3f (R, G, B);
    glRectf(-height, -width, height, width);
}

void Robo::DesenhaCirc(GLint radius, GLfloat R, GLfloat G, GLfloat B)
{

}

void Robo::DesenhaRoda(GLfloat x, GLfloat y, GLfloat thetaWheel, GLfloat R, GLfloat G, GLfloat B)
{

}

void Robo::DesenhaBraco(GLfloat x, GLfloat y, GLfloat theta1, GLfloat theta2, GLfloat theta3)
{
    glPushMatrix();
    glTranslatef(0, y/2 + baseHeight/2, 0);
    glRotatef(theta1, 0.0, 0.0, 1.0);
    DesenhaRect(paddleWidth, paddleHeight, 0, 0, 1.0f);


    // glPushMatrix();
    // glTranslatef(0, paddleHeight, 0);
    // glRotatef(theta2, 0, 0, 1);
    // DesenhaRect(paddleHeight, paddleWidth, 0, 1.0f, 1.0f);

    // glPushMatrix();
    // glTranslatef(0, 0, paddleHeight);
    // glRotatef(theta3, 0, 0, 1);
    // DesenhaRect(paddleHeight, paddleWidth, 0, 1.0f, 1.0f);

    glPopMatrix();
    // glPopMatrix();
    // glPopMatrix();
}

void Robo::DesenhaRobo(GLfloat x, GLfloat y, GLfloat thetaWheel, GLfloat theta1, GLfloat theta2, GLfloat theta3)
{
    glPushMatrix();
    glTranslatef(x, y, 0);
    DesenhaRect(baseWidth, baseHeight, 1.0f, 0, 0);
    DesenhaBraco(x, y, theta1, theta2, theta3);
    glPopMatrix();
}

void Robo::RodaBraco1(GLfloat inc)
{

}

void Robo::RodaBraco2(GLfloat inc)
{

}

void Robo::RodaBraco3(GLfloat inc)
{

}

void Robo::MoveEmX(GLfloat dx)
{
    //glTranslatef(0, dx*8, 0);
    glTranslatef(dx*100, 0, 0);
    //glTranslatef(0, 0, dx*8);
}

//Funcao auxiliar de rotacao
void RotatePoint(GLfloat x, GLfloat y, GLfloat angle, GLfloat &xOut, GLfloat &yOut){

}

Tiro* Robo::Atira()
{

}
