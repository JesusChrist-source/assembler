#include <stdio.h>
#include "defs.h"

int first_proc(char* filename)
{
	int symbol_flag = FALSE;
	FILE* fileptr = fopen(filename, "r");
	int dc = 0, ic = 0;
	int l;
	char* line = (char*)malloc(max_char_line);
	while(fgets(&line, max_char_line,fileptr)
	{
		if(is_define(line))
		{
			add_define(line);
			continue;
		}
		else if(is_symbol(line))
		{
			symbol_flag = TRUE;
		}
		if(is_data_command)
		{
			if(symbol_flag)
				add_label(line, dc);
			if(is_data(line))
				l = add_data_to_image(line);
			else if(is_string(line))
				l = add_string_to_image(line);
			continue;
		}
		else if(is_extern(line))
		{
			add_extern(lien);
			continue;
		{
		if(symbol_flag)
		{
			add_label(line, ic+data_offset);
		}
		l = add_command(line);
		ic+=l
	}
	update_data_labels(ic+100);

}
