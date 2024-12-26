#ifndef clox_chunk_h 
#define clox_chunk_h 

#include "common.h"
#include "value.h"

typedef enum {
    OP_ADD,
    OP_CONSTANT,
    OP_DIVIDE,
    OP_EQUAL,
    OP_FALSE,
    OP_GREATER,
    OP_LESS,
    OP_MULTIPLY,
    OP_NEGATE,
    OP_NIL,
    OP_NOT,
    OP_RETURN,
    OP_SUBTRACT,
    OP_TRUE,
} OpCode;

typedef struct {
    int count; 
    int capacity;
    uint8_t* code;
    int* lines;
    ValueArray constants;
} Chunk;

void initChunk(Chunk* chunk);
void writeChunk(Chunk* chunk, uint8_t byte, int line);
void freeChunk(Chunk* chunk);
int addConstant(Chunk* chunk, Value value);
#endif 
