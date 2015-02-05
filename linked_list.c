#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int blk_Size = 0;
void* ll_Ptr;
void* fr_Ptr;

struct Node{
	struct Node* nxt_Ptr;
	int id, value_Len;
};

	void Init(int M, int b){
		ll_Ptr = malloc(M);
		fr_Ptr = ll_Ptr;
		blk_Size = b;
	}

	void Destroy(){
		free(ll_Ptr);
	}
	
	int Insert(int key, char * value_ptr, int value_len){
		if(value_len + sizeof(struct Node) > blk_Size)
			fprintf(stderr, "Size of value exceeds block size");

		struct Node* node = fr_Ptr;
		node->nxt_Ptr = NULL;
		node->id = key;
		node->value_Len = value_len;
		struct Node* temp = node; temp++;
		memcpy(temp, value_ptr, value_len);
		if(ll_Ptr == fr_Ptr){}
		else{
			struct Node* prev_Ptr = (&(node->nxt_Ptr))-(blk_Size);

		}
		fr_Ptr = &(node->nxt_Ptr)+(blk_Size);

	}
	
	int Delete(int key){

	}
	
	char* Lookup(int key){

	}
	
	void PrintList(){

	}
