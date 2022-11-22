#include <stdio.h>
#define INF 999
#define Vn 4


void floydWarshall(int graph[Vn][Vn]){
    int dist[Vn][Vn];
    for(int i=0;i<Vn;i++){
        for(int j=0;j<Vn;j++){
            dist[i][j] = graph[i][j];
        }
    }
    for(int k=0;k<Vn;k++){
        for(int i=0;i<Vn;i++){
            for(int j=0;j<Vn;j++){
                if(dist[i][k] + dist[k][j] < dist[i][j]){
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }

    for(int i=0;i<Vn;i++){
        for(int j=0;j<Vn;j++){
            printf("%4d ", dist[i][j]);
        }
        printf("\n");
    }
}

int main (){

    int graph[Vn][Vn] = {{0, 3, INF, 5},
             {2, 0, INF, 4},
             {INF, 1, 0, INF},
             {INF, INF, 2, 0}};

    floydWarshall(graph);
    return 0;
}