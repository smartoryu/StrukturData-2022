/**
 * @brief Soal Praktikum Struktur Data
 *
 * Buat Aplikasi dengan menu:
 * 1. Input Data Barang (Nama, harga, jumlah)
 * 2. Tampilkan Data Barang
 * 3. Delete Data Barang
 * 4. Hitung pembelian (stok berkurang setelah dibeli)
 *
 * Kirim ke shahdatmaulani@gmail.com
 * cc: m.bahrul_ulum@esaunggul.ac.id
 * subject: NIM_Nama_UTS Praktikum Struktur Data
 *
 * Due date 30 Mei 2022 23.55
 */

#include <iostream>
#include <iomanip>
#include <limits>
#include <vector>
#include <algorithm>

using namespace std;

class Goods
{
public:
  int id;
  string name;
  int qty;
  int price;
};
vector<Goods> data_goods;

// Function to put thousands separators in the given integer
// https://www.geeksforgeeks.org/program-to-format-a-number-with-thousands-separator-in-c-cpp/
string thousandSeparator(int n)
{
  string ans = "";

  // Convert the given integer
  // to equivalent string
  string num = to_string(n);

  // Initialise count
  int count = 0;

  // Traverse the string in reverse
  for (int i = num.size() - 1; i >= 0; i--)
  {
    count++;
    ans.push_back(num[i]);

    // If three characters
    // are traversed
    if (count == 3)
    {
      ans.push_back('.');
      count = 0;
    }
  }

  // Reverse the string to get
  // the desired output
  reverse(ans.begin(), ans.end());

  // If the given string is
  // less than 1000
  if (ans.size() % 4 == 0)
  {
    // Remove '.'
    ans.erase(ans.begin());
  }

  return ans;
}

// Function to alert invalid input
void invalidInput()
{
  system("clear");
  cout << "Input tidak valid!" << endl;
  cin.clear();
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

// Function to alert invalid menu
void invalidMenu()
{
  system("clear");
  cout << "Pilihan menu tidak valid!" << endl;
  cin.clear();
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

// Function to alert empty Goods
void emptyGoods()
{
  system("clear");
  cout << "Data Barang Kosong!" << endl;
}

// Function to get unit
string getUnit(int input) { return input > 1 ? "pcs" : "pc"; }

// Function to show list of Goods
void showGoods()
{
  if (data_goods.size() == 0)
    emptyGoods();
  else
  {
    system("clear");
    cout << "Daftar Barang" << endl;
    for (int i = 0; i < data_goods.size(); i++)
    {
      string id = to_string(i + 1) + ". ";
      string name = data_goods[i].name;
      string unit = getUnit(data_goods[i].qty);
      string qty = " (" + thousandSeparator(data_goods[i].qty) + unit + ") ";
      string price = "- Rp " + thousandSeparator(data_goods[i].price);
      cout << id << name << qty << price << endl;
    }
  }
}

// Function to add new Goods
void inputGoods()
{
  Goods goods;
  cout << "# Input Data Barang" << endl;
  cout << "# Nama Barang: ";
  getline(cin >> ws, goods.name);

  cout << "# Jumlah Barang: ";
  if (cin >> goods.qty)
  {
    cout << "# Harga Barang: ";
    if (cin >> goods.price)
    {
      goods.id = time(0);
      data_goods.push_back(goods);
      cout << endl;
      system("clear");
      cout << "Data " << goods.name;
      cout << " berhasil ditambahkan!" << endl;
    }
    else
      invalidInput();
  }
  else
    invalidInput();
}

// Function to buy Goods
void buyGoods()
{
  if (data_goods.size() == 0)
    emptyGoods();
  else
  {
    showGoods();
    cout << endl;
    cout << "# Pembelian Barang" << endl;
    cout << "# Masukkan ID Barang: ";
    int id;
    if (cin >> id)
    {
      if (id > 0 && id <= data_goods.size())
      {
        cout << "# Masukkan Jumlah Barang: ";
        int qty;
        if (cin >> qty)
        {
          if (qty > 0 && qty <= data_goods[id - 1].qty)
          {
            data_goods[id - 1].qty -= qty;
            cout << endl;
            cout << "Pembelian " << thousandSeparator(qty) << " " << getUnit(qty);
            cout << " " << data_goods[id - 1].name;
            cout << " senilai Rp " << thousandSeparator(data_goods[id - 1].price * qty);
            cout << " berhasil." << endl;
          }
          else
            invalidInput();
        }
        else
          invalidInput();
      }
      else
        invalidInput();
    }
    else
      invalidInput();
  }
}

// Function to delete Goods
void deleteGoods()
{
  if (data_goods.size() == 0)
    emptyGoods();
  else
  {
    showGoods();
    cout << endl;
    cout << "# Hapus Barang" << endl;
    cout << "# Masukkan ID Barang: ";
    int id;
    if (cin >> id)
    {
      if (id > 0 && id <= data_goods.size())
      {
        cout << "# Apakah anda yakin ingin menghapus barang ";
        cout << data_goods[id - 1].name << "? (y/n) ";
        char answer;
        if (cin >> answer)
        {
          if (answer == 'y' || answer == 'Y')
          {
            data_goods.erase(data_goods.begin() + (id - 1));
            cout << endl;
            cout << "Barang berhasil dihapus!" << endl;
          }
          else if (answer == 'n' || answer == 'N')
            return;
          else
            invalidInput();
        }
        else
          invalidInput();
      }
      else
        invalidInput();
    }
    else
      invalidInput();
  }
}

int main()
{
  system("clear");
  bool running = true;
  int selected_menu;

  while (running)
  {
    cout << "---------- Aplikasi Penjualan ----------" << endl;
    cout << endl;

    cout << "Selamat datang!" << endl;
    cout << "1. Input Barang Baru" << endl;
    cout << "2. Tampilkan Barang ";
    cout << "(" << data_goods.size() << ")" << endl;
    cout << "3. Beli Barang" << endl;
    cout << "4. Hapus Barang" << endl;
    cout << "0. Keluar" << endl;
    cout << endl;
    cout << "Silakan pilih menu yang tersedia: ";

    if (cin >> selected_menu)
    {
      cout << endl;

      switch (selected_menu)
      {
      case 1:
        // Input Barang Baru
        inputGoods();
        break;
      case 2:
        // Tampilkan daftar barang
        showGoods();
        break;
      case 3:
        // Beli Barang
        buyGoods();
        break;
      case 4:
        // Hapus Barang
        deleteGoods();
        break;
      case 0:
        // Keluar
        cout << "Goodbye!" << endl;
        running = false;
        break;
      default:
        invalidMenu();
      }

      cout << endl;
    }
    else
    {
      invalidInput();
      cout << endl;
    }
  }

  return 0;
}