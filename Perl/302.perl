use strict;
use warnings;

$_ = "";
while (my $loc = <>) {
    $_ = $_.$loc;
}

s/<.*?>//mg;
s/^([ ]*\n)*//;
s/([ ]*\n|[ ]*)*$//;
s/([\s]*\n){2,}/\n\n/g;
s/^[ ]*//mg;
s/[ ]*$//mg;
s/([ ])\1+/\1/g;

print;
