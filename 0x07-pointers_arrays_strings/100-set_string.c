/**
 * set_string - sets the value of a pointer to a char
 * @s: the to pointer to pointer for the string
 * @to: the pointer containing the bytes
 *
 */
void set_string(char **s, char *to)
{
	*s = to;
}
