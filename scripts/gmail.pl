#!/usr/bin/perl


# Fast perl gmailing;
#
# author: imuntean@redhat.com

use strict;
use warnings;

use Getopt::Long;

use Email::Send;
use Email::Send::Gmail;
use Email::Simple::Creator;

my $verbose = '';
my $destination = '';
my $subject = '';
my $message = '';
my $end_of_message = "\n\nCheers, \nGeminy.";

GetOptions ('verbose=s' => \$verbose, 'to=s' => \$destination, 'subject=s' =>\$subject, 'message=s'=> \$message);

print "Sending $message with subject: $subject to $destination...\n";

my $my_gmail ='geminy@gmail.com';
my $my_pass = "pass";

my $email = Email::Simple->create(
		header => [
		From    => $my_gmail,
		To      => $destination,
		Subject => $subject,
		],
		body => "$message \n $end_of_message");

my $sender = Email::Send->new(
		{   mailer      => 'Gmail',
		mailer_args => [
		username => $my_gmail,
		password => $my_pass,
		]
		}
		);

eval { $sender->send($email) };
die "Error sending email: $@" if $@;
