/*******************************************************
 * stat
 * 	Produces statistics about a program.
 *
 * Usage:
 * 	stat [options] <file-list>
 *******************************************************/ 
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

#include "ch_type.h"
#include "in_file.h"
#include "token.h"

/*****************************************************
 * line_counter -- Handles line number / line count
 * 		stat.
 *
 * Counts the number of T_NEW_LINE tokens seen and
 * outputs the current line number at the beginning
 * of the line.
 *
 * At EOF, it will output the total number of lines.
******************************************************/ 
static int cur_line;		// Current line number
