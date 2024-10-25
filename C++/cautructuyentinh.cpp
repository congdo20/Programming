#include <iostream>
using namespace std;

// cau truc node gom 2 phan: du lieu va con tro den nut tiep theo
struct Node {
    int info;
    Node* next;
};
/* H con tro tro den nut dau cua danh sach
 danh sach rong H = NULL
 tro kh  chi den dau next = NULL */
typedef Node* PNode; // kieu con tro nut
typedef Node* LinkedList; // kieu danh sach noi don
// khoi tao node
void InitNode(LinkedList &H) {
    H = NULL;
}
// kiem tra danh sach rong
bool IsEmpty(LinkedList H) {
    return H == NULL;
}
//chen vao sau
PNode InsertAfter(LinkedList &H, PNode P, int K) {
    PNode Q = new Node;
    Q->info = K;
    if (H == NULL) {
        H = Q;
        Q->next = NULL;
    } else {
        if (P == NULL) {
            return NULL;
        } else {
            Q->next = P->next;
            P->next= Q;
        }
    }
    return Q;
}
// chen vao truoc
PNode InsertBefore(LinkedList &H, PNode P, int K) {
    PNode Q = new Node;
    Q->info = K;
    if (H == NULL) {
        H = Q;
        Q->next = NULL;
        return Q;
    } else {
        if (P == NULL) {
            return NULL;
        } else {
            Q->info = P->info;
            P->info = K;
            Q->next = P->next;
            P->next = Q;
        }
    }
    return P;
}

// xoa 1 nut
PNode DeleteNode(LinkedList &H, PNode P) {
    if (P == NULL) {
        return NULL;
    }
    if (H == P && P->next == NULL) { // neu danh sach chi co 1 ptu
        H = NULL;
        delete P;
        return NULL;
    } else {
        if ( H == P) { // neu P la phan tu dau tien
            H = P->next;
            delete P;
            return H;
        } else { // neu P khong la phan tu dau tien
            PNode R = H;
            while (R->next != P && R->next != NULL) { // duyet toan danh sach
                R = R->next;
            } 
            if (R->next == NULL) {
                return NULL; // P khong co trong danh sach
            }
            R->next = P->next;
            delete P;
            return R->next;
        }
    }
}

// duyet danh sach
void Traverse(LinkedList H) {
    PNode P;
    P = H;
    while (P != NULL) {
        // Visit(P); ham tuy chon
        P = P->next;
    }
} 

int main(int argc, char *argv[]) {
    LinkedList L;
    InitNode(L);
    cout << IsEmpty(L) << endl;
    return 0;
}