#include <stdio.h>
#include <string.h>
//program vypise vetu bez nadbytočných medzier

int main ()
{
  char str[] ="Toto je    veta ktora   ma  niekolko medzier     navyse a  my   ich ideme     odstranit";
  char * pch;
  printf ("%s\n",str);
  pch = strtok (str," ");
  while (pch != NULL)
  {
    printf ("%s ",pch);
    pch = strtok (NULL, " ");
  }
  return 0;
}
