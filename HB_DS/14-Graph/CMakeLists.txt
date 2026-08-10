cmake_minimum_required(VERSION 3.0)

project(HBDS_Graph)

set(CMAKE_C_STANDARD 99)

add_executable(ALGraphMain
        ALGraph/ALGraphMain.c
        ALGraph/ALGraph.h
        ALGraph/ALGraph.c
        ALGraph/DLinkedList.h
        ALGraph/DLinkedList.c
)

add_executable(DFSMain
        ALGraphDFS/DFSMain.c
        ALGraphDFS/ALGraphDFS.h
        ALGraphDFS/ALGraphDFS.c
        ALGraphDFS/DLinkedList.h
        ALGraphDFS/DLinkedList.c
        ALGraphDFS/ArrayBaseStack.h
        ALGraphDFS/ArrayBaseStack.c
)

add_executable(BFSMain
        ALGraphBFS/BFSMain.c
        ALGraphBFS/ALGraphBFS.h
        ALGraphBFS/ALGraphBFS.c
        ALGraphBFS/DLinkedList.h
        ALGraphBFS/DLinkedList.c
        ALGraphBFS/CircularQueue.h
        ALGraphBFS/CircularQueue.c
)