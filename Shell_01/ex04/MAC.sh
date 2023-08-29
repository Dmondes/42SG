#!/bin/bash
ifconfig | grep 'ether' | awk '{print $2}'
#ifconfig | grep ether | cut -c15- | cut -c 1-18
#remove -a dont need to include inactive addresses
