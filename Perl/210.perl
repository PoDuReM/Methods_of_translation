while (<>) { 
	s/(a\w*a){3}/bad/g;
	print ; 
}