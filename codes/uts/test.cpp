#include <iostream>
#include <algorithm>
#include <iomanip>
#include <sstream>
#include <vector>

using namespace std;

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

class Barang
{
public:
  int id;
  string nama;
  int jumlah;
  int harga;
};
std::vector<Barang> data_barang;

// Function to put thousands
// separators in the given integer
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
  std::reverse(ans.begin(), ans.end());

  // If the given string is
  // less than 1000
  if (ans.size() % 4 == 0)
  {
    // Remove '.'
    ans.erase(ans.begin());
  }

  return ans;
}

string get_unit(int input)
{
  return input > 1 ? "pcs" : "pc";
}

void tampilkan_barang()
{
  if (data_barang.size() == 0)
  {
    cout << "Data barang kosong" << endl;
  }
  else
  {
    cout << "Daftar Barang" << endl;
    for (int i = 0; i < data_barang.size(); i++)
    {
      string nama = data_barang[i].nama;
      string unit = get_unit(data_barang[i].jumlah);
      string jumlah = " (" + thousandSeparator(data_barang[i].jumlah) + unit + ") ";
      string harga = "- Rp " + thousandSeparator(data_barang[i].harga);
      cout << i + 1 << ". " << nama << jumlah << harga << endl;
    }
  }
  cout << endl;
  cout << endl;
}

int main()
{
  int pilihan;

  while (pilihan != 0)
  {
    cout << "---------- Aplikasi Penjualan ----------" << endl;
    cout << endl;

    cout << "Selamat datang!" << endl;
    cout << "Silahkan pilih menu yang tersedia: " << endl;
    cout << "1. Input Barang Baru" << endl;
    cout << "2. Tampilkan Barang" << endl;
    cout << "3. Beli Barang" << endl;
    cout << "4. Hapus Barang" << endl;
    cout << "0. Keluar" << endl;
    cout << endl;
    cin >> pilihan;

    switch (pilihan)
    {
    case 1:
    {
      Barang barang;
      barang.id = std::time(0);

      cout << "Masukkan Nama: ";
      cin >> barang.nama;

      cout << "Masukkan Jumlah: ";
      cin >> barang.jumlah;

      cout << "Masukkan Harga: ";
      cin >> barang.harga;

      data_barang.push_back(barang);
      cout << endl;

      cout << barang.nama << " sejumlah ";
      cout << thousandSeparator(barang.jumlah) << get_unit(barang.jumlah) << " seharga Rp ";
      cout << thousandSeparator(barang.harga) << " telah ditambahkan." << endl;

      cout << endl;
      cout << endl;
      break;
    }
    case 2:
    {
      tampilkan_barang();
      break;
    }
    case 3:
    {
      if (data_barang.size() == 0)
      {
        cout << "Data barang kosong" << endl;
      }
      else
      {
        tampilkan_barang();
        int id, index, jumlah;
        Barang selected;

        cout << "Masukkan nomor barang yang ingin dibeli: ";
        cin >> index;

        if (index > data_barang.size())
        {
          cout << "Barang tidak ditemukan" << endl;
        }
        else
        {
          selected = data_barang[index - 1];

          cout << "Masukkan jumlah yang ingin dibeli: ";
          cin >> jumlah;

          if (jumlah > selected.jumlah)
          {
            cout << "Stok tidak mencukupi" << endl;
          }
          else
          {
            selected.jumlah -= jumlah;
            data_barang[index - 1] = selected;

            cout << endl;
            cout << "Barang " << selected.nama << " sejumlah ";
            cout << thousandSeparator(jumlah) << get_unit(jumlah);
            cout << " telah dibeli." << endl;
          }
        }
      }
      cout << endl;
      break;
    }
    case 4:
    {
      if (data_barang.size() == 0)
      {
        cout << "Data barang kosong" << endl;
      }
      else
      {
        int index;

        cout << "Masukkan nomor barang yang ingin dihapus: ";
        cin >> index;

        if (index > data_barang.size())
        {
          cout << "Barang tidak ditemukan" << endl;
        }
        else
        {
          data_barang.erase(data_barang.begin() + index - 1);
          cout << "Barang berhasil dihapus" << endl;
        }
      }
      cout << endl;
      break;
    }
    }
  }

  return 0;
}