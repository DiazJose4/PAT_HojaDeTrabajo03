#include "Ejercicio03.h"

Node<int>* Ejercicio03::copyList(Node<int>* head)
{
    if (head == nullptr)
    {
        return head;
    }

    Node<int>* actual = head;

    //Duplicados_Cambio
    while (actual != nullptr) {
        Node<int>* copyNode = new Node<int>;
        int data = actual->value;
        copyNode->value = data;
        copyNode->next = actual->next;
        actual->next = copyNode;
        actual = copyNode->next;
    }


    while (actual != nullptr) {
        if (actual->random != nullptr) {
            actual->next->random = actual->random->next;
        }
        actual = actual->next->next;
    }

    Node<int>* newHead = head->next;
    actual = head;
    Node<int>* newCurrent = newHead;

    while (actual != nullptr) {
        actual->next = newCurrent->next;
        actual = actual->next;

        if (actual != nullptr) {
            newCurrent->next = actual->next;
            newCurrent = newCurrent->next;
        }
    }

    return newHead;
}
