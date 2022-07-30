/********************************************************************************
********          OGRENCI  ADI-SOYADI........: FATIH DURMAZ              ********
*********         OGRENCİ NUMARASI...........: G191210064			    *********
********          DERS GRUBU.................: 2.Ogretim B Grubu		 ********
*********************************************************************************/

#include <iostream>
#include <Windows.h> //Sleep fonksiyonu icin gereklidir.

using namespace std;

int main()
{
	int satirnumarasi;
	int sutunnumarasi;
	int ucgenkenari1;
	int ucgenkenari2;
	cout << "5 ila 40 arasinda deger" << endl;
	cout << "satir....:";
	cin >> satirnumarasi;

	//Satir degerleri 5 ile 15 (5 ve 15 dahil) araliginda olmak zorundadir.
	while (satirnumarasi < 5 || satirnumarasi > 15)
	{
		cout << endl << "satir numarasi hatali....Tekrar Deneyin....." << endl;
		cout << endl << "satir....:";
		cin >> satirnumarasi;
	}

	cout << endl;
	
	cout << "sutun....:";
	cin >> sutunnumarasi;
	
	//Sutun degerleri 5 ile 40 (5 ve 40 dahil) araliginda olmak zorundadir.
	while (sutunnumarasi < 5 || sutunnumarasi > 40)
	{
		cout << endl << "sutun numarasi hatali....Tekrar Deneyin....." << endl;
		cout << endl << "sutun....:";
		cin >> sutunnumarasi;
	}

	//Sutun degeri satir degerinin iki kati olmalidir.
	while (satirnumarasi * 2 != sutunnumarasi)
	{
		cout << endl << endl;
		cout << "sutun sayisi satir sayisinin iki kati olmalidir.....Tekrar Deneyin....." << endl;
		//Sutun degeri satir degerinin iki kati olmalidigi icin program basa donmelidir.	

		cout << endl << "satir....:";
		cin >> satirnumarasi;
		//Satir degerleri 5 ile 15 (5 ve 15 dahil) araliginda olmak zorundadir.	    
		while (satirnumarasi < 5 || satirnumarasi > 15)
		{
			cout << endl << "satir numarasi hatali....Tekrar Deneyin....." << endl;
			cout << endl << "satir....:";
			cin >> satirnumarasi;
		}

		cout << endl << "sutun....:";
		cin >> sutunnumarasi;
		//Sutun degerleri 5 ile 40 (5 ve 40 dahil) araliginda olmak zorundadir.	
		while (sutunnumarasi < 5 || sutunnumarasi > 40)
		{
			cout << endl << "sutun numarasi hatali....Tekrar Deneyin....." << endl;
			cout << endl << "sutun....:";
			cin >> sutunnumarasi;
		}
	}

	cout << endl << endl;

	ucgenkenari1 = satirnumarasi - 1;
	ucgenkenari2 = satirnumarasi;

	//satirnumarasi = i , sutunnumarasi = j.

	//Girilen degere gore satirlari olusturur.
	for (int i = 0; i < satirnumarasi; i++)
	{
		//Girilen degere gore sutunlari olusturur.
		for (int j = 0; j < sutunnumarasi; j++)
		{
			//Asagidaki kisim ucgenin etrafindaki cerceveyi olusturur.
			if (i == 0 || i == satirnumarasi - 1 || j == 0 || j == sutunnumarasi - 1)
				cout << "*";
			//Asagidaki kisim ise ikizkenar ucgenin esit kenarlarini olusturur.	
			else if (j == ucgenkenari1 || j == ucgenkenari2)
				cout << "*";
			//Bu kisimda da	cerceve ve ucgenin disindaki yerleri bosluk ile doldurur.							
			else
				cout << " ";
		}

		ucgenkenari1--;
		ucgenkenari2++;
		cout << endl;
		Sleep(100);
	}

	cout << endl << endl;

	//Girilen degere gore satirlari olusturur.		
	for (int i = 0; i < satirnumarasi; i++)
	{
		//Girilen degere gore sutunlari olusturur.
		for (int j = 0; j < sutunnumarasi; j++)
		{
			//Asagidaki kisim ucgenin etrafindaki cerceveyi olusturur.
			if (i == 0 || i == satirnumarasi - 1 || j == 0 || j == sutunnumarasi - 1)
				cout << "*";
			//Asagidaki kisim ise ikizkenar ucgenin esit kenarlarini olusturur.	
			else if (j == (ucgenkenari1 + 1) || j == (ucgenkenari2 - 1))
				cout << "*";
			//Bu kisimda da	cerceve ve ucgenin disindaki yerleri bosluk ile doldurur.				
			else
				cout << " ";
		}

		ucgenkenari1++;
		ucgenkenari2--;
		cout << endl;
		Sleep(100);
	}

	system("pause");
	return 0;
}
