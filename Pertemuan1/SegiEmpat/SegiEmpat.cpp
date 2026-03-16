// Menggambar Segiempat Penuh

#include <gl/glut.h> 

void SegiEmpat(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0f, 0.0f, 0.0f);
    glRectf(-0.18, 0.18, 0.18, -0.18);
    glFlush();
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("SegiEmpat");
    glutInitWindowPosition(100, 100);
    glutDisplayFunc(SegiEmpat);
    glutMainLoop();
    
    return 0;
}
