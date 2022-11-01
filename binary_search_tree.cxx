#include<iostream>
using namespace std ;
class binarysearchtree {
    private:
    struct node{
        int data;
        node * left;
        node * right;
    };
    node * head = nullptr;
    void show_help(node* temp){
        if (temp == nullptr){
            return;}
         cout<<temp->data<<endl;
         show_help(temp->left);
         show_help(temp->right);
    }
    public:
    void insert(int value){
        node* newnode=new node;
        newnode->data=value;
        newnode->left= nullptr;
        newnode->right=nullptr;
        if (head==nullptr){
            head=newnode;
            return;
        }
            node * temp=head;
            node * previous=nullptr;
            while(temp != nullptr){
                previous=temp;
                if (temp->data >value ){
                    temp = temp->left;
                }
                else {
                    temp = temp->right;
                }
                if (previous->data > value){
                    previous->left = newnode;
                }
                else{
                    previous->right = newnode;
                }
            }
        
    }
    void show(){ 
    if (head != nullptr){
        show_help(head);
    }
    }
};
int main()
{
	binarysearchtree bst;
	bst.insert(10);
	bst.insert(20);
	bst.insert(5);
	bst.insert(22);
	bst.show();
}