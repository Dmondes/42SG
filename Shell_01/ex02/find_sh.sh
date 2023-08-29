#!/bin/bash
find . -type f -name "*.sh" -exec basename {} \; | rev | cut -c 4- | rev



#find . -type f -name "*.sh": Finds all files (-type f) with the extension .sh in the current directory and its subdirectories (.).
#-exec basename {} \; For each found file, the basename command is executed to extract the filename without the path. 
#The {} is a placeholder that gets replaced with the current file being processed. The \; marks the end of the -exec command.
#The | symbols are pipes.
#rev: Reverses the characters in each line of input.
#cut -c 4-: Removes the first three characters (.sh) from each line of input, effectively removing the .sh extension.
#rev: Reverse the characters back to their original order.
