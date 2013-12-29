#include <stdio.h>

int main(void) {
  char *n = "\n";
  char *q = "\"";
  char *bs = "\\";
  char *a = "#include <stdio.h>";
  char *b = "int main(void) {";
  char *c = "%s%s%s%s%s  char *n = %s%s%sn%s;%s  char *q = %s%s%sq%s;%s  char *bs = %s%s%s%s;%s  char *a = %s%s%s;%s  char *b = %s%s%s;%s  char *c = %s%s%s;%s  printf(c,a,n,n,b,n,q,bs,bs,q,n,q,bs,bs,q,n,q,bs,bs,q,n,q,a,q,n,q,b,q,n,q,c,q,n,n,n);%s}%s";
  printf(c,a,n,n,b,n,q,bs,bs,q,n,q,bs,bs,q,n,q,bs,bs,q,n,q,a,q,n,q,b,q,n,q,c,q,n,n,n);
}
