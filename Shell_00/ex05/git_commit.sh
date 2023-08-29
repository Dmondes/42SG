#!/bin/bash
git log --format='%H' -n5

#The first line is a shebang which says this script should be executed using the Bash shell
#git log: view repo commit history
#--format='%H': Specifies the format of the output and displays only the commit hashes
#n5: displays the latest 5 commits
