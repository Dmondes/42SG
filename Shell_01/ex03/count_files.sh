#!/bin/bash
find . | wc -l


#find .: This command searches for files and directories in the current directory (.) and its subdirectories.
#|: The pipe symbol takes the output of the find command and passes it as input to the next command.
#wc -l: Counts the number of lines in the input. The total number of lines indicates the total number of files and directories as each file/ directory is a line.

