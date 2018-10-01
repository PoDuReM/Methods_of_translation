while (<>) { 
	s/(\d+)0+(\s|$)/\1\2/g;
	print ; 
}