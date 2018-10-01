while (<>) { 
	s/\((\s*\w*\(*)*\)/()/g;
	print ; 
}