#include "symbol_defs.h"
int add_define(char* line)
/*add_symbol: adds new label with its value and type to the table iff there is no symbol with the same name.
on success returns a pointer to the new symbol, otherwise null pointer.*/
Symbol *add_symbol(char *name, int val, symbol_type type){
	/*creating a new node with given values*/
	Symbol rec;
	sNode_ptr newS = malloc(sizeof(struct sNode));
	// if(!newS) throw(MEM_ALLOC_ERR);

	rec.name = malloc(strlen(name) + 1);
	strcpy(rec.name, name);
	rec.val = val;	/*external symbols are saved with value 0*/
	rec.type = type;

	/*adding the new node to the table*/
	newS->record = rec;
	newS->next = symbol_table;
	symbol_table = newS;


	return &newS->record;
}

int add_define(line)
{
	int val;
	char* name;
}
