//Antarleen Chand
//PRN:24070123018

#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int data){
        val = data;
        next = NULL;
    }
};

int main(){
    Node* head = new Node(25);
    cout<<head->val<<" "<<head->next;
    return 0;

}
/* OUTPUT:
25 0
*/
