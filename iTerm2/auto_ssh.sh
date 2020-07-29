#!/usr/bin/expect -f 
#auto ssh login 
set timeout 30 
#set sshost [lindex $argv 0]
set sshuser [lindex $argv 0]
set sshost [lindex $argv 1]
set sshpassword [lindex $argv 2]
spawn ssh $sshuser@$sshost 
expect {
        "*yes/no" {send "yes\r"; exp_continue}
         "*password*" {send "$sshpassword\n"}
} 
interact
