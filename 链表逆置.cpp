#include<iostream>
using namespace std;
//���������
typedef struct lnode{
	int data;
	lnode* next;
}*linklist;
//β�巨 
void insertlink(linklist &L,int n){
	L= new lnode;
	L->next=NULL; //��ʼ�� 
	lnode* r=L;
	while(n--){
		int data;
		cin>>data;
		lnode* p=new lnode;
		p->data=data;
		p->next=NULL;
	r->next=p;
 	r=p;
	}
}
void reverselink(linklist &L){//����ڵ� 
	lnode* p=L->next;
	L->next=NULL;
	lnode* r=new lnode;
	while(p){//p�Ǵ���Ԫ�� 
		r=p->next;
		p->next=L->next;
		L->next=p;
		p=r; 	
	}
	}
void show(linklist L){
	linklist p=L->next;
	while(p!=NULL){
		cout<<p->data<<" "<<endl;
		p=p->next;
		
	}
}
int main(){
	int n;
	cin>>n;
	linklist L;
		insertlink(L,n);
	reverselink(L);
	show(L);
	return 0;
}
