// Matrix_2x2_10.cpp : Defines the entry point for the console application.
//Coding By SinaMirmohammad.
//Sharif University(Computer Olympiad)_Hacker ZONE.
//Matrix_2x2

#include "stdafx.h"
#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;

//A--------------------------
class Matrix_2x2
{
	float matrix[2][2], matrix_Transpose[2][2], Inverse_Of_Matrix[2][2], Copy_Of_Matrix[2][2],
		Sum_Of_Values = 0, Subtract_of_Matrix = 0, Multiplication_Of_Matrix = 1,
		Deuterminant_Of_Matrix = 0, Deuterminant_Inverse = 0;
	int i, j, x, y;

public:

	void Set_Matrix_values();
	void Sum_Matrix();
	void Subtract_Matrix();
	void Multiplication_Matrix();
	void Transpose();
	void Deuterminant_Matrix();
	void Inverse_Matrix();
	bool Is_Singular();
	void Copy_Matrix();
private:

};

//B--------------------------
void Matrix_2x2::Set_Matrix_values()
{
	cout << "Enter the rows => ";
	cin >> x;
	cout << "Enter the columns => ";
	cin >> y;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			system("cls");
			cout << "Enter Matrix Value A[" << i+1 << "]" << "[" << j+1 << "] ==> ";
			cin >> matrix[i][j];
		}
	}
}
void Matrix_2x2::Sum_Matrix()
{
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			Sum_Of_Values += matrix[i][j];
		}
	}
	system("cls");
	cout << "Sum of Values Matrix is ==> (" << Sum_Of_Values << ")" << endl;
}
void Matrix_2x2::Subtract_Matrix()
{
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			Subtract_of_Matrix -= matrix[i][j];
		}
		cout << endl;
	}
	system("cls");
	cout << "Subtract of Matrix is ==> (" << Subtract_of_Matrix << ")" << endl;
}
void Matrix_2x2::Multiplication_Matrix()
{
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			Multiplication_Of_Matrix *= matrix[i][j];
		}
		cout << endl;
	}
	system("cls");
	cout << "Multiplication Of Matrixis ==> (" << Multiplication_Of_Matrix << ")" << endl;
}
void Matrix_2x2::Transpose()
{
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			matrix_Transpose[i][j] = matrix[j][i];
			cout << matrix_Transpose[i][j] << "";
		}
		cout << endl;
	}
	cout << "The Transpose of Matrix is highlighted above ^" << endl;
}
void Matrix_2x2::Deuterminant_Matrix()
{
	Deuterminant_Of_Matrix = (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
	system("cls");
	cout << "Deuterminant of Matrix Is => (" << Deuterminant_Of_Matrix << ")";
}
void Matrix_2x2::Inverse_Matrix()
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
				cout << Inverse_Of_Matrix[i][j] / Deuterminant_Of_Matrix << "";
			}
			cout << endl;
		}
	}
	else
		cout << "The matrix decimals are Zer0 , so there is no inverse matrix :-( " << endl;
}
bool Matrix_2x2::Is_Singular()
{
	Deuterminant_Of_Matrix = (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
	if (Deuterminant_Of_Matrix == 0)
		return true;
	else
		return false;
}
void Matrix_2x2::Copy_Matrix()
{
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			Copy_Of_Matrix[i][j] = matrix[i][j];
			cout << Copy_Of_Matrix[i][j] << "";
		}
		cout << endl;
	}
}

//C--------------------------
int main()
{
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
		cout << "             SinaMirMohammad            " << endl;
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
		system("color 02");
		cout << "        SinaMirMohammad\n";
		cout << "-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=->\n";
		cout << "Enter your Choice : " << endl;
		cout << "|---------------------------------|\n";
		cout << "1-Sum Matrix\n";
		cout << "2-Subtract Matrix\n";
		cout << "3-Multiplication Matrix\n";
		cout << "4-Transpose Matrix\n";
		cout << "5-Deuterminant Matrix\n";
		cout << "6-Inverse Matrix\n";
		cout << "7-Is Singular\n";
		cout << "8-Copy Matrix\n";
		cout << "|---------------------------------|\n";
		cout << "Enter ==> "; cin >> input;
		switch (input)
		{
		case 1:
			m.Sum_Matrix(); break;
		case 2:
			m.Subtract_Matrix(); break;
		case 3:
			m.Multiplication_Matrix(); break;
		case 4:
			m.Transpose(); break;
		case 5:
			m.Deuterminant_Matrix(); break;
		case 6:
			m.Inverse_Matrix(); break;
		case 7:
			m.Is_Singular(); break;
		case 8:
			m.Copy_Matrix(); break;
		default:
			system("cls");
			system("color 40");
			cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
			cout << "Invalid Input,Please Try Now" << endl;
			cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
		}
		cout << "\n Do another y/n?";
		cin >> ch;
	} while (ch != 'n');
	cout << "\n";
	system("PAUSE");
	return 0;
}