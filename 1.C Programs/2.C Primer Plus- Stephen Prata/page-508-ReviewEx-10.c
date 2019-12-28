// own version of strlen() function

int strlen(const char *s)
{
	int ct = 0;

	while (*s++)	// or while (*s++ != '\0')
		ct++;

	return(ct);
}
