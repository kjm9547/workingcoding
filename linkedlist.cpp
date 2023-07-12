#include<iostream>
using namespace std;

class List{
	public:
	int value;
	List* next;
	public: List(){
		next = NULL;
		value =0;
	}
};
List* insert(List* l, int n){
	List* node = new List();
	List* tmp = new List();
	tmp = l;
	if(l == NULL){
		l = node;
		node->value = n;
		return l;
	}
	else{
		while(true){
			if(l->next == NULL){
				l->next = node;
				node->value = n;
				break;
			}
			l = l->next;
			
		}
		l = tmp;
		return l;
	}
	return l;
}
void show(List* l){
	while(true){
		if(l->next != NULL){
			cout << l->value;
			
		}
		l = l->next;
	}
}
int main(){
	
	List* head = new List();
	head = NULL;
	head = insert(head,10);
	head = insert(head,40);
	head = insert(head,30);
	head = insert(head,20);
	head = insert(head,50);
	show(head);
	
	
}
