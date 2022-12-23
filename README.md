Nama: Zulfan Al-Zahwan Putra Ashadi <br>
NIM: 1227050138
<br>Jurusan		:[Teknik Informatika](http://if.uinsgd.ac.id/) 
<br>[UIN Sunan Gunung Djati Bandung](https://uinsgd.ac.id/)<br>
Mata Kuliah Dasar Pemograman <br>

## Deskripsi Umum
Tema dari source code ini adalah untuk: <br>
Membuat array 2 dimensi yang dapat mengubah sebuah kolom menjadi baris dan sebaliknya <br>
Juga dapat mencari bilangan yang habis dibagi jika dibagi oleh angka 3,5,dan 7. <br>

Algoritma dari source code ini: <br>

<ol>
<li>User menginputkan berapa banyak baris pada array yang akan dimasukan </li>
<li>User menginputkan berapa banyak kolom pada array yang akan dimasukan</li>
<li>User menginputkan nilai satu persatu pada array,dimulai dari baris 1 dan kolom 1.</li>
<li>Setelah nilai-nilai di input, Nilai dalam array tersebut di tampilkan sesuai aturan matriks.</li>
<li>Kemudian nilai dicek kembali apakah nilai tersebut dapat habis jika dibagi 3,5 dan 7.</li>
<li>Jika nilai habis dibagi 3,5 dan 7, nilai akan ditampilkan kepada user. Jika tidak habis, nilai tidak akan ditampilkan kembali kepada user</li>
</ol>

## Source code
<code>
#include <iostream>
using namespace std;
 int main () {
cout << "Nama	: Zulfan Al-Zahwan Putra Ashadi"<<endl;
cout << "NIM	: 1227050138"<<endl;
cout<<"==========================================================================================="<<endl;
cout <<" Input banyaknya baris dan kolom, kemudian tukar kolom jadi baris dan sebaliknya"<<endl;
cout <<"==========================================================================================="<<endl<<endl;

 int nilai[100][100];
  int baris, kolom, i, j;
 
  cout << "Input jumlah baris matriks: ";
  cin >> baris;
 
  cout << "Input jumlah kolom matriks: ";
  cin >> kolom;
  cout << endl;
 
  // proses input array
  for(i = 0; i < baris ; i++){
    for(j = 0; j < kolom; j++){
      cout << "Baris " <<i+1<<", kolom "<<j+1<< " = ";
      cin >> nilai[i][j];
    }
    cout << endl;
  }
 
  cout << "Hasil matriks normal " << endl<<endl;
 
  // menampilkan array
  for(i = 0; i < baris ; i++){
    for(j = 0; j < kolom; j++){
      cout  << nilai[i][j] << " ";
    }
    cout <<endl;
  }
   cout <<endl<< "Hasil matriks yang ditukar"<<endl<<endl;
   for(i = 0; i < kolom ; i++){
    for(j = 0; j < baris; j++){
      cout  << nilai[j][i] << " ";
    }
    cout << endl;
  }

  cout <<endl<<"================================================================================================="<<endl;
  cout <<"Pada array 2 dimensi, Input angka-angka kemudian di tampilkan bilangan yang habis dibagi 3,5,7 "<<endl;
  cout <<"================================================================================================="<<endl<<endl;
  	
  	cout << "Bilangan yang habis di bagi 3,5,7: "<<endl<<endl;
for (int i = 0; i < kolom; i++){
for (int j = 0; j < baris; j++){
if (nilai[i][j] % 3 == 0|| nilai [i][j] % 5 ==0||nilai [i][j] %7 ==0) cout << nilai[i][j] << ", "; // Mencetak bilangan yang habis di bagi 3
	}
}

  
 
  return 0;
}
</code>


# Output
![Capture](https://user-images.githubusercontent.com/118150521/209344053-ffc6d2e0-d42d-46ec-ba04-f285e3a8682d.PNG)<br>
![image](https://user-images.githubusercontent.com/118150521/209344010-d2643a27-b171-43cd-b7eb-19cdef93e36f.png)








