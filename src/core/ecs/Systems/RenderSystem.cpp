#include "RenderSystem.h"

RenderSystem::RenderSystem()
{

}

void drawPoints()
{
    glBegin(GL_POINTS);

    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.1f, -0.6f);
    glVertex2f(0.7f, -0.6f);
    glVertex2f(0.4f, -0.1f);

    glEnd();
}
void update()
{
    glClear(GL_COLOR_BUFFER_BIT);
    drawPoints();
    glFlush();
}

void RenderSystem::process()
{
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(300, 300);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Window");
    glutDisplayFunc(update);
    glutMainLoop();
}
