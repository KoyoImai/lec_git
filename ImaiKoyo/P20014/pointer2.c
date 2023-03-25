#include <stdio.h>

int main(void)
{
  int n=10;
  int *p;

  printf("%p\n", &n);  //printf()関数でアドレスを表示するためには%pを使う。

  printf("%d %p\n",n,p);

  p=&n;  //変数nのアドレス(番地)を、ポインタpに格納する。

  printf("%d %p\n",n,p);

  *p=3;  //ポインタpに格納されているアドレスの場所*pに3を格納する。
         //*pは、ポインタpに格納されているアドレスの場所に格納されている値を表す。
         //既に、pの中にはnのアドレスガ格納されているので、*pとnは同じ役割を果たす。

  printf("%d %p\n",n,p);

  return 0;
}
