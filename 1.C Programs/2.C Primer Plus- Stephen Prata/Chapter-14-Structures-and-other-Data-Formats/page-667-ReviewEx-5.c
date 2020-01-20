// devise function with the structure of previous que

extern struct month months[];

int days(int month)
{
	int index, total;

	if (month < 1 || month > 12)
		return(-1);	// error signal
	else
	{
		for (index = 0, total = 0; index < month; index++)
			total += month[index].days;
		return(total);
	}
}
