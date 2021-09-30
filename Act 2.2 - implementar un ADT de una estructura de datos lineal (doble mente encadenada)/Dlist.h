#ifndef DLIST_H
#define DLIST_H

class Dlist{
public:
Dlist();
Dlist(int n);


void insertion (int n);
void update (int pos, val);
void deleteAt(int pos);
void search(int val);
void remFirst();
bool empty() const;
void delete(int num);
};

/*
struct Node{
  int data;
  struct Node* next;
  struct Node* prev;
}
*/

Dlist::Dlist(){}

bool DList::empty() const {
	return (head == 0 && tail == 0);
}

void Dlist::remFirst(){
  int val;
	DLink *p;

	p = head;
	val = p->value;

	if (head == tail) {
		head = 0;
		tail = 0;
	} else {
		head = p->next;
		p->next->previous = 0;
	}
	delete p;
	size--;

	return val;
}

int Dlist::insertion (int n){
	DLink<int> *newLink;

	newLink = new DLink<int>(n);

	if (empty()) {
		head = newLink;
		tail = newLink;
	} else {
		tail->next = newLink;
		newLink->previous = tail;
		tail = newLink;
	}
	size++;
}

int Dlist::update (int pos, val){
  Link<int> *newLink, *p, *q;
  p=head;
  for (int i;i<pos;i++){
    p=p->next;
  }
    deleteAt(pos)
    insertion()
}

int Dlist::deleteAt (int pos){
     int pos;
      T val;
      DLink<T> *p;

      if (index < 0 || index >= size) {
        throw IndexOutOfBounds();
      }

      if (index == 0) {
        return remFirst();
      }

      p = head;
      pos = 0;
      while (pos != index) {
        p = p->next;
        pos++;
      }

      val = p->value;
      p->previous->next = p->next;
      if (p->next != 0) {
        p->next->previous = p->previous;
      }
      size--;

      delete p;
      return val;
}

int Dlist::search (int val){


}


#endif