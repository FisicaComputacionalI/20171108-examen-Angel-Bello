//Angel Jesus Bello Muñoz
//11/10/17
#include <iostream>
using namespace std;
int main ()
{
  int x=1;
  //Te falta el ciclo. Esto se repite mientras que x sea menor o igual a 5, quiere decir que se calculan los valores 1, 1+2=3, 3+2=5. De los cuales se imprimen los que no son divisibles por 3 : 1 y 5. 
  if (x<=5)
    { if(x%3==0)
	x=x+2;
      else 
	cout<<x;
    }
return 0;
}
