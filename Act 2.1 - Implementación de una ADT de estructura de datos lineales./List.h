#ifndef LIST_H
#define LIST_H

class List{
  public:
  List();
  List(int n);
  int data,size;
  Node * next;

  void insertion(int n);
  void update(int pos, int newElement);
  void deleteAt(int indice);
  void addEmpty(int numero)
};

List::List(){
}

void List::addEmpty(int numero){
	Link<int> *newLink;
	newLink = new Link<T>(val);
	newLink->next = head;
	head = newLink;
	size++;
}


void List::insertion (int n){
 Link<int> *newLink, *p;
  if (empty()) {
		addEmpty(numero);
		return;
	}
	p = head;
	while (p->next != 0) {
		p = p->next;
	}

	newLink->next = 0;
	p->next = newLink;
	size++;
}

void List::update (Link <int> *p,int newElement){
  Link<int> *newLink
 if (p == NULL) {
        printf("el previo nodo no puede ser NULL");
        return;
    }
    struct Link * newLink = (struct Link * ) malloc(sizeof(struct Link));
    newLink->data = newElement;
    newLink->next = p->next;
    p->next = newLink;
}
}

void List::deleteAt (int indice){
  Link<int> *tmp = head;
  Link<int> *rmv;
  int count = 0;

   if(indice == 0){
        rmv = head; 
        head = tmp->next; 
        free(rmv); 
        return head;
    }

    if(indice == 1){
        rmv = head->next;
        head->next = tmp->next->next;
        free(rmv);
        return head;
    }

    if(indice == -1){
        
        while(count < len(head)-2){
            tmp = tmp->next;
            count += 1;
        }
        rmv = tmp->next;
        tmp->next = NULL;
        free(rmv);
        return head;
    }
    
    while(count < index-1){
        tmp = tmp->next;
        count += 1;
    }
    rmv = tmp->next;
    tmp->next = tmp->next->next;
    free(rmv);
    return head;

}

#endif