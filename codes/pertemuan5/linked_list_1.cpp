#include <iostream>
using namespace std;

struct TNode
{
  int data;
  TNode *next;
};
TNode *head, *tail;

void init()
{
  head = NULL;
  tail = NULL;
}

int isEmpty()
{
  if (tail == NULL)
    return 1;
  else
    return 0;
};

void insertDepan(int newData)
{
  TNode *newNode = new TNode;
  newNode->data = newData;
  newNode->next = head;

  if (isEmpty() == 1)
  {
    head = tail = newNode;
    tail->next = NULL;
  }
  else
  {
    newNode->next = head;
    head = newNode;
  }

  system("clear");
  cout << "Data " << newData << " Masuk Depan!\n";
}

void inserBelakang(int newData)
{
  TNode *newNode, *temp;
  newNode = new TNode;
  newNode->data = newData;
  newNode->next = NULL;

  if (isEmpty() == 1)
  {
    head = tail = newNode;
    tail->next = NULL;
  }
  else
  {
    tail->next = newNode;
    tail = newNode;
  }

  system("clear");
  cout << "Data " << newData << " Masuk Belakang!\n";
}

void show()
{
  TNode *temp = head;

  if (isEmpty() == 0)
  {
    cout << "Data yang masuk: ";
    while (temp != NULL)
    {
      cout << temp->data << " ";
      temp = temp->next;
    }
    cout << endl;
  }
  else
    cout << "Data yang masuk: Masih kosong\n";
}

void hapusDepan()
{
  system("clear");

  TNode *deleted;
  int d;

  if (isEmpty() == 0)
  {
    if (head != tail)
    {
      deleted = head;
      d = deleted->data;
      head = head->next;
      delete deleted;
    }
    else
    {
      d = tail->data;
      head = tail = NULL;
    }
    cout << d << " dihapus\n";
  }
  else
    cout << "Masih kosong\n";
}

void hapusBelakang()
{
  system("clear");

  TNode *deleted, *temp;
  int d;

  if (isEmpty() == 0)
  {
    temp = head;
    if (head != tail)
    {
      while (temp->next != tail)
        temp = temp->next;
      deleted = tail;
      tail = temp;
      d = deleted->data;
      delete deleted;
      tail->next = NULL;
    }
    else
    {
      d = tail->data;
      head = tail = NULL;
    }
    cout << d << " dihapus\n";
  }
  else
    cout << "Masih kosong\n";
}

int main()
{
  int pilih, newData;

  system("clear");

  cout << "*------------------------*" << endl;
  cout << "*   Single Linked List   *" << endl;
  cout << "*------------------------*" << endl;

  do
  {
    cout << endl;
    cout << "*------------------------*" << endl;
    cout << "1. Insert Depan" << endl;
    cout << "2. Insert Belakang" << endl;
    cout << "3. Delete Depan" << endl;
    cout << "4. Delete Belakang" << endl;
    cout << "5. Tampil Data" << endl;
    cout << "Masukkan Pilihan : ";
    cin >> pilih;
    cout << endl;

    switch (pilih)
    {
    case 1:
      cout << "Masukkan Data : ";
      cin >> newData;
      insertDepan(newData);
      break;
    case 2:
      cout << "Masukkan Data : ";
      cin >> newData;
      inserBelakang(newData);
      break;
    case 3:
      hapusDepan();
      break;
    case 4:
      hapusBelakang();
      break;
    case 5:
      show();
      break;
    default:
      cout << "\nPilihan tidak ada\n";
    }

  } while (pilih >= 1 && pilih <= 5);
  return 0;
}