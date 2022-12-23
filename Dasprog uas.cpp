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












