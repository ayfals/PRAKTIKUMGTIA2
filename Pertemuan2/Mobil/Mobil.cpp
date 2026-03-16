#include <gl/glut.h>
#include <gl/gl.h>
#include <math.h>

void RenderScene(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	
	glPushMatrix();
        glTranslatef(0.00, -0.40, 0.0);
        glBegin(GL_TRIANGLE_STRIP);
            glColor3f(0.3f, 0.3f, 0.3f);
            glVertex3f(-1.0, 0.0, 0.0);
       		glVertex3f(-1.0, 0.4, 0.0);
        	glVertex3f(1.0, 0.0, 0.0);
        	glVertex3f(1.0, 0.4, 0.0);
        glEnd();
    glPopMatrix();
    
    glPushMatrix();
    	glTranslatef(-0.90, -0.20, 0.0);
        glLineWidth(10.0f);
        glBegin(GL_LINES);
            glColor3f(1.0f, 1.0f, 1.0f);
            glVertex3f(0.0, 0.0, 0.0);
            glVertex3f(0.5, 0.0, 0.0);
        glEnd();
    glPopMatrix();
    
    glPushMatrix();
    	glTranslatef(-0.1, -0.20, 0.0);
        glLineWidth(10.0f);
        glBegin(GL_LINES);
            glColor3f(1.0f, 1.0f, 1.0f);
            glVertex3f(0.0, 0.0, 0.0);
            glVertex3f(0.5, 0.0, 0.0);
        glEnd();
    glPopMatrix();
    
    glPushMatrix();
    	glTranslatef(0.7, -0.20, 0.0);
        glLineWidth(10.0f);
        glBegin(GL_LINES);
            glColor3f(1.0f, 1.0f, 1.0f);
            glVertex3f(0.0, 0.0, 0.0);
            glVertex3f(0.5, 0.0, 0.0);
        glEnd();
    glPopMatrix();
	
	glPushMatrix();
        glTranslatef(-0.40, -0.10, 0.0);
        glBegin(GL_TRIANGLE_STRIP);
            glColor3f(0.8f, 0.1f, 0.1f);
            glVertex3f(0.0, 0.0, 0.0);
       		glVertex3f(0.0, 0.6, 0.0);
        	glVertex3f(1.0, 0.0, 0.0);
        	glVertex3f(1.0, 0.6, 0.0);
        glEnd();
    glPopMatrix();
    
    glPushMatrix();
        glTranslatef(-0.60, -0.10, 0.0);
        glBegin(GL_TRIANGLE_STRIP);
            glColor3f(0.8f, 0.1f, 0.1f);
            glVertex3f(0.0, 0.0, 0.0);
            glVertex3f(0.0, 0.3, 0.0);
            glVertex3f(1.4, 0.0, 0.0);
            glVertex3f(1.4, 0.3, 0.0);
        glEnd();
    glPopMatrix();
    
    glPushMatrix();
        glTranslatef(-0.35, 0.20, 0.0);
        glBegin(GL_TRIANGLE_STRIP);
            glColor3f(0.7f, 0.9f, 1.0f);
            glVertex3f(0.0, 0.0, 0.0);
        	glVertex3f(0.0, 0.25, 0.0);
        	glVertex3f(0.40, 0.0, 0.0);
        	glVertex3f(0.40, 0.25, 0.0);
        glEnd();
    glPopMatrix();
    
    glPushMatrix();
        glTranslatef(0.15, 0.20, 0.0);
        glBegin(GL_TRIANGLE_STRIP);
            glColor3f(0.7f, 0.9f, 1.0f);
            glVertex3f(0.0, 0.0, 0.0);
        	glVertex3f(0.0, 0.25, 0.0);
        	glVertex3f(0.40, 0.0, 0.0);
        	glVertex3f(0.40, 0.25, 0.0);
        glEnd();
    glPopMatrix();
    
    glPushMatrix();
        glTranslatef(-0.60, 0.06, 0.0);
        glBegin(GL_TRIANGLES);
            glColor3f(1.0f, 0.9f, 0.0f);
            glVertex3f(0.0, 0.0, 0.0);
        	glVertex3f(0.08, 0.06, 0.0);
        	glVertex3f(0.0, 0.06, 0.0);
        glEnd();
    glPopMatrix();
    
    glPushMatrix();
    	glTranslatef(-0.25, -0.10, 0.0);
        #define PI 3.1415926535898
        glBegin(GL_TRIANGLE_FAN);
        	glColor3f(0.0f, 0.0f, 0.0f);
        	glVertex2f(0.0f, 0.0f);
            GLint circle_points = 100; 
            int i; 
            float angle;
            float r = 0.15;
            for (i = 0; i <= circle_points; i++) {
                angle = 2 * PI / circle_points * i;
                glVertex2f(r * cos(angle), r * sin(angle));
            }
        glEnd();
    glPopMatrix();
    
    glPushMatrix();
    	glTranslatef(-0.25, -0.10, 0.0);
        #define PI 3.1415926535898
        glBegin(GL_TRIANGLE_FAN);
        	glColor3f(0.5f, 0.5f, 0.5f);
        	glVertex2f(0.0f, 0.0f);
        	float s = 0.09;
            for (i = 0; i <= circle_points; i++) {
                angle = 2 * PI / circle_points * i;
                glVertex2f(s * cos(angle), s * sin(angle));
            }
        glEnd();
    glPopMatrix();
    
    glPushMatrix();
    	glTranslatef(0.45, -0.10, 0.0);
        #define PI 3.1415926535898
        glBegin(GL_TRIANGLE_FAN);
        	glColor3f(0.0f, 0.0f, 0.0f);
        	glVertex2f(0.0f, 0.0f);
            for (i = 0; i <= circle_points; i++) {
                angle = 2 * PI / circle_points * i;
                glVertex2f(r * cos(angle), r * sin(angle));
            }
        glEnd();
    glPopMatrix();
    
    glPushMatrix();
    	glTranslatef(0.45, -0.10, 0.0);
        #define PI 3.1415926535898
        glBegin(GL_TRIANGLE_FAN);
        	glColor3f(0.5f, 0.5f, 0.5f);
        	glVertex2f(0.0f, 0.0f);
            for (i = 0; i <= circle_points; i++) {
                angle = 2 * PI / circle_points * i;
                glVertex2f(s * cos(angle), s * sin(angle));
            }
        glEnd();
    glPopMatrix();
    
    glFlush();
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(600,600);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Mobil");
    glutDisplayFunc(RenderScene);
    glClearColor(0.2f, 0.8f, 0.2f, 1.0f);
    glutMainLoop();
    return 0;
}


