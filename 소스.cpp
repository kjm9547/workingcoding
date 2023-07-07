#include <stdio.h>
#include<iostream>
using namespace std;
class Stack {
	int size;
	int arr[100];	
public: Stack() {
	size = 0;
}
	  void push(int n) {
		  arr[size] = n;
		  size++;
	  }
	  int pop() {
		  int v = 0;
		  v = arr[size];
		  size--;
		  return v;
	  }
	  void showStack() {
		  for (int i = 0; i < size; i++) {
			  cout << arr[i] << ' ';
		  }
		  cout << endl;
	  }
	  void sortQ() {
		  int tmp;
		  for (int i = 0; i < size; i++) {
			  for (int y = i; y < size; y++) {
				  if (arr[i] > arr[y])
				  {
					  tmp = arr[i];
					  arr[i] = arr[y];
					  arr[y] = tmp;
				  }
			  }
		  }
	  }
};

class Queue {
	//fifo
	int arr[100];
	int size;
public: Queue() {
	size = 0;
}
	  void inqueue(int n) {
		  arr[size] = n;
		  size += 1;
	  }
	  int dequeue() {
		  int v = 0;
		  v = arr[0];
		  for (int i = 0; i < size; i++) {
			  if (i == 99) {
				  arr[i] = 0;
			  }
			  else {
				  arr[i] = arr[i + 1];
			  }

		  }
		  size--;
		  return v;
	  }
	  void showQue() {
		  for (int i = 0; i < size; i++) {
			  cout << arr[i] << ' ';
		  }
		  cout << endl;

	  }
	  void sortQ() {
		  int tmp;
		  for (int i = 0; i < size; i++) {
			  for (int y = i; y < size; y++) {
				  if (arr[i] > arr[y])
				  {
					  tmp = arr[i];
					  arr[i] = arr[y];
					  arr[y] = tmp;
				  }
			  }
		  }
	  }
};


int main() {

	Stack s;
	Queue q;
	int n;
	cout << "menu__list" << endl;
	while (true) {
		cout  << "1 Queue 2 Stack 3 보기 4 정렬";
		cin >> n;
		if (n == 1) {
			//que 
			cout << "Queue" << endl << "1 추가 2 빼기  ";
			cin >> n;
			if (n == 1) {
				cout << "input: ";
				cin >> n;
				q.inqueue(n);
			}
			else if (n == 2) {
				cout << "out" << endl;
				q.dequeue(); 
			}

		}
		else if (n == 2) {
			cout << "Stack" << endl << "1 추가 2 빼기  ";
			cin >> n;
			if (n == 1) {
				cout << "input: ";
				cin >> n;
				s.push(n);
			}
			else if (n == 2) { 
				cout << "out" << endl; 
				s.pop(); 
			}
		}
		else if (n == 3) {
			q.showQue();
			s.showStack();
		}
		else if (n == 4) {
			cout << "정렬을 진행합니다." << endl;
			q.sortQ();
			s.showStack();
			

		}
	}
	return 0;
}
