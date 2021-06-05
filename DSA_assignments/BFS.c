void bfs(struct Graph* g, int start) 
{
    struct queue* q = createQueue(); //function to create a queue

    g->visited[start] = 1;
    enqueue(q, start);

    while (!isEmpty(q)) 
    {
        printQueue(q);
        int c = dequeue(q); // remove the start element
        printf("Visited vertex %d\n", c);

        struct node* temp = g->adjList[c];

        while (temp) 
        {
            int adj = temp->ver;

            if (g->visited[adj] == 0)
            {
                g->visited[adj] = 1;
                enqueue(q, adj);
                temp = temp->next;
            }
        }
    }
}