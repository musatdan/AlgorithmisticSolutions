typedef struct s
{
    int values[1000];
    int size;
} stack;

void push (stack* s, int value) {
    s -> values[s -> size++] = value;
}

int pop (stack * s) {
    int value = s -> values[s -> size - 1];
    s -> size -= 1;
    return value;
}

// rooms[roomsSize][roomsColSize]
bool canVisitAllRooms(int** rooms, int roomsSize, int* roomsColSize){
     bool *visited = (bool*) calloc((roomsSize + 1), sizeof(bool));
     stack *s = (stack*) malloc(sizeof(stack));
     s -> size = 0;

     for(int i = 0; i < roomsColSize[0]; i++) {
         printf("I can go Room #%d\n", rooms[0][i]);
         push(s, rooms[0][i]);
     }
     visited[0] = 1;

     while(s -> size > 0) {
         int currentRoom = pop(s);
         visited[currentRoom] = 1;
         printf("Visit Room #%d\n", currentRoom);

         for(int i = 0; i < roomsColSize[currentRoom]; i++) {
             printf("Found Key #%d\n", rooms[currentRoom][i]);
             if(visited[rooms[currentRoom][i]] == 0) {
                push(s, rooms[currentRoom][i]);
                printf("I can go Room #%d\n", rooms[currentRoom][i]);
             }
         }
     }

     for(int i = 0; i < roomsSize; i++) {
         if(visited[i] != 1) {
             return 0;
         } 
     }

    return 1;
}
