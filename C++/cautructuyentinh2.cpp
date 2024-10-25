#include <iostream>
using namespace std;

struct DNode {
    int info;
    DNode *nextL, *nextR;
};

typedef DNode* PDNode;
typedef PDNode CDoubleLinkedList; // danh sach noi kep vong
typedef struct {
    PDNode H; // con tro dau
    PDNode T; // con tro cuoi
} DoubleLinkedList;


int main (int argc, char *argv[]) {
    return 0;
}