#!/bin/bash
ifconfig | grep 'ether' | awk '{print $2}'



#ifconfig: display information about network interfaces on Unix-like systems.

#|: The pipe symbol takes the output of the ifconfig command and passes it as input to the next command.

#grep 'ether': Filters the output of ifconfig to show only lines that contain the word "ether". In ifconfig output, the "ether" line typically displays the MAC address.

#awk '{print $2}':The awk tool, it will print the MAC address, which is the second field(column) on the "ether" lines
