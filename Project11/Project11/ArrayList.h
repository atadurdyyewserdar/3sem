#pragma once
#include <iostream>
using namespace std;
template<class T>
struct Node
{
	T data;
	Node *next, *prev;
};

//Шаблон списка
template<class Type>
class ArrayList
{
protected:
	//размер
	int size;
	//указатели на начало и конец
	Node<Type> *first, *last;
public:
	//Конструктор по умолчанию
	ArrayList<Type>()
	{
		size = 0;
		first = nullptr;
		last = nullptr;
	}
	//Получение размера
	Node<Type> *getList();

	//Конструктор копирования
	ArrayList<Type>(const Type& obj);

	//Деструктор
	~ArrayList<Type>();

	//Добавление в конец списка
	void Add(Type object);

	//Удаление элемента из списка
	void Delete(int index);

	//Очистка списка
	void Clear();

	//Получение элемента списка
	Type &Get(int index);

	//Проверка на пустоту
	bool IsEmpty();

	//Получение размера списка
	int GetSize();

	//void deleteNew(int index);

	// operator[]
	Type& operator[](int index);

	//Удаление из хвоста
	Type Del_Last();

};

template<class Type>
inline Node<Type>* ArrayList<Type>::getList()
{
	return first;
}

//Добавление в конец списка
template<class Type>
inline void ArrayList<Type>::Add(Type object)
{
	if (size == 0) {
		last = new Node<Type>();
		last->data = object;
		last->next = nullptr;
		last->prev = nullptr;
		first = last;
		size++;
	}
	else {
		Node<Type> *temp = new Node<Type>();
		temp->data = object;
		temp->prev = last;
		temp->next = nullptr;
		last->next = temp;
		last = temp;
		size++;
	};
}

//Удаление элемента из списка
template<class Type>
inline void ArrayList<Type>::Delete(int index)
{


	if (size != 0) {
		if (index == 1 && index != size) {
			Node<Type> *temp = first;
			first->next->prev = NULL;
			first = first->next;
			delete temp;
			size--;
			return;
		}
		else if (index == size && index != 1) {
			Node<Type> *temp = last;
			last->prev->next = NULL;
			last = last->prev;
			delete temp;
			size--;
			return;
		}
		else if (index == size && index == 1) {
			delete first;
			first = NULL;
			last = NULL;
			size--;
			return;
		}
		else if (index > 1 && index < size) {
			Node<Type> *current = first;
			for (int i = 1; i < index; i++)
				current = current->next;
			current->prev->next = current->next;
			current->next->prev = current->prev;
			size--;
			return;
		};
	};

}


//Очистка списка
template<class Type>
inline void ArrayList<Type>::Clear()
{
	Node<Type> *current = first, *temp;
	if (size == 0) {
		return;
	}
	while (current != 0) {
		temp = current;
		current = current->next;
		delete temp;
	};
	size = 0;
}

//Получение элемента списка
template<class Type>
inline Type & ArrayList<Type>::Get(int index)
{
	Node<Type> *temp = first;

	if (size == 0) {
		cout << "Список пуст!" << endl;
		return temp->data;
	}
	else {
		for (int i = 0; i < index; i++)
			temp = temp->next;
		return temp->data;
	}
}

//Проверка на пустоту
template<class Type>
inline bool ArrayList<Type>::IsEmpty()
{
	return size == 0;
}
template<class Type>

//Получение размера списка
inline int ArrayList<Type>::GetSize()
{
	return size;
}



template<class Type>
inline Type & ArrayList<Type>::operator[](int index)
{
	int counter = 0;
	Node<Type>* temp = new Node<Type>;
	temp = first;
	while (temp != NULL)
	{
		if (counter == index)
		{
			return temp->data;
		}
		temp = temp->next;
		counter++;
	}
	return first->data;
}

template<class Type>
inline Type ArrayList<Type>::Del_Last()
{
	if (!(first)) return Type();
	Type data = last->data;
	Node<Type> *node = last;
	last = last->prev;
	if (last)
		last->next = nullptr;
	delete node;
	size--;
	return data;
}

//Конструктор копирования
template<class Type>
inline ArrayList<Type>::ArrayList(const Type & obj)
{
	this->first = obj.first;
	this->last = obj.last;
	this->size = obj.size;
}

//Деструктор
template<class Type>
inline ArrayList<Type>::~ArrayList()
{
	if (!IsEmpty())
		Clear();
}
