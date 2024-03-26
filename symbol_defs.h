# define max_char_line 80

typedef enum symbol_type{
	.data, 
	.code
	.mdefine
	.external
};

typedef struct Symbol{
	char* name,
	symbol_type type,
	int value

}symbol;

typedef struct sNode *sNode_ptr;

struct sNode{
	Symbol record;
	struct sNode *next;
};
