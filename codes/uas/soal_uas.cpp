/**
 * @brief Soal Praktikum Struktur Data
 *
 * Buatlah sebuah program administrasi KTP menggunakan Struct,
 * dengan jumlah data yang ditentukan oleh user, dengan user
 * dapat melakukan insert data baru, update data yang sudah ada,
 * delete data dan menampilkan data.
 *
 * Kirim ke m.bahrul_ulum@esaunggul.ac.id
 * subject: NIM_Nama_UAS Struktur Data
 *
 * Due date 24 Juli 2022 23.55
 */

#include <iostream>
#include <limits>
#include <vector>

using namespace std;

/**
 * Penduduk adalah Struct yang berisi data dari penduduk
 * berdasarkan pada kTP.
 */
struct Penduduk
{
  int id;
  string no_ktp;
  string nama;
  string tempat_lahir;
  string tgl_lahir;
  string jenis_kelamin;
  string goldar;
  string alamat;
  string agama;
  string status_perkawinan;
  string pekerjaan;
  string kewarganegaraan;
};

// data_penduduk merupakan sebuah vector yang berisi Struct Penduduk
vector<Penduduk> data_penduduk;

// Function untuk clear command history dan menampilkan
// output Pilihan Menu Tidak Valid!
void invalidMenu()
{
  system("clear");
  puts("Pilihan Menu Tidak Valid!\n");
  cin.clear();
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

// Function untuk melakukan pengecekan terhadap vector data_penduduk
// dengan mengembalikan nilai boolean apakah kosong (true) atau
// memiliki isi (false)
//
// Jika tidak ada, maka akan menampilkan output Data Kosong!
bool isEmpty(string from)
{
  if (data_penduduk.size() == 0)
  {
    printf("%s - %s\n\n", from.c_str(), "Data Kosong!");
    return true;
  }
  return false;
}

// Function yang menerima dan mengiterasi vector data_penduduk
// serta menampilkan output dari data_penduduk yang ada
// dengan format yang telah ditentukan.
//
// Contoh format output:
// 1. Nama Penduduk 1 - Nomor KTP 1
// 2. Nama Penduduk 2 - Nomor KTP 2
// dst.
void showPendudukList(vector<Penduduk> list)
{
  for (int i = 0; i < list.size(); i++)
  {
    string nama = list[i].nama.c_str();
    string no_ktp = list[i].no_ktp.c_str();
    printf("%d. %s - %s\n", i + 1, nama, no_ktp);
  }
  printf("\n");
}

// Function yang menerima dan menampilkan seluruh variabel
// dari satu data Penduduk dalam vector data_penduduk.
void showPendudukDetail(Penduduk data)
{
  printf("Detail Data Penduduk\n");
  printf("Nomor KTP: %s\n", data.no_ktp.c_str());
  printf("Nama: %s\n", data.nama.c_str());
  printf("Tempat Lahir: %s\n", data.tempat_lahir.c_str());
  printf("Tanggal Lahir: %s\n", data.tgl_lahir.c_str());
  printf("Jenis Kelamin: %s\n", data.jenis_kelamin.c_str());
  printf("Golongan Darah: %s\n", data.goldar.c_str());
  printf("Alamat: %s\n", data.alamat.c_str());
  printf("Agama: %s\n", data.agama.c_str());
  printf("Status Perkawinan: %s\n", data.status_perkawinan.c_str());
  printf("Pekerjaan: %s\n", data.pekerjaan.c_str());
  printf("Kewarganegaraan (WNI/WNA): %s\n", data.kewarganegaraan.c_str());
  printf("\n\n");
}

// Function untuk menu Tambah Data Penduduk
void inputData()
{
  // Variabel Struct untuk menyimpan data baru
  Penduduk data;
  // Variabel untuk menerima inputan user
  string input;

  // Method pendukung dari cin agar getline() dapat
  // menggunakan satu variabel untuk menerima inputan user.
  cin.clear();
  cin.sync();
  cin.ignore();

  // Menampilkan Judul
  printf("Tambahkan Data Penduduk Baru\n");

  // Input Nomor KTP ke variabel data.no_ktp
  printf("Nomor KTP: ");
  getline(cin, input);
  data.no_ktp = input;

  // Input Nama ke variabel data.nama
  printf("Nama: ");
  getline(cin, input);
  data.nama = input;

  // Input Tempat Lahir ke variabel data.tempat_lahir
  printf("Tempat Lahir: ");
  getline(cin, input);
  data.tempat_lahir = input;

  // Input Tanggal Lahir ke variabel data.tgl_lahir
  printf("Tanggal Lahir: ");
  getline(cin, input);
  data.tgl_lahir = input;

  // Input Jenis Kelamin ke variabel data.jenis_kelamin
  printf("Jenis Kelamin: ");
  getline(cin, input);
  data.jenis_kelamin = input;

  // Input Golongan Darah ke variabel data.goldar
  printf("Golongan Darah: ");
  getline(cin, input);
  data.goldar = input;

  // Input Alamat ke variabel data.alamat
  printf("Alamat: ");
  getline(cin, input);
  data.alamat = input;

  // Input Agama ke variabel data.agama
  printf("Agama: ");
  getline(cin, input);
  data.agama = input;

  // Input Status Perkawinan ke variabel data.status_perkawinan
  printf("Status Perkawinan: ");
  getline(cin, input);
  data.status_perkawinan = input;

  // Input Pekerjaan ke variabel data.pekerjaan
  printf("Pekerjaan: ");
  getline(cin, input);
  data.pekerjaan = input;

  // Input Kewarganegaraan ke variabel data.kewarganegaraan
  printf("Kewarganegaraan (WNI / WNA): ");
  getline(cin, input);
  data.kewarganegaraan = input;

  // Menambahkan data baru ke vector data_penduduk
  data_penduduk.push_back(data);

  // Reset tampilan dan menampilkan output Data Berhasil Ditambahkan!
  system("clear");
  printf("Data Berhasil Ditambahkan!\n\n");
}

// Function untuk menu Update Data Penduduk
void updateData()
{
  // Melakukan pengecekan terhadap vector data_penduduk.
  // Jika kosong, maka akan menampilkan output Data Kosong!
  // dan keluar dari function.
  if (isEmpty("Update Data Penduduk"))
    return;

  // Menampilkan judul menu Update Data Penduduk
  printf("Update Data Penduduk\n");

  // Variabel untuk menyimpan inputan user
  string no_ktp;
  int index = -1;
  int update_menu;

  // Mencari data yang akan diupdate dengan memasukkan Nomor KTP
  printf("Nomor KTP: ");
  cin >> no_ktp;

  // Mencari data pada vector data_penduduk dengan Nomor KTP yang diinputkan
  for (int i = 0; i < data_penduduk.size(); i++)
  {
    if (data_penduduk[i].no_ktp == no_ktp)
    {
      index = i;
      break;
    }
  }

  // Reset tampilan output
  system("clear");

  if (index == -1)
  {
    // Jika variabel index tidak berubah artinya data tidak ditemukan,
    // dan akan menampilkan output Data Tidak Ditemukan!
    printf("Data Tidak Ditemukan!\n\n");
  }
  else
  {
    // Jika data ditemukan, maka variabel index akan diisi dengan
    // index data yang ditemukan.

    // Variabel untuk menyimpan data pilihan sesuai index yang akan diupdate
    Penduduk data = data_penduduk[index];
    // Variabel untuk menerima inputan user
    string inputString;

    // Method pendukung dari cin agar getline() dapat
    // menggunakan satu variabel untuk menerima inputan user.
    cin.clear();
    cin.sync();
    cin.ignore();

    // Menampilkan seluruh variabel dalam struct data Penduduk
    showPendudukDetail(data);

    // Menampilkan pembatas menu beserta instruksi
    printf("=========== UPDATING DATA ==========\n");
    printf("( Kosongi bila tidak ingin diganti )\n\n");

    // Menampilkan variabel apa yang akan diupdate dan nilai awalnya
    printf("%s - (%s): ", "1. Nama", data.nama.c_str());
    getline(cin, inputString);
    if (!inputString.empty())
    {
      // Variabel nama dalam struct data Penduduk
      // hanya akan diupdate dengan inputan user hanya jika diisi.
      // Apabila di skip/tidak diisi, maka nilainya tidak berubah.
      data_penduduk[index].nama = inputString;
    }

    // Menampilkan variabel apa yang akan diupdate dan nilai awalnya
    printf("%s - (%s): ", "2. Tempat Lahir", data.tempat_lahir.c_str());
    getline(cin, inputString);
    if (!inputString.empty())
    {
      // Variabel tempat_lahir dalam struct data Penduduk
      // hanya akan diupdate dengan inputan user hanya jika diisi.
      // Apabila di skip/tidak diisi, maka nilainya tidak berubah.
      data_penduduk[index].tempat_lahir = inputString;
    }

    // Menampilkan variabel apa yang akan diupdate dan nilai awalnya
    printf("%s - (%s): ", "3. Tanggal Lahir", data.tgl_lahir.c_str());
    getline(cin, inputString);
    if (!inputString.empty())
    {
      // Variabel tgl_lahir dalam struct data Penduduk
      // hanya akan diupdate dengan inputan user hanya jika diisi.
      // Apabila di skip/tidak diisi, maka nilainya tidak berubah.
      data_penduduk[index].tgl_lahir = inputString;
    }

    // Menampilkan variabel apa yang akan diupdate dan nilai awalnya
    printf("%s - (%s): ", "4. Jenis Kelamin", data.jenis_kelamin.c_str());
    getline(cin, inputString);
    if (!inputString.empty())
    {
      // Variabel jenis_kelamin dalam struct data Penduduk
      // hanya akan diupdate dengan inputan user hanya jika diisi.
      // Apabila di skip/tidak diisi, maka nilainya tidak berubah.
      data_penduduk[index].jenis_kelamin = inputString;
    }

    // Menampilkan variabel apa yang akan diupdate dan nilai awalnya
    printf("%s - (%s): ", "5. Golongan Darah", data.goldar.c_str());
    getline(cin, inputString);
    if (!inputString.empty())
    {
      // Variabel goldar dalam struct data Penduduk
      // hanya akan diupdate dengan inputan user hanya jika diisi.
      // Apabila di skip/tidak diisi, maka nilainya tidak berubah.
      data_penduduk[index].goldar = inputString;
    }

    // Menampilkan variabel apa yang akan diupdate dan nilai awalnya
    printf("%s - (%s): ", "6. Alamat", data.alamat.c_str());
    getline(cin, inputString);
    if (!inputString.empty())
    {
      // Variabel alamat dalam struct data Penduduk
      // hanya akan diupdate dengan inputan user hanya jika diisi.
      // Apabila di skip/tidak diisi, maka nilainya tidak berubah.
      data_penduduk[index].alamat = inputString;
    }

    // Menampilkan variabel apa yang akan diupdate dan nilai awalnya
    printf("%s - (%s): ", "7. Agama", data.agama.c_str());
    getline(cin, inputString);
    if (!inputString.empty())
    {
      // Variabel agama dalam struct data Penduduk
      // hanya akan diupdate dengan inputan user hanya jika diisi.
      // Apabila di skip/tidak diisi, maka nilainya tidak berubah.
      data_penduduk[index].agama = inputString;
    }

    // Menampilkan variabel apa yang akan diupdate dan nilai awalnya
    printf("%s - (%s): ", "8. Status Perkawinan", data.status_perkawinan.c_str());
    getline(cin, inputString);
    if (!inputString.empty())
    {
      // Variabel status_perkawinan dalam struct data Penduduk
      // hanya akan diupdate dengan inputan user hanya jika diisi.
      // Apabila di skip/tidak diisi, maka nilainya tidak berubah.
      data_penduduk[index].status_perkawinan = inputString;
    }

    // Menampilkan variabel apa yang akan diupdate dan nilai awalnya
    printf("%s - (%s): ", "9. Pekerjaan", data.pekerjaan.c_str());
    getline(cin, inputString);
    if (!inputString.empty())
    {
      // Variabel pekerjaan dalam struct data Penduduk
      // hanya akan diupdate dengan inputan user hanya jika diisi.
      // Apabila di skip/tidak diisi, maka nilainya tidak berubah.
      data_penduduk[index].pekerjaan = inputString;
    }

    // Menampilkan variabel apa yang akan diupdate dan nilai awalnya
    printf("%s - (%s): ", "10. Kewarganegaraan", data.kewarganegaraan.c_str());
    getline(cin, inputString);
    if (!inputString.empty())
    {
      // Variabel kewarganegaraan dalam struct data Penduduk
      // hanya akan diupdate dengan inputan user hanya jika diisi.
      // Apabila di skip/tidak diisi, maka nilainya tidak berubah.
      data_penduduk[index].kewarganegaraan = inputString;
    }

    // Menampilkan variabel apa yang akan diupdate dan nilai awalnya
    printf("%s - (%s): ", "11. Nomor KTP", data.no_ktp.c_str());
    getline(cin, inputString);
    if (!inputString.empty())
    {
      // Variabel no_ktp dalam struct data Penduduk
      // hanya akan diupdate dengan inputan user hanya jika diisi.
      // Apabila di skip/tidak diisi, maka nilainya tidak berubah.
      data_penduduk[index].no_ktp = inputString;
    }

    // Reset tampilan dan menampilkan output Data Berhasil Diupdate!
    system("clear");
    puts("Data Berhasil Diupdate!\n");
  }
}

// Function untuk menu Delete Data Penduduk
void deleteData()
{
  // Melakukan pengecekan terhadap vector data_penduduk.
  // Jika kosong, maka akan menampilkan output Data Kosong!
  // dan keluar dari function.
  if (isEmpty("Hapus Data Penduduk"))
    return;

  // Variabeist untuk menyimpan inputan user
  int deleted_index;
  char delete_confirm;

  // Menampilkan seluruh data yang ada di dalam vector data_penduduk
  showPendudukList(data_penduduk);

  // Inputan user untuk mengambil index data yang akan dihapus.
  printf("Pilih data yang ingin di hapus\n");
  printf("(Masukkan 0 untuk kembali): ");
  cin >> deleted_index;

  if (deleted_index == 0)
  {
    // Jika index yang dipilih 0 maka kembali ke menu utama.
    return;
  }
  else if (deleted_index > 0 && deleted_index <= data_penduduk.size())
  {
    // Jika index yang dipilih lebih dari 0 dan
    // kurang dari atau sama dengan jumlah data yang ada,
    // maka akan menampilkan input konfirmasi penghapusan data.
    printf("Apakah anda yakin ingin menghapus data ini? (y/n): ");
    cin >> delete_confirm;

    // Reset tampilan
    system("clear");

    if (delete_confirm == 'y' || delete_confirm == 'Y')
    {
      // Jika inputan user mengandung huruf 'y' atau 'Y',
      // maka akan menghapus data sesuai index yang dipilih
      // dan menampilkan output Data Berhasil Dihapus!
      // serta kembali ke menu utama.
      data_penduduk.erase(data_penduduk.begin() + deleted_index - 1);
      printf("Data Berhasil di Hapus!\n\n");
    }
    else
    {
      // Jika inputan user mengandung huruf 'n' atau 'N',
      // maka akan menampilkan output Data Tidak Jadi Dihapus!
      // dan kembali ke menu utama.
      printf("Data Batal di Hapus!\n\n");
    }
  }
  else
  {
    // Jika index yang dipilih tidak sesuai dengan data yang ada,
    // maka akan menampilkan output Pilihan Menu Tidak Valid!
    invalidMenu();
  }
}

// Function untuk menu Tampilkan Data Penduduk
// yang menerima parameter vector data_penduduk
void showData()
{
  // Melakukan pengecekan terhadap vector data_penduduk.
  // Jika kosong, maka akan menampilkan output Data Kosong!
  // dan keluar dari function.
  if (isEmpty("Tampilkan Data Penduduk"))
    return;

  // Variabel untuk menyimpan inputan user
  int detail_index;

  // Menampilkan seluruh data yang ada di dalam vector data_penduduk
  showPendudukList(data_penduduk);

  // Inputan user untuk mengambil index data yang akan ditampilkan.
  printf("Pilih data yang ingin dilihat\n");
  printf("(Masukkan 0 untuk kembali): ");
  cin >> detail_index;

  // Reset tampilan
  system("clear");

  if (detail_index == 0)
  {
    // Jika index yang dipilih 0 maka kembali ke menu utama.
    return;
  }
  else if (detail_index > 0 && detail_index <= data_penduduk.size())
  {
    // Jika index yang dipilih lebih dari 0 dan
    // kurang dari atau sama dengan jumlah data yang ada,
    // maka akan menampilkan detail data Penduduk sesuai index pilihan.
    showPendudukDetail(data_penduduk[detail_index - 1]);
  }
  else
  {
    // Jika index yang dipilih tidak sesuai dengan data yang ada,
    // maka akan menampilkan output Pilihan Menu Tidak Valid!
    invalidMenu();
  }
}

int main()
{
  // Reset Tampilan setiap kali program dijalankan
  system("clear");

  // Variabel untuk mengetahui total data yang ada
  // di dalam vector data_penduduk
  string total_data = to_string(data_penduduk.size()).c_str();
  // Variabel untuk menyimpan inputan user
  int menu;

  // Iterasi untuk menampilkan menu utama dan mengambil inputan user
  while (menu != 0)
  {
    printf("\t APLIKASI KEPENDUDUKAN \n");
    printf("\t=======================\n");
    printf("Menu: \n");
    puts("1. Tambah Data Penduduk");
    puts("2. Update Data Penduduk");
    puts("3. Hapus Data Penduduk");
    printf("%s (%s)\n", "4. Tampilkan Data Penduduk", total_data);
    puts("0. Keluar");
    printf("Menu pilihan Anda: ");

    if (cin >> menu)
    {
      // Reset tampilan setiap kali selesai mengambil inputan user
      // untuk kemudian masuk ke dalam sub menu.
      system("clear");

      // Menampilkan output Menu Pilihan sesuai dengan inputan user.
      switch (menu)
      {
      case 1:
        inputData();
        break;
      case 2:
        updateData();
        break;
      case 3:
        deleteData();
        break;
      case 4:
        showData();
        break;
      case 0:
        puts("GoodBye!\n");
        break;
      default:
        invalidMenu();
      }
    }
    else
    {
      // Jika input gagal maka reset tampilan dan tampilkan
      // output Pilihan Menu Tidak Valid!
      system("clear");
      invalidMenu();
    }
  };

  return 0;
}
