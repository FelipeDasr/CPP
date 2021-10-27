/*modulo de funçoes de matematica*/

int Fatorial(int n)
{
  long int fat = 1L;

  for(int cont = 1; cont < n; cont++)
  {
      fat = fat * (cont + 1);
  }

  return fat;
}

int AreaQuadrado(int lado)
{
  return lado*lado;
}
