#include <stdio.h>
#include <cglm/cglm.h>

#define N 100

int main(void) {
  mat4 matrix1, stack[N];
  void *p = stack;

  glm_mat4_identity(matrix1);
  glm_mat4_copy(matrix1, p + 1);
  glm_mat4_identity(p + 1);
  glm_mat4_print(p + 1, stdout);

  return 0;
}
