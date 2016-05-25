#! /usr/bin/perl

# Exucute a script multiple times
#
# author: imuntean@redhat.com
#
# ./multiexec.pl -s "echo Hello" -t 100 -i 5

use strict;
use warnings;
use Getopt::Long;

#Interval in seconds
my $interval = '0';
my $script = '';
my $times_to_execute = '0';

GetOptions ('script=s' => \$script ,'times=i' => \$times_to_execute, 'interval=i' => \$interval);

if ($times_to_execute == '0') {
	$times_to_execute = 100;

}

for (my $i=0; $i < $times_to_execute; $i++){

	system($script);
	print "\n";

	if ($interval != 0){
		sleep($interval);
	}
}

