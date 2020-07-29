#!/usr/bin/expect -f 
#auto ssh login 
set timeout 30 
set sshport [lindex $argv 0]
set sshuser [lindex $argv 1]
set sshost [lindex $argv 2]
set sshpassword [lindex $argv 3]
spawn ssh -p $sshport  $sshuser@$sshost 
expect {
        "*yes/no" {send "yes\r"; exp_continue}
         "*password*" {send "$sshpassword\n"}
} 
interact
