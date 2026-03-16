// Menggambar Kubus Bertingkat - Mirip Contoh

#include <gl/glut.h>

void KubusBertingkat(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    
    glColor3f(1.0f, 0.0f, 0.0f);
    glRectf(-0.7f, -0.5f, -0.2f, 0.0f);
    
    glColor3f(0.0f, 1.0f, 0.0f);
    glRectf(-0.2f, -0.5f, 0.3f, 0.0f);
    
    glColor3f(0.0f, 0.0f, 1.0f);
    glRectf(0.3f, -0.5f, 0.8f, 0.0f);
    
    glColor3f(1.0f, 1.0f, 0.0f);
    glRectf(-0.45f, 0.5f, 0.05f, 0.0f);
    
    glColor3f(1.0f, 0.0f, 1.0f);
    glRectf(0.05f, 0.5f, 0.55f, 0.0f);
    
    glFlush();
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Kubus Bertingkat");
    glutInitWindowPosition(100, 100);
    glutDisplayFunc(KubusBertingkat);
    glutMainLoop();
    
    return 0;
}
