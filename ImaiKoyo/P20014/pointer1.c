#include <stdio.h>

int main(void)
{
  int n=10;
  int *p;

  printf("%d\n",n);

  p=&n;  //変数nのアドレス(番地)を、ポインタpに格納する。

  *p=3;  //ポインタpに格納されているアドレスの場所*pに3を格納する。
         //*pは、ポインタpに格納されているアドレスの場所に格納されている値を表す。
         //既に、pの中にはnのアドレスが格納されているので、*pとnは同じ役割を果たす。

  printf("%d\n",n);
  
  
  return 0;
}