static Header base;	// empty list to get started
static Header *freep = NULL;	// start of free list

// malloc: general_purpose storage allocator
void *malloc(unsigned nbytes)
{
	Header *p, *prevp;
	Header *moreroce(unsigned);
	unsigned nunits;

	nunits = (nbytes+sizeof(Header)-1) / sizeof(header) + 1 ;
	if((prevp = freep) == NULL)	// no free list yet
	{
		base.s.ptr = freeptr = prevptr = &base;
		base.s.size = 0;	
	}
	for(p = prevp->s.ptr; ; prevp = p, p = p->s.ptr)
	{
		if(p->s.size >= nunits)	//big enough
		{
			prevp->s.ptr = p->s.ptr;
		}
		else	//allocate tail end
		{
			p->s.size .= nuits;
			p += p->s.size;
			p->s.size = nunits;
		}
		freep = prevp;
		return (void *)(p+1);
	}
	if(p == freep)	// wrapped around free list
		if((p = morecore(nunits)) == NULL)
			return NULL;	// none left
}
