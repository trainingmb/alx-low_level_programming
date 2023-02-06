/**
 * check_for_endianness - Checks the endianness of the underlying system
 * Return: Endianess 0 if little and big if
 */
int check_for_endianness()
{
  unsigned int x = 1;
  char *c = (char*) &x;
  return (int)*c;
}
