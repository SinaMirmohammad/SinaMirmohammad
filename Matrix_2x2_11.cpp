// Matrix_2x2_11.cpp : Defines the entry point for the console application.
//Coding By SinaMirmohammad, MohammadShadRazi, SinaSayadi.
// Ayandegan_University.
//Matrix_2x2
//cout << "███╗   ███╗ █████╗ ████████╗██████╗ ██╗██╗  ██╗    ██████╗ ██╗  ██╗██████╗   " << endl; Sleep(100); system("color 02");
//cout << "████╗ ████║██╔══██╗╚══██╔══╝██╔══██╗██║╚██╗██╔╝    ╚════██╗╚██╗██╔╝╚════██╗  " << endl; Sleep(200); system("color 03");
//cout << "██╔████╔██║███████║   ██║   ██████╔╝██║ ╚███╔╝      █████╔╝ ╚███╔╝  █████╔╝  " << endl; Sleep(100); system("color 09");
//cout << "██║╚██╔╝██║██╔══██║   ██║   ██╔══██╗██║ ██╔██╗     ██╔═══╝  ██╔██╗ ██╔═══╝   " << endl; Sleep(200); system("color 02");
//cout << "██║ ╚═╝ ██║██║  ██║   ██║   ██║  ██║██║██╔╝ ██╗    ███████╗██╔╝ ██╗███████╗  " << endl; Sleep(100); system("color 03");
//cout << "╚═╝     ╚═╝╚═╝  ╚═╝   ╚═╝   ╚═╝  ╚═╝╚═╝╚═╝  ╚═╝    ╚══════╝╚═╝  ╚═╝╚══════╝  " << endl; Sleep(200); system("color 09");

#include "stdafx.h"
#include<iostream>
#include<conio.h>
#include<windows.h> //for Add color and clear Command or Power shell.
using namespace std;

//A--------------------------
class Matrix_2x2 // Define Matrix 2x2
{
private: //Private
	float matrix[2][2];
	float matrix_Transpose[2][2], Inverse_Of_Matrix[2][2], New_Matrix[2][2],
		Sum_Of_Values = 0, Subtract_of_Matrix = 0, Multiplication_Of_Matrix = 1,
		Deuterminant_Of_Matrix = 0, Deuterminant_Inverse = 0;
	string New_Matrix_Name;
	
	int i, j, x, y;

public: //Public

	void Set_Matrix_values();
	void Sum_Matrix();
	void Subtract_Matrix();
	void Multiplication_Matrix();
	void Transpose();
	void Deuterminant_Matrix();
	void Inverse_Matrix();
	bool Is_Singular();
	void Copy_Matrix();
	void Print_Matrix();
};

//B--------------------------
void Matrix_2x2::Set_Matrix_values() //Set Value
{
	system("color 3B");
	//	for (i = 0; i < x; i++)
	//  {
	//	for (j = 0; j < y; j++)
	//	{
	//		matrix[i][j] = 0;
	//	}
	//  }
	matrix[0][0] = 0.0;
	matrix[0][1] = 0.0;
	matrix[1][0] = 0.0;
	matrix[1][1] = 0.0;
	cout << "Enter the rows value => "; // matrix[2][2] , x = 2
	cin >> x;
	cout << "Enter the columns value => "; // y = 2
	cin >> y;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			system("cls");
			cout << "[" << matrix[0][0] << "]" << " | " << "[" << matrix[0][1] << "]" << "\n" << "[" << matrix[1][0] << "]" << " | " << "[" << matrix[1][1] << "]" << "\n";
			cout << "Enter Matrix Value A[" << i + 1 << "]" << "[" << j + 1 << "] ==> ";
			cin >> matrix[i][j];
		}
	}
	system("cls");
	cout << "[" << matrix[0][0] << "]" << " | " << "[" << matrix[0][1] << "]" << "\n" << "[" << matrix[1][0] << "]" << " | " << "[" << matrix[1][1] << "]" << "\n";
	Sleep(500);
}
void Matrix_2x2::Sum_Matrix() // 1-Sum Values if Matrix
{
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			Sum_Of_Values += matrix[i][j];
		}
	}
	cout << Sum_Of_Values << endl;
}
void Matrix_2x2::Subtract_Matrix() // 2-Matrix Subtract
{
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			Subtract_of_Matrix -= matrix[i][j];
		}
		cout << endl;
	}
	cout << Subtract_of_Matrix << endl;
}
void Matrix_2x2::Multiplication_Matrix() // 3-Matrix Multiply
{
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			Multiplication_Of_Matrix *= matrix[i][j];
		}
		cout << endl;
	}
	cout << Multiplication_Of_Matrix << endl;
}
void Matrix_2x2::Transpose() // 4-Matrix Transpose
{
	system("cls");
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			matrix_Transpose[i][j] = matrix[j][i];
			cout << "["<< matrix_Transpose[i][j] << "]";
		}
		cout << endl;
	}
}
void Matrix_2x2::Deuterminant_Matrix() // 5-Matrix Deuterminant
{
	Deuterminant_Of_Matrix = (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
	cout << Deuterminant_Of_Matrix;
}
void Matrix_2x2::Inverse_Matrix() // 6-Matrix Inverse
{
	Deuterminant_Of_Matrix = (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
	if (Deuterminant_Of_Matrix > 0)
	{
		Deuterminant_Inverse = 1 / Deuterminant_Of_Matrix;
		Inverse_Of_Matrix[0][0] = matrix[1][1];
		Inverse_Of_Matrix[0][1] = matrix[0][1];
		Inverse_Of_Matrix[1][0] = matrix[1][0];
		Inverse_Of_Matrix[1][1] = matrix[0][0];
		for (i = 0; i < x; i++)
		{
			for (j = 0; j < y; j++)
			{
				cout << "[" << Inverse_Of_Matrix[i][j] / Deuterminant_Of_Matrix << "]" << "\t";
			}
			cout << endl;
		}
	}
	else
		cout << "The matrix decimals are Zer0 , so there is no inverse matrix :-( " << endl;
}
bool Matrix_2x2::Is_Singular() // 7-Is_Singular
{
	Deuterminant_Of_Matrix = (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
	if (Deuterminant_Of_Matrix == 0)
		return true;
	else
		return false;
}
void Matrix_2x2::Copy_Matrix() // 8-Matrix copy
{
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			New_Matrix[i][j] = matrix[i][j];
			cout << "[" << New_Matrix[i][j] << "]" << "  ";
		}
		cout << endl;
	}
}
void Matrix_2x2::Print_Matrix() // Print Matrix
{
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			cout << "  [" << matrix[i][j] << "]";
		}
		cout << "\n";
	}
}
//C--------------------------
int main()
{  // Banner Matrix _gcl.dll
	cout << "__  __       _        _        ____       ____           " << endl; Sleep(100); system("color 20");
	cout << "| \/  | __ _| |_ _ __(_)_  __ | ___ \__  _ | ___ \       " << endl; Sleep(200); system("color 02");
	cout << "| |\/| |/ _` | __ | '__| \ \/ /   __) \ \/ / __) |       " << endl; Sleep(100); system("color 20");
	cout << "| |  | | (_| | |_| |  | |> < / __ / > < / __/            " << endl; Sleep(200); system("color 02");
	cout << "|_|  |_ | \__, _ | \__ | _|  |_ / _ / \_\ |  / _ / \_\ | " << endl << "\n"; Sleep(100); system("color 20");
	int input;
	char ch;
	Matrix_2x2 m;
	m.Set_Matrix_values();
	do
	{
		//Loading Banner-Sina_10010101001001
		Sleep(650);
		system("cls");
		//-------------------------------------------------------------
		system("color 3E");
		system("cls");
		cout << ">--------------------------------------<" << endl;
		Sleep(100);
		system("cls");
		cout << ">>------------------------------------<<" << endl;
		Sleep(100);
		system("cls");
		cout << ">>>----------------------------------<<<" << endl;
		Sleep(100);
		system("cls");
		cout << ">>>>--------------------------------<<<<" << endl;
		Sleep(100);
		system("cls");
		cout << ">>>>>------------------------------<<<<<" << endl;
		Sleep(100);
		system("cls");
		cout << ">>>>>>----------------------------<<<<<<" << endl;
		Sleep(100);
		system("cls");
		cout << ">>>>>>>--------------------------<<<<<<<" << endl;
		Sleep(100);
		system("cls");
		cout << ">>>>>>>>------------------------<<<<<<<<" << endl;
		Sleep(100);
		system("cls");
		cout << ">>>>>>>>>----------------------<<<<<<<<<" << endl;
		Sleep(100);
		system("cls");
		cout << ">>>>>>>>>>--------------------<<<<<<<<<<" << endl;
		Sleep(100);
		system("cls");
		cout << ">>>>>>>>>>>------------------<<<<<<<<<<<" << endl;
		Sleep(100);
		system("cls");
		cout << ">>>>>>>>>>>>----------------<<<<<<<<<<<<" << endl;
		Sleep(100);
		system("cls");
		cout << ">>>>>>>>>>>>>--------------<<<<<<<<<<<<<" << endl;
		Sleep(100);
		system("cls");
		cout << ">>>>>>>>>>>>>>------------<<<<<<<<<<<<<<" << endl;
		Sleep(100);
		system("cls");
		cout << ">>>>>>>>>>>>>>>----------<<<<<<<<<<<<<<<" << endl;
		Sleep(100);
		system("cls");
		cout << ">>>>>>>>>>>>>>>>--------<<<<<<<<<<<<<<<<" << endl;
		Sleep(100);
		system("cls");
		cout << ">>>>>>>>>>>>>>>>>------<<<<<<<<<<<<<<<<<" << endl;
		Sleep(100);
		system("cls");
		cout << ">>>>>>>>>>>>>>>>>>----<<<<<<<<<<<<<<<<<<" << endl;
		Sleep(100);
		system("cls");
		cout << ">>>>>>>>>>>>>>>>>>>--<<<<<<<<<<<<<<<<<<<" << endl;
		Sleep(100);
		system("cls");
		cout << ">>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<" << endl;
		Sleep(100);
		system("cls");
		cout << "                Loading                 " << endl;
		Sleep(400);
		cout << "                 Menu                   " << endl;
		Sleep(400);
		system("cls");
		cout << ">>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<" << endl;
		Sleep(130);
		system("cls");
		cout << ">>>>>>>>>>>>>>>>>>>--<<<<<<<<<<<<<<<<<<<" << endl;
		Sleep(290);
		system("cls");
		cout << ">>>>>>>>>>>>>>>>>>----<<<<<<<<<<<<<<<<<<" << endl;
		Sleep(280);
		system("cls");
		cout << ">>>>>>>>>>>>>>>>>------<<<<<<<<<<<<<<<<<" << endl;
		Sleep(270);
		system("cls");
		cout << ">>>>>>>>>>>>>>>>--------<<<<<<<<<<<<<<<<" << endl;
		Sleep(260);
		system("cls");
		cout << ">>>>>>>>>>>>>>>----------<<<<<<<<<<<<<<<" << endl;
		Sleep(250);
		system("cls");
		cout << ">>>>>>>>>>>>>>------------<<<<<<<<<<<<<<" << endl;
		Sleep(240);
		system("cls");
		cout << ">>>>>>>>>>>>>--------------<<<<<<<<<<<<<" << endl;
		Sleep(220);
		system("cls");
		cout << ">>>>>>>>>>>>----------------<<<<<<<<<<<<" << endl;
		Sleep(200);
		system("cls");
		cout << ">>>>>>>>>>>>----------------<<<<<<<<<<<<" << endl;
		Sleep(180);
		system("cls");
		cout << ">>>>>>>>>>--------------------<<<<<<<<<<" << endl;
		Sleep(160);
		system("cls");
		cout << ">>>>>>>>>----------------------<<<<<<<<<" << endl;
		Sleep(140);
		system("cls");
		cout << ">>>>>>>>------------------------<<<<<<<<" << endl;
		Sleep(115);
		system("cls");
		cout << ">>>>>>>--------------------------<<<<<<<" << endl;
		Sleep(110);
		system("cls");
		cout << ">>>>>>----------------------------<<<<<<" << endl;
		Sleep(90);
		system("cls");
		cout << ">>>>>------------------------------<<<<<" << endl;
		Sleep(83);
		system("cls");
		cout << ">>>>--------------------------------<<<<" << endl;
		Sleep(70);
		system("cls");
		cout << ">>>----------------------------------<<<" << endl;
		Sleep(65);
		system("cls");
		cout << ">>------------------------------------<<" << endl;
		Sleep(43);
		system("cls");
		cout << ">--------------------------------------<" << endl;
		Sleep(150);
		system("cls");
		//Banner
		system("cls");
		cout << "__  __       _        _        ____       ____           " << endl; Sleep(100); system("color 20");
		cout << "| \/  | __ _| |_ _ __(_)_  __ | ___ \__  _ | ___ \       " << endl; Sleep(200); system("color 02");
		cout << "| |\/| |/ _` | __ | '__| \ \/ /   __) \ \/ / __) |       " << endl; Sleep(100); system("color 20");
		cout << "| |  | | (_| | |_| |  | |> < / __ / > < / __/            " << endl; Sleep(200); system("color 02");
		cout << "|_|  |_ | \__, _ | \__ | _|  |_ / _ / \_\ |  / _ / \_\ | " << endl; Sleep(100); system("color 20");
		system("color 2E");
		cout << "           <<<Matrix>>>\n";
		cout << "-=-=-=-=-=-------------=--=-=-=-=->\n";
		cout << "Enter your Choice : " << endl;
		cout << "|----------------------------------|\n";
		cout << " 1-Sum Matrix                      |\n";
		cout << " 2-Subtract Matrix                 :\n";
		cout << " 3-Multiplication Matrix           |\n";
		cout << " 4-Transpose Matrix                :\n";
		cout << " 5-Deuterminant Matrix             |\n";
		cout << " 6-Inverse Matrix                  :\n";
		cout << " 7-Is Singular                     |\n";
		cout << " 8-Copy Matrix                     :\n";
		cout << " 9-Print Matrix (Display)          :\n";
		cout << " 10-Builders                       |\n";
		cout << "|----------------------------------|\n";
		cout << " E"; Sleep(110); cout << "n"; Sleep(110); cout << "t"; Sleep(110); cout << "e"; Sleep(110); cout << "r ";
		Sleep(110); cout << "="; Sleep(210); cout << "="; Sleep(210); cout << "="; Sleep(210); cout << "="; Sleep(110); cout << "> ";
		cin >> input;
		switch (input)
		{
		case 1: // Sum
			system("cls");
			cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n";
			cout << "Sum of Values Matrix is ==> "; 
			m.Sum_Matrix();

			break;
		case 2: // Subtract
			system("cls");
			cout << "Subtract of Matrix is ==> ";
			m.Subtract_Matrix(); break;
		case 3: // Multiply
			system("cls");
			cout << "Multiplication Of Matrixis ==> ";
			m.Multiplication_Matrix(); break;
		case 4: // Transpose
			m.Transpose();
			cout << "The Transpose of Matrix is highlighted above ^" << endl;
			break;
		case 5: // Deuterminant
			system("cls");
			cout << "Deuterminant of Matrix Is => "; 
			m.Deuterminant_Matrix();
			break;
		case 6: // Inverse
			system("cls");
			m.Inverse_Matrix(); break;
		case 7: // Singular
			system("cls");
			m.Is_Singular(); break;
		case 8: // Copy
			system("cls");
			cout << "The copying Matrix value in new [Matrix] \n";
			m.Copy_Matrix(); break;
		case 9:
			system("cls");
			cout << "Display Matrix \n";
			m.Print_Matrix(); break;
		case 10: // Builders
			system("cls");
			system("color 02");
			cout << "B"; Sleep(210); cout << "u"; Sleep(210); cout << "i"; Sleep(110); cout << "l"; Sleep(210); cout << "d"; Sleep(210); cout << "e"; Sleep(110); cout << "r"; Sleep(210);
			cout << "s:>  \n"; Sleep(210);
			cout << "Si"; Sleep(210); cout << "a"; Sleep(110); cout << "Mirm"; Sleep(210); cout << "ohammad\n"; Sleep(110); system("color 03"); Sleep(400); system("color 02"); cout << "S"; Sleep(210);
			cout << "i"; Sleep(110); cout << "na"; Sleep(110); cout << "sa"; Sleep(210); cout << "ya"; Sleep(110); cout << "di \n"; Sleep(110); system("color 04"); Sleep(400); system("color 02");
			cout << "Moh"; Sleep(210); cout << "amma"; Sleep(110); cout << "dShad"; Sleep(110); cout << "Razi\n\n"; Sleep(210); system("color 09"); Sleep(500); system("color 02"); break;

		default: // Banner Error Input
			system("cls");
			system("color 40");
			cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
			cout << "Invalid Input,Please Try Now" << endl;
			cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
		}
		cout << "\n Do another y/n? ";
		cin >> ch;
	} while (ch != 'n');
	cout << "\n";
	system("PAUSE"); // Or Getch . PAUSE bEST.
	return 0;
}