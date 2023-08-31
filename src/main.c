#include <stdio.h>
#include <GLES2/gl2.h>
#include <EGL/egl.h>
#include <GLFW/glfw3.h>

int main(void)
{
  GLFWwindow* window;

  /* Initialize the library */
  if (!glfwInit())
    return -1;

  /* Create a windowed mode window and its OpenGL context */
  window = glfwCreateWindow(640, 480, "HelloWorldOpenGL", NULL, NULL);

  if (!window)
  {
    glfwTerminate();
    return -1;
  }

  /* Make the window's context current */
  glfwMakeContextCurrent(window);

  //gladLoadGL();

  glViewport(0,0,800,800);

  glClearColor(0.07f, 0.13f, 0.17f, 1.0f);
  glClear(GL_COLOR_BUFFER_BIT);
  glfwSwapBuffers(window);

  /* Loop until the user closes the window */
  while (!glfwWindowShouldClose(window))
  {
    /* Render here */
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(-0.5f, -0.5f); // Vértice inferior esquerdo
    glVertex2f(0.5f, -0.5f);  // Vértice inferior direito
    glVertex2f(0.5f, 0.5f);   // Vértice superior direito
    glVertex2f(-0.5f, 0.5f);  // Vértice superior esquerdo
    glEnd();

    glBegin(GL_TRIANGLES);          // Each set of 3 vertices form a triangle
    glColor3f(0.0f, 0.0f, 1.0f); // Blue
    glVertex2f(0.1f, -0.6f);
    glVertex2f(0.7f, -0.6f);
    glVertex2f(0.4f, -0.1f);

    glColor3f(1.0f, 0.0f, 0.0f); // Red
    glVertex2f(0.3f, -0.4f);
    glColor3f(0.0f, 1.0f, 0.0f); // Green
    glVertex2f(0.9f, -0.4f);
    glColor3f(0.0f, 0.0f, 1.0f); // Blue
    glVertex2f(0.6f, -0.9f);
    glEnd();

    /* Swap front and back buffers */
    glfwSwapBuffers(window);

    /* Poll for and process events */
    glfwPollEvents();
  }

  glfwTerminate();

  return 0;
}
