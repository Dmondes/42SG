#!/bin/bash
id -Gn $FT_USER | tr ' ' ',' | tr -d "\n"


#id -Gn $FT_USER: Retrieves the group names of the user specified by $FT_USER. 
#-Gn options tell the id command to display group names $FT_USER is replaced with the actual user's name.
# | symbol is a pipe: Using the command on the left side of the symbol as input to run the command on the right side.
#tr ' ' ',': Replaces spaces with commas in the list.
#tr -d "\n": Removes newline characters, make sure the entire output is on a single line.
