#include <iostream>
#include <iomanip>
#include <string>
#include <Windows.h>
#include <MMSystem.h>
using namespace std;
string arr[5][5] ={{"1","2","3","4","5"},{"6","7","8","9","10"},{"11","12","13","14","15"},{"16","17","18","19","20"},{"21","22","23","24","25"}};
char player = 'x';
int n , a;
void Draw()
{
	system("cls");
	cout<<"\n";
	cout<<"_________________________________________________________________\n";
	for (int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cout<<"|"<<setw(6)<<arr[i][j]<<setw(6)<<"|";}
		cout<<"\n\n";
		cout<<"_________________________________________________________________\n";}
	cout<<"\n\n";}
void input()
{
	cout << "please enter your choice : ";
	
	cin >> a;

	if (a == 1)
	{
		if (arr[0][0] == "1")
			arr[0][0] = player;
		else
		{
			cout << "this num is taken \n";
			input();
		}
	}
		
	else if (a == 2)
	{
		if (arr[0][1] == "2")
			arr[0][1] = player;
		else
		{
			cout << "this num is taken \n";
			input();
		}
	}
	else if (a == 3)
	{
		if (arr[0][2] == "3")
			arr[0][2] = player;
		else
		{
			cout << "this num is taken \n";
			input();
		}
	}
	else if (a == 4)
	{
		if (arr[0][3] == "4")
			arr[0][3] = player;
		else
		{
			cout << "this num is taken \n";
			input();
		}
	}
	else if (a == 5)
	{
		if (arr[0][4] == "5")
			arr[0][4] = player;
		else
		{
			cout << "this num is taken \n";
			input();
		}
	}
	else if (a == 6)
	{
		if (arr[1][0] == "6")
			arr[1][0] = player;
		else
		{
			cout << "this num is taken \n";
			input();
		}
	}
	else if (a == 7)
	{
		if (arr[1][1] == "7")
			arr[1][1] = player;
		else
		{
			cout << "this num is taken \n";
			input();
		}
	}
	else if (a == 8)
	{
		if (arr[1][2] == "8")
			arr[1][2] = player;
		else
		{
			cout << "this num is taken \n";
			input();
		}
	}
	else if (a == 9)
	{
		if (arr[1][3] == "9")
			arr[1][3] = player;
		else
		{
			cout << "this num is taken \n";
			input();
		}
	}
	else if (a == 10)
	{
		if (arr[1][4] == "10")
			arr[1][4] = player;
		else
		{
			cout << "this num is taken \n";
			input();
		}
	}
	else if (a == 11)
		{
		if (arr[2][0] == "11")
			arr[2][0] = player;
		else
		{
			cout << "this num is taken \n";
			input();
		}
	}
	else if (a == 12)
		{
		if (arr[2][1] == "12")
			arr[2][1] = player;
		else
		{
			cout << "this num is taken \n";
			input();
		}
	}
	else if (a == 13)
		{
		if (arr[2][2] == "13")
			arr[2][2] = player;
		else
		{
			cout << "this num is taken \n";
			input();
		}
	}
	else if (a == 14)
		{
		if (arr[2][3] == "14")
			arr[2][3] = player;
		else
		{
			cout << "this num is taken \n";
			input();
		}
	}
	else if (a == 15)
		{
		if (arr[2][4] == "15")
			arr[2][4] = player;
		else
		{
			cout << "this num is taken \n";
			input();
		}
	}
	else if (a == 16)
		{
		if (arr[3][0] == "16")
			arr[3][0] = player;
		else
		{
			cout << "this num is taken \n";
			input();
		}
	}
	else if (a == 17)
		{
		if (arr[3][1] == "17")
			arr[3][1] = player;
		else
		{
			cout << "this num is taken \n";
			input();
		}
	}
	else if (a == 18)
		{
		if (arr[3][2] == "18")
			arr[3][2] = player;
		else
		{
			cout << "this num is taken \n";
			input();
		}
	}
	else if (a == 19)
		{
		if (arr[3][3] == "19")
			arr[3][3] = player;
		else
		{
			cout << "this num is taken \n";
			input();
		}
	}
	else if (a == 20)
		{
		if (arr[3][4] == "20")
			arr[3][4] = player;
		else
		{
			cout << "this num is taken \n";
			input();
		}
	}
	else if (a == 21)
		{
		if (arr[4][0] == "21")
			arr[4][0] = player;
		else
		{
			cout << "this num is taken \n";
			input();
		}
	}
	else if (a == 22)
		{
		if (arr[4][1] == "22")
			arr[4][1] = player;
		else
		{
			cout << "this num is taken \n";
			input();
		}
	}
	else if (a == 23)
		{
		if (arr[4][2] == "23")
			arr[4][2] = player;
		else
		{
			cout << "this num is taken \n";
			input();
		}
	}
	else if (a == 24)
		{
		if (arr[4][3] == "24")
			arr[4][3] = player;
		else
		{
			cout << "this num is taken \n";
			input();
		}
	}
	else if (a == 25)
		{
		if (arr[4][4] == "25")
			arr[4][4] = player;
		else
		{
			cout << "this num is taken \n";
			input();
		}
	}
	
}
char win()
{
	if (arr[0][0] == "x" && arr[0][1] == "x" && arr[0][2] == "x" && arr[0][3] == "x" && arr[0][4] == "x")
		return 'x';
	if (arr[1][0] == "x" && arr[1][1] == "x" && arr[1][2] == "x" && arr[1][3] == "x" && arr[1][4] == "x")
		return 'x';
	if (arr[2][0] == "x" && arr[2][1] == "x" && arr[2][2] == "x" && arr[2][3] == "x" && arr[2][4] == "x")
		return 'x';
	if (arr[3][0] == "x" && arr[3][1] == "x" && arr[3][2] == "x" && arr[3][3] == "x" && arr[3][4] == "x")
		return 'x';
	if (arr[4][0] == "x" && arr[4][1] == "x" && arr[4][2] == "x" && arr[4][3] == "x" && arr[4][4] == "x")
		return 'x';
	if (arr[0][0] == "x" && arr[1][1] == "x" && arr[2][2] == "x" && arr[3][3] == "x" && arr[4][4] == "x")
		return'x';
	if (arr[0][4] == "x" && arr[1][3] == "x" && arr[2][2] == "x" && arr[3][1] == "x" && arr[4][0] == "x")
		return 'x';
	if (arr[0][0] == "x" && arr[1][0] == "x" && arr[2][0] == "x" && arr[3][0] == "x" && arr[4][0] == "x")
		return 'x';
	if (arr[0][1] == "x" && arr[2][1] == "x" && arr[3][1] == "x" && arr[4][1] == "x" && arr[1][1] == "x")
		return'x';
	if (arr[0][2] == "x" && arr[1][2] == "x" && arr[2][2] == "x" && arr[3][2] == "x" && arr[4][2] == "x")
		return 'x';
	if (arr[0][3] == "x" && arr[1][3] == "x" && arr[2][3] == "x" && arr[3][3] == "x" && arr[4][3] == "x")
		return 'x';
	if (arr[0][4] == "x" && arr[1][4] == "x" && arr[2][4] == "x" && arr[3][4] == "x" && arr[4][4] == "x")
		return 'x';


	if (arr[0][0] == "o" && arr[0][1] == "o" && arr[0][2] == "o" && arr[0][3] == "o" && arr[0][4] == "o")
		return 'o';
	if (arr[1][0] == "o" && arr[1][1] == "o" && arr[1][2] == "o" && arr[1][3] == "o" && arr[1][4] == "o")
		return 'o';
	if (arr[2][0] == "o" && arr[2][1] == "o" && arr[2][2] == "o" && arr[2][3] == "o" && arr[2][4] == "o")
		return 'o';
	if (arr[3][0] == "o" && arr[3][1] == "o" && arr[3][2] == "o" && arr[3][3] == "o" && arr[3][4] == "o")
		return 'o';
	if (arr[4][0] == "o" && arr[4][1] == "o" && arr[4][2] == "o" && arr[4][3] == "o" && arr[4][4] == "o")
		return 'o';
	if (arr[0][0] == "o" && arr[1][1] == "o" && arr[2][2] == "o" && arr[3][3] == "o" && arr[4][4] == "o")
		return 'o';
	if (arr[0][4] == "o" && arr[1][3] == "o" && arr[2][2] == "o" && arr[3][1] == "o" && arr[4][0] == "o")
		return 'o';
	if (arr[0][0] == "o" && arr[1][0] == "o" && arr[2][0] == "o" && arr[3][0] == "o" && arr[4][0] == "o")
		return 'o';
	if (arr[0][1] == "o" && arr[2][1] == "o" && arr[3][1] == "o" && arr[4][1] == "o" && arr[1][1] == "o")
		return 'o';
	if (arr[0][2] == "o" && arr[1][2] == "o" && arr[2][2] == "o" && arr[3][2] == "o" && arr[4][2] == "o")
		return 'o';
	if (arr[0][3] == "o" && arr[1][3] == "o" && arr[2][3] == "o" && arr[3][3] == "o" && arr[4][3] == "o")
		return 'o';
	if (arr[0][4] == "o" && arr[1][4] == "o" && arr[2][4] == "o" && arr[3][4] == "o" && arr[4][4] == "o")
		return 'o';

	return '/';
}
void com_hard()
{
	if(arr[0][0]=="x"&&arr[1][1]=="x"&&arr[2][2]=="x"&&arr[3][3]=="x"&&arr[4][4]!="o"&&arr[4][4]!="x")				//main diagonal
		arr[4][4]='o';
	else if(arr[0][0]=="x"&&arr[1][1]=="x"&&arr[2][2]=="x"&&arr[4][4]=="x"&&arr[3][3]!="o"&&arr[3][3]!="x")
		arr[3][3]='o';
	else if(arr[0][0]=="x"&&arr[1][1]=="x"&&arr[3][3]=="x"&&arr[4][4]=="x"&&arr[2][2]!="o"&&arr[2][2]!="x")
		arr[2][2]='o';
	else if(arr[0][0]=="x"&&arr[2][2]=="x"&&arr[3][3]=="x"&&arr[4][4]=="x"&&arr[1][1]!="o"&&arr[1][1]!="x")
		arr[1][1]='o';
	else if(arr[1][1]=="x"&&arr[2][2]=="x"&&arr[3][3]=="x"&&arr[4][4]=="x"&&arr[0][0]!="o"&&arr[0][0]!="x")
		arr[0][0]='o';

	else if(arr[0][4]=="x"&&arr[1][3]=="x"&&arr[2][2]=="x"&&arr[3][1]=="x"&&arr[4][0]!="o"&&arr[4][0]!="x")			//liar diagonal
		arr[4][0]='o';
	else if(arr[0][4]=="x"&&arr[1][3]=="x"&&arr[2][2]=="x"&&arr[4][0]=="x"&&arr[3][1]!="o"&&arr[3][1]!="x")
		arr[3][1]='o';
	else if(arr[0][4]=="x"&&arr[1][3]=="x"&&arr[3][1]=="x"&&arr[4][0]=="x"&&arr[2][2]!="o"&&arr[2][2]!="x")
		arr[2][2]='o';
	else if(arr[0][4]=="x"&&arr[2][2]=="x"&&arr[3][1]=="x"&&arr[4][0]=="x"&&arr[1][3]!="o"&&arr[1][3]!="x")
		arr[1][3]='o';
	else if(arr[1][3]=="x"&&arr[2][2]=="x"&&arr[3][1]=="x"&&arr[4][0]=="x"&&arr[0][4]!="o"&&arr[0][4]!="x")
		arr[0][4]='o';

	else if(arr[0][0]=="x"&&arr[1][0]=="x"&&arr[2][0]=="x"&&arr[3][0]=="x"&&arr[4][0]!="o"&&arr[4][0]!="x")			//first column
		arr[4][0]='o';
	else if(arr[0][0]=="x"&&arr[1][0]=="x"&&arr[2][0]=="x"&&arr[4][0]=="x"&&arr[3][0]!="o"&&arr[3][0]!="x")
		arr[3][0]='o';
	else if(arr[0][0]=="x"&&arr[1][0]=="x"&&arr[3][0]=="x"&&arr[4][0]=="x"&&arr[2][0]!="o"&&arr[2][0]!="x")
		arr[2][0]='o';
	else if(arr[0][0]=="x"&&arr[2][0]=="x"&&arr[3][0]=="x"&&arr[4][0]=="x"&&arr[1][0]!="o"&&arr[1][0]!="x")
		arr[1][0]='o';
	else if(arr[1][0]=="x"&&arr[2][0]=="x"&&arr[3][0]=="x"&&arr[4][0]=="x"&&arr[0][0]!="o"&&arr[0][0]!="x")
		arr[0][0]='o';

	else if(arr[0][1]=="x"&&arr[1][1]=="x"&&arr[2][1]=="x"&&arr[3][1]=="x"&&arr[4][1]!="o"&&arr[4][1]!="x")			//second column
		arr[4][1]='o';
	else if(arr[0][1]=="x"&&arr[1][1]=="x"&&arr[2][1]=="x"&&arr[4][1]=="x"&&arr[3][1]!="o"&&arr[3][1]!="x")
		arr[3][1]='o';
	else if(arr[0][1]=="x"&&arr[1][1]=="x"&&arr[3][1]=="x"&&arr[4][1]=="x"&&arr[2][1]!="o"&&arr[2][1]!="x")
		arr[2][1]='o';
	else if(arr[0][1]=="x"&&arr[2][1]=="x"&&arr[3][1]=="x"&&arr[4][1]=="x"&&arr[1][1]!="o"&&arr[1][1]!="x")
		arr[1][1]='o';
	else if(arr[1][1]=="x"&&arr[2][1]=="x"&&arr[3][1]=="x"&&arr[4][1]=="x"&&arr[0][1]!="o"&&arr[0][1]!="x")
		arr[0][1]='o';

	else if(arr[0][2]=="x"&&arr[1][2]=="x"&&arr[2][2]=="x"&&arr[3][2]=="x"&&arr[4][2]!="o"&&arr[4][2]!="x")			//third column
		arr[4][2]='o';
	else if(arr[0][2]=="x"&&arr[1][2]=="x"&&arr[2][2]=="x"&&arr[4][2]=="x"&&arr[3][2]!="o"&&arr[3][2]!="x")	
		arr[3][2]='o';
	else if(arr[0][2]=="x"&&arr[1][2]=="x"&&arr[3][2]=="x"&&arr[4][2]=="x"&&arr[2][2]!="o"&&arr[2][2]!="x")	
		arr[2][2]='o';
	else if(arr[0][2]=="x"&&arr[2][2]=="x"&&arr[3][2]=="x"&&arr[4][2]=="x"&&arr[1][2]!="o"&&arr[1][2]!="x")	
		arr[1][2]='o';
	else if(arr[1][2]=="x"&&arr[2][2]=="x"&&arr[3][2]=="x"&&arr[4][2]=="x"&&arr[0][2]!="o"&&arr[0][2]!="x")	
		arr[0][2]='o';

	else if(arr[0][2]=="x"&&arr[1][2]=="x"&&arr[2][2]=="x"&&arr[3][2]=="x"&&arr[4][2]!="o"&&arr[4][2]!="x")			//forth column
		arr[4][2]='o';
	else if(arr[0][2]=="x"&&arr[1][2]=="x"&&arr[2][2]=="x"&&arr[4][2]=="x"&&arr[3][2]!="o"&&arr[3][2]!="x")
		arr[3][2]='o';
	else if(arr[0][2]=="x"&&arr[1][2]=="x"&&arr[3][2]=="x"&&arr[4][2]=="x"&&arr[2][2]!="o"&&arr[2][2]!="x")
		arr[2][2]='o';
	else if(arr[0][2]=="x"&&arr[2][2]=="x"&&arr[3][2]=="x"&&arr[4][2]=="x"&&arr[1][2]!="o"&&arr[1][2]!="x")
		arr[1][2]='o';
	else if(arr[1][2]=="x"&&arr[2][2]=="x"&&arr[3][2]=="x"&&arr[4][2]=="x"&&arr[0][2]!="o"&&arr[0][2]!="x")
		arr[0][2]='o';

	else if(arr[0][4]=="x"&&arr[1][4]=="x"&&arr[2][4]=="x"&&arr[3][4]=="x"&&arr[4][4]!="o"&&arr[4][4]!="x")			//fifth column
		arr[4][4]='o';
	else if(arr[0][4]=="x"&&arr[1][4]=="x"&&arr[2][4]=="x"&&arr[4][4]=="x"&&arr[3][4]!="o"&&arr[3][4]!="x")	
		arr[3][4]='o';
	else if(arr[0][4]=="x"&&arr[1][4]=="x"&&arr[3][4]=="x"&&arr[4][4]=="x"&&arr[2][4]!="o"&&arr[2][4]!="x")	
		arr[2][4]='o';
	else if(arr[0][4]=="x"&&arr[2][4]=="x"&&arr[3][4]=="x"&&arr[4][4]=="x"&&arr[1][4]!="o"&&arr[1][4]!="x")	
		arr[1][4]='o';
	else if(arr[1][4]=="x"&&arr[2][4]=="x"&&arr[3][4]=="x"&&arr[4][4]=="x"&&arr[0][4]!="o"&&arr[0][4]!="x")	
		arr[0][4]='o';

	else if (arr[0][0]=="x"&&arr[0][1]=="x"&&arr[0][2]=="x"&&arr[0][3]=="x"&&arr[0][4]!="o"&&arr[0][4]!="x")		//first row
		arr[0][4]='o';
	else if (arr[0][0]=="x"&&arr[0][1]=="x"&&arr[0][2]=="x"&&arr[0][4]=="x"&&arr[0][3]!="o"&&arr[0][3]!="x")
		arr[0][3]='o';
	else if (arr[0][0]=="x"&&arr[0][1]=="x"&&arr[0][3]=="x"&&arr[0][4]=="x"&&arr[0][2]!="o"&&arr[0][2]!="x")
		arr[0][2]='o';
	else if (arr[0][0]=="x"&&arr[0][2]=="x"&&arr[0][3]=="x"&&arr[0][4]=="x"&&arr[0][1]!="o"&&arr[0][1]!="x")
		arr[0][1]='o';
	else if (arr[0][1]=="x"&&arr[0][2]=="x"&&arr[0][3]=="x"&&arr[0][4]=="x"&&arr[0][0]!="o"&&arr[0][0]!="x")
		arr[0][0]='o';

	else if (arr[1][0]=="x"&&arr[1][1]=="x"&&arr[1][2]=="x"&&arr[1][3]=="x"&&arr[1][4]!="o"&&arr[1][4]!="x")		//second row
		arr[1][4]='o';
	else if (arr[1][0]=="x"&&arr[1][1]=="x"&&arr[1][2]=="x"&&arr[1][4]=="x"&&arr[1][3]!="o"&&arr[1][3]!="x")
		arr[1][3]='o';
	else if (arr[1][0]=="x"&&arr[1][1]=="x"&&arr[1][3]=="x"&&arr[1][4]=="x"&&arr[1][2]!="o"&&arr[1][2]!="x")
		arr[1][2]='o';
	else if (arr[1][0]=="x"&&arr[1][2]=="x"&&arr[1][3]=="x"&&arr[1][4]=="x"&&arr[1][1]!="o"&&arr[1][1]!="x")
		arr[1][1]='o';
	else if (arr[1][1]=="x"&&arr[1][2]=="x"&&arr[1][3]=="x"&&arr[1][4]=="x"&&arr[1][0]!="o"&&arr[1][0]!="x")
		arr[1][0]='o';
	else if (arr[2][0]=="x"&&arr[2][1]=="x"&&arr[2][2]=="x"&&arr[2][3]=="x"&&arr[2][4]!="o"&&arr[2][4]!="x")		//third row
		arr[2][4]='o';
	else if (arr[2][0]=="x"&&arr[2][1]=="x"&&arr[2][2]=="x"&&arr[2][4]=="x"&&arr[2][3]!="o"&&arr[2][3]!="x")
		arr[2][3]='o';
	else if (arr[2][0]=="x"&&arr[2][1]=="x"&&arr[2][3]=="x"&&arr[2][4]=="x"&&arr[2][2]!="o"&&arr[2][2]!="x")
		arr[2][2]='o';
	else if (arr[2][0]=="x"&&arr[2][2]=="x"&&arr[2][3]=="x"&&arr[2][4]=="x"&&arr[2][1]!="o"&&arr[2][1]!="x")
		arr[2][1]='o';
	else if (arr[2][1]=="x"&&arr[2][2]=="x"&&arr[2][3]=="x"&&arr[2][4]=="x"&&arr[2][0]!="o"&&arr[2][0]!="x")
		arr[2][0]='o';

	else if (arr[3][0]=="x"&&arr[3][1]=="x"&&arr[3][2]=="x"&&arr[3][3]=="x"&&arr[3][4]!="o"&&arr[3][4]!="x")		//forth row
		arr[3][4]='o';
	else if (arr[3][0]=="x"&&arr[3][1]=="x"&&arr[3][2]=="x"&&arr[3][4]=="x"&&arr[3][3]!="o"&&arr[3][3]!="x")
		arr[3][3]='o';
	else if (arr[3][0]=="x"&&arr[3][1]=="x"&&arr[3][3]=="x"&&arr[3][4]=="x"&&arr[3][2]!="o"&&arr[3][2]!="x")
		arr[3][2]='o';
	else if (arr[3][0]=="x"&&arr[3][2]=="x"&&arr[3][3]=="x"&&arr[3][4]=="x"&&arr[3][1]!="o"&&arr[3][1]!="x")
		arr[3][1]='o';
	else if (arr[3][1]=="x"&&arr[3][2]=="x"&&arr[3][3]=="x"&&arr[3][4]=="x"&&arr[3][0]!="o"&&arr[3][0]!="x")
		arr[3][0]='o';

	else if (arr[4][0]=="x"&&arr[4][1]=="x"&&arr[4][2]=="x"&&arr[4][3]=="x"&&arr[4][4]!="o"&&arr[4][4]!="x")		//fifth row
		arr[4][4]='o';
	else if (arr[4][0]=="x"&&arr[4][1]=="x"&&arr[4][2]=="x"&&arr[4][4]=="x"&&arr[4][3]!="o"&&arr[4][3]!="x")
		arr[4][3]='o';
	else if (arr[4][0]=="x"&&arr[4][1]=="x"&&arr[4][3]=="x"&&arr[4][4]=="x"&&arr[4][2]!="o"&&arr[4][2]!="x")
		arr[4][2]='o';
	else if (arr[4][0]=="x"&&arr[4][2]=="x"&&arr[4][3]=="x"&&arr[4][4]=="x"&&arr[4][1]!="o"&&arr[4][1]!="x")
		arr[4][1]='o';
	else if (arr[4][1]=="x"&&arr[4][2]=="x"&&arr[4][3]=="x"&&arr[4][4]=="x"&&arr[4][0]!="o"&&arr[4][0]!="x")
		arr[4][0]='o';
	else
	{
	 if (a==1&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if(a==1&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==1&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==1&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==1&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==1&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==1&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	else if (a==1&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==1&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==1&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==1&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==1&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==1&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';
	else if (a==1&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==1&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==1&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==1&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==1&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==1&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==1&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==1&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==1&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==1&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==1&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';

	if(a==2&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==2&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==2&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==2&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';
	else if (a==2&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==2&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==2&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	else if (a==2&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==2&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==2&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==2&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==2&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==2&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==2&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==2&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==2&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==2&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==2&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==2&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==2&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==2&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==2&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==2&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==2&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	

	if(a==3&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==3&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==3&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==3&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	else if (a==3&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==3&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==3&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==3&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==3&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==3&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==3&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==3&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==3&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==3&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==3&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==3&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==3&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==3&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==3&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==3&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==3&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==3&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==3&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==3&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';

	if(a==4&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==4&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==4&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==4&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==4&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==4&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==4&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==4&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==4&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==4&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==4&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==4&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==4&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==4&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==4&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==4&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==4&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==4&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==4&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==4&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==4&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==4&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==4&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==4&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';	

	if(a==5&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==5&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	else if (a==5&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==5&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==5&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==5&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==5&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==5&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==5&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==5&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==5&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==5&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==5&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==5&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==5&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==5&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==5&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==5&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==5&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==5&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==5&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==5&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==5&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==5&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';	

	if(a==6&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==6&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==6&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==6&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==6&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';
	else if (a==6&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==6&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==6&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==6&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==6&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==6&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==6&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==6&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==6&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==6&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==6&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==6&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==6&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==6&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==6&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==6&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==6&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==6&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==6&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
		

	if(a==7&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==7&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==7&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==7&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==7&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==7&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==7&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	
	else if (a==7&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	
	else if (a==7&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==7&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';	
	else if (a==7&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==7&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==7&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==7&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==7&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==7&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==7&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==7&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==7&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==7&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==7&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==7&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==7&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==7&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	

	if(a==8&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==8&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==8&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==8&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==8&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==8&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==8&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==8&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==8&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==8&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==8&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==8&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==8&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==8&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==8&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==8&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==8&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==8&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==8&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==8&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==8&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==8&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==8&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	else if (a==8&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';	

	if(a==9&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==9&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==9&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==9&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';
	else if (a==9&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==9&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==9&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==9&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	else if (a==9&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==9&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==9&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==9&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==9&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==9&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==9&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==9&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==9&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==9&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==9&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==9&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==9&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==9&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==9&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==9&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';

	if(a==10&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';
	else if (a==10&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==10&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==10&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==10&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==10&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==10&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==10&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==10&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==10&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==10&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==10&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==10&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==10&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==10&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==10&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==10&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==10&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==10&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==10&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==10&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==10&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==10&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	else if (a==10&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';	

	if(a==11&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==11&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==11&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==11&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==11&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==11&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==11&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==11&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==11&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==11&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==11&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==11&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==11&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==11&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==11&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==11&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==11&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==11&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==11&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==11&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==11&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==11&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==11&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	else if (a==11&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';	

	if(a==12&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==12&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';	
	else if (a==12&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==12&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==12&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==12&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==12&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==12&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==12&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==12&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==12&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==12&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==12&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==12&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==12&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==12&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==12&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==12&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==12&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==12&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==12&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==12&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==12&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==12&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';

	if(a==13&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==13&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==13&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==13&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==13&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==13&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==13&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==13&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==13&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==13&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==13&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==13&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';	
	else if (a==13&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==13&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==13&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==13&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==13&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==13&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==13&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==13&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==13&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==13&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==13&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==13&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	
	if (a==14&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==14&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==14&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if(a==14&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==14&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==14&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	else if (a==14&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==14&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==14&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==14&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==14&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==14&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==14&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==14&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==14&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==14&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==14&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==14&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==14&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==14&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==14&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==14&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==14&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==14&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';

	if(a==15&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==15&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==15&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==15&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==15&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==15&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==15&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==15&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==15&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==15&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==15&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==15&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==15&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==15&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==15&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==15&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==15&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==15&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==15&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==15&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==15&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==15&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==15&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	else if (a==15&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';

	if(a==16&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==16&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==16&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==16&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==16&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==16&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==16&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==16&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==16&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==16&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==16&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==16&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==16&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==16&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==16&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==16&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==16&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==16&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==16&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==16&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==16&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==16&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==16&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	else if (a==16&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';

	if(a==17&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==17&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==17&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==17&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==17&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==17&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==17&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==17&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==17&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==17&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==17&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==17&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==17&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==17&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==17&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==17&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==17&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==17&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==17&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==17&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==17&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==17&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==17&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	else if (a==17&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';

	if(a==18&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==18&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==18&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==18&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==18&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==18&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==18&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==18&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==18&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==18&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==18&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==18&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==18&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==18&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==18&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==18&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==18&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==18&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==18&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==18&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==18&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==18&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==18&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	else if (a==18&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';

	if(a==19&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==19&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==19&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==19&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==19&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==19&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==19&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==19&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==19&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==19&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==19&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==19&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==19&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==19&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==19&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==19&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==19&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==19&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==19&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==19&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==19&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==19&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==19&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	else if (a==19&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';

	if(a==20&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==20&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==20&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==20&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==20&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==20&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==20&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==20&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==20&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==20&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==20&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==20&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==20&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==20&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==20&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==20&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==20&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==20&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==20&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==20&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==20&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==20&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==20&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	else if (a==20&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';	

	if(a==21&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==21&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==21&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==21&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==21&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==21&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==21&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==21&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==21&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==21&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==21&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==21&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==21&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==21&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==21&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==21&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==21&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==21&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==21&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==21&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==21&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==21&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==21&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	else if (a==21&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';	

	if(a==22&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==22&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==22&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==22&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==22&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==22&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==22&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==22&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==22&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==22&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==22&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==22&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==22&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==22&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==22&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==22&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==22&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==22&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==22&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==22&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==22&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==22&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==22&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	else if (a==22&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';	

	if(a==23&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==23&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==23&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==23&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==23&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==23&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==23&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==23&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==23&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==23&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==23&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==23&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==23&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==23&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==23&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==23&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==23&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==23&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==23&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==23&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==23&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==23&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==23&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	else if (a==23&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';	

	if(a==24&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==24&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==24&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==24&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==24&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==24&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==24&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==24&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==24&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==24&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==24&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==24&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==24&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==24&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==24&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==24&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==24&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==24&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==24&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==24&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==24&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==24&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==24&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	else if (a==24&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';	

	if(a==25&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==25&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==25&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==25&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==25&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==25&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==25&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==25&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==25&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==25&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==25&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==25&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==25&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==25&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==25&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==25&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==25&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==25&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==25&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==25&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==25&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==25&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==25&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	else if (a==25&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';	

	}

}
void com_med()
{
	if (a==1&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if(a==1&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==1&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==1&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==1&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==1&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==1&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	else if (a==1&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==1&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==1&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==1&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==1&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==1&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';
	else if (a==1&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==1&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==1&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==1&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==1&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==1&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==1&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==1&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==1&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==1&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==1&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';

	if(a==2&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==2&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==2&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==2&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';
	else if (a==2&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==2&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==2&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	else if (a==2&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==2&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==2&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==2&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==2&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==2&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==2&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==2&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==2&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==2&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==2&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==2&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==2&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==2&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==2&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==2&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==2&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	

	if(a==3&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==3&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==3&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==3&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	else if (a==3&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==3&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==3&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==3&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==3&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==3&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==3&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==3&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==3&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==3&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==3&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==3&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==3&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==3&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==3&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==3&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==3&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==3&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==3&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==3&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';

	if(a==4&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==4&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==4&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==4&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==4&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==4&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==4&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==4&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==4&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==4&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==4&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==4&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==4&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==4&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==4&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==4&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==4&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==4&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==4&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==4&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==4&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==4&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==4&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==4&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';	

	if(a==5&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==5&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	else if (a==5&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==5&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==5&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==5&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==5&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==5&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==5&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==5&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==5&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==5&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==5&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==5&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==5&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==5&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==5&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==5&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==5&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==5&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==5&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==5&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==5&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==5&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';	

	if(a==6&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==6&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==6&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==6&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==6&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';
	else if (a==6&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==6&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==6&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==6&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==6&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==6&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==6&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==6&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==6&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==6&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==6&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==6&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==6&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==6&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==6&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==6&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==6&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==6&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==6&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
		

	if(a==7&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==7&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==7&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==7&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==7&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==7&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==7&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	
	else if (a==7&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	
	else if (a==7&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==7&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';	
	else if (a==7&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==7&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==7&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==7&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==7&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==7&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==7&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==7&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==7&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==7&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==7&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==7&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==7&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==7&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	

	if(a==8&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==8&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==8&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==8&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==8&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==8&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==8&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==8&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==8&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==8&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==8&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==8&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==8&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==8&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==8&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==8&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==8&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==8&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==8&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==8&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==8&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==8&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==8&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	else if (a==8&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';	

	if(a==9&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==9&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==9&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==9&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';
	else if (a==9&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==9&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==9&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==9&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	else if (a==9&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==9&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==9&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==9&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==9&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==9&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==9&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==9&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==9&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==9&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==9&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==9&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==9&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==9&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==9&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==9&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';

	if(a==10&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';
	else if (a==10&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==10&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==10&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==10&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==10&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==10&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==10&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==10&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==10&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==10&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==10&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==10&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==10&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==10&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==10&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==10&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==10&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==10&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==10&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==10&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==10&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==10&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	else if (a==10&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';	

	if(a==11&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==11&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==11&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==11&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==11&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==11&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==11&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==11&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==11&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==11&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==11&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==11&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==11&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==11&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==11&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==11&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==11&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==11&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==11&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==11&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==11&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==11&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==11&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	else if (a==11&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';	

	if(a==12&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==12&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';	
	else if (a==12&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==12&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==12&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==12&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==12&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==12&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==12&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==12&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==12&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==12&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==12&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==12&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==12&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==12&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==12&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==12&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==12&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==12&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==12&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==12&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==12&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==12&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';

	if(a==13&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==13&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==13&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==13&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==13&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==13&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==13&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==13&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==13&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==13&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==13&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==13&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';	
	else if (a==13&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==13&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==13&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==13&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==13&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==13&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==13&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==13&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==13&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==13&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==13&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==13&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	
	if (a==14&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==14&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==14&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if(a==14&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==14&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==14&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	else if (a==14&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==14&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==14&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==14&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==14&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==14&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==14&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==14&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==14&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==14&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==14&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==14&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==14&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==14&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==14&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==14&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==14&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==14&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';

	if(a==15&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==15&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==15&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==15&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==15&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==15&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==15&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==15&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==15&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==15&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==15&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==15&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==15&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==15&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==15&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==15&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==15&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==15&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==15&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==15&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==15&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==15&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==15&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	else if (a==15&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';

	if(a==16&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==16&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==16&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==16&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==16&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==16&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==16&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==16&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==16&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==16&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==16&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==16&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==16&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==16&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==16&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==16&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==16&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==16&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==16&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==16&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==16&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==16&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==16&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	else if (a==16&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';

	if(a==17&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==17&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==17&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==17&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==17&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==17&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==17&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==17&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==17&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==17&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==17&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==17&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==17&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==17&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==17&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==17&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==17&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==17&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==17&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==17&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==17&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==17&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==17&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	else if (a==17&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';

	if(a==18&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==18&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==18&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==18&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==18&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==18&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==18&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==18&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==18&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==18&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==18&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==18&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==18&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==18&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==18&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==18&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==18&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==18&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==18&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==18&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==18&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==18&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==18&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	else if (a==18&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';

	if(a==19&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==19&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==19&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==19&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==19&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==19&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==19&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==19&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==19&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==19&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==19&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==19&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==19&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==19&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==19&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==19&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==19&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==19&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==19&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==19&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==19&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==19&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==19&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	else if (a==19&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';

	if(a==20&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==20&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==20&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==20&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==20&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==20&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==20&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==20&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==20&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==20&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==20&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==20&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==20&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==20&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==20&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==20&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==20&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==20&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==20&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==20&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==20&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==20&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==20&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	else if (a==20&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';	

	if(a==21&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==21&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==21&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==21&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==21&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==21&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==21&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==21&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==21&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==21&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==21&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==21&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==21&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==21&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==21&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==21&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==21&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==21&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==21&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==21&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==21&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==21&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==21&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	else if (a==21&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';	

	if(a==22&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==22&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==22&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==22&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==22&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==22&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==22&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==22&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==22&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==22&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==22&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==22&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==22&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==22&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==22&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==22&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==22&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==22&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==22&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==22&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==22&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==22&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==22&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	else if (a==22&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';	

	if(a==23&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==23&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==23&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==23&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==23&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==23&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==23&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==23&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==23&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==23&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==23&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==23&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==23&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==23&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==23&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==23&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==23&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==23&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==23&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==23&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==23&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==23&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==23&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	else if (a==23&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';	

	if(a==24&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==24&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==24&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==24&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==24&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==24&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==24&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==24&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==24&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==24&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==24&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==24&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==24&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==24&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==24&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==24&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==24&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==24&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==24&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==24&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==24&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==24&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==24&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	else if (a==24&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';	

	if(a==25&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==25&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==25&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==25&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==25&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==25&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==25&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==25&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==25&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==25&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==25&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==25&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==25&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==25&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==25&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==25&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==25&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==25&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==25&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==25&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==25&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==25&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==25&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	else if (a==25&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';
	}
void com_easy()
{
	if (a==1&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==1&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==1&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==1&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==1&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	else if (a==1&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==1&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==1&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==1&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==1&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if(a==1&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==1&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';
	else if (a==1&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==1&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==1&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==1&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==1&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==1&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==1&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==1&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==1&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==1&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==1&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==1&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';

	if(a==2&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==2&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==2&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==2&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==2&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';
	else if (a==2&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	else if (a==2&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==2&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==2&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==2&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==2&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==2&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==2&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==2&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==2&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==2&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==2&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==2&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==2&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==2&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==2&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==2&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==2&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==2&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	

	if(a==3&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==3&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==3&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==3&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	else if (a==3&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==3&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==3&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==3&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==3&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==3&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==3&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==3&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==3&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==3&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==3&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==3&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==3&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==3&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==3&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==3&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==3&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==3&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==3&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==3&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';

	if(a==4&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==4&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==4&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==4&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==4&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==4&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==4&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==4&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==4&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==4&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==4&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==4&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==4&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==4&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==4&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==4&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==4&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==4&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==4&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==4&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==4&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==4&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==4&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==4&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';	

	if(a==5&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	
	
	else if (a==5&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==5&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==5&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==5&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==5&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==5&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';	
	else if (a==5&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==5&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==5&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==5&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==5&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==5&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==5&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==5&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==5&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==5&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==5&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==5&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==5&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==5&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==5&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==5&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==5&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';	

	if(a==6&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==6&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	
	else if (a==6&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==6&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==6&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==6&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==6&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';
	else if (a==6&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==6&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==6&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==6&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==6&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==6&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==6&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==6&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==6&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==6&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==6&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==6&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==6&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==6&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==6&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==6&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==6&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
		

	if(a==7&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==7&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==7&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==7&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==7&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==7&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==7&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==7&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==7&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==7&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';	
	else if (a==7&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==7&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==7&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==7&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==7&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==7&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==7&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==7&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==7&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==7&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==7&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==7&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==7&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==7&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	

	if(a==8&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==8&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==8&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==8&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==8&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==8&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	else if (a==8&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';	
	else if (a==8&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==8&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==8&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==8&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==8&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==8&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==8&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==8&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==8&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==8&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==8&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==8&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==8&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==8&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==8&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==8&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==8&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	

	if(a==9&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	
	else if (a==9&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==9&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==9&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==9&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==9&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==9&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==9&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	else if (a==9&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==9&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==9&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';
	else if (a==9&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==9&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==9&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==9&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==9&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==9&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==9&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==9&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==9&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==9&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==9&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==9&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==9&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';

	if(a==10&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';
	else if (a==10&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==10&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==10&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==10&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==10&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==10&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==10&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==10&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==10&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==10&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==10&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==10&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==10&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==10&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==10&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==10&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==10&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==10&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==10&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==10&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==10&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==10&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	else if (a==10&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';	

	if(a==11&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==11&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==11&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==11&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==11&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==11&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==11&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==11&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==11&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==11&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==11&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==11&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==11&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==11&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==11&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==11&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==11&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==11&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==11&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==11&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==11&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==11&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==11&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	else if (a==11&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';	

	if(a==12&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==12&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==12&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==12&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==12&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==12&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';	
	else if (a==12&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==12&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==12&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==12&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==12&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==12&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==12&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==12&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==12&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==12&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==12&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==12&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==12&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==12&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==12&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==12&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==12&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==12&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';

	if(a==13&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==13&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==13&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==13&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==13&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==13&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==13&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==13&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==13&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==13&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==13&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==13&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==13&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==13&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==13&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==13&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==13&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';	
	else if (a==13&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==13&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==13&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==13&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==13&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==13&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==13&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	
	if (a==14&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	
	else if (a==14&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	
	else if (a==14&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	else if (a==14&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==14&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==14&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==14&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if(a==14&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==14&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==14&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==14&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==14&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==14&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==14&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==14&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==14&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==14&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==14&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==14&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==14&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==14&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==14&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==14&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==14&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';

	if(a==15&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==15&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==15&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==15&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==15&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==15&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==15&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==15&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==15&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==15&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==15&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==15&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==15&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==15&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==15&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==15&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==15&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==15&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==15&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==15&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==15&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==15&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==15&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	else if (a==15&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';

	if(a==16&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==16&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==16&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==16&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==16&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	else if (a==16&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';
	else if (a==16&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==16&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==16&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==16&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==16&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==16&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==16&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==16&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==16&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==16&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==16&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==16&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==16&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==16&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==16&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==16&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==16&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==16&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';

	if(a==17&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==17&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==17&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==17&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==17&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==17&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==17&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==17&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==17&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==17&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==17&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==17&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==17&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==17&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==17&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==17&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==17&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==17&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==17&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==17&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==17&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==17&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==17&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	else if (a==17&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';

	if(a==18&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==18&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==18&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==18&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==18&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==18&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==18&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==18&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==18&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==18&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==18&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==18&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==18&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==18&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==18&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==18&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==18&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==18&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==18&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==18&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==18&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==18&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	else if (a==18&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==18&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';

	if(a==19&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==19&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==19&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==19&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==19&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==19&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==19&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==19&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==19&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==19&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==19&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==19&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==19&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	else if (a==19&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==19&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==19&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==19&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==19&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==19&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==19&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==19&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==19&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==19&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==19&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';

	if(a==20&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==20&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==20&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==20&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==20&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==20&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==20&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==20&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==20&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==20&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==20&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==20&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==20&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==20&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==20&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==20&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==20&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==20&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==20&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==20&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==20&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==20&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==20&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	else if (a==20&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';	

	if(a==21&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==21&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==21&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==21&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==21&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==21&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==21&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==21&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==21&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==21&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==21&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==21&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==21&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==21&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==21&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==21&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==21&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==21&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==21&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==21&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==21&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==21&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==21&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	else if (a==21&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';	

	if(a==22&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==22&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==22&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==22&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==22&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==22&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==22&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	else if (a==22&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';	
	else if (a==22&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==22&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==22&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==22&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==22&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==22&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==22&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==22&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==22&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==22&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==22&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==22&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==22&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==22&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==22&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==22&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';

	if(a==23&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==23&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==23&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==23&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==23&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==23&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==23&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==23&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==23&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==23&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==23&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==23&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==23&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==23&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==23&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==23&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==23&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==23&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==23&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==23&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==23&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==23&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==23&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	else if (a==23&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';	

	if(a==24&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==24&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==24&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==24&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==24&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	else if (a==24&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==24&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==24&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==24&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==24&&arr[4][4]!="x"&&arr[4][4]!="o")
		arr[4][4]='o';
	else if (a==24&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==24&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==24&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==24&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==24&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==24&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==24&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==24&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==24&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==24&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==24&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==24&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==24&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	else if (a==24&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';	

	if(a==25&&arr[3][3]!="x"&&arr[3][3]!="o")
		arr[3][3]='o';
	else if (a==25&&arr[1][4]!="x"&&arr[1][4]!="o")
		arr[1][4]='o';
	else if (a==25&&arr[4][3]!="x"&&arr[4][3]!="o")
		arr[4][3]='o';
	else if (a==25&&arr[0][3]!="x"&&arr[0][3]!="o")
		arr[0][3]='o';
	else if (a==25&&arr[1][1]!="x"&&arr[1][1]!="o")
		arr[1][1]='o';
	else if (a==25&&arr[4][2]!="x"&&arr[4][2]!="o")
		arr[4][2]='o';
	else if (a==25&&arr[2][0]!="x"&&arr[2][0]!="o")
		arr[2][0]='o';
	else if (a==25&&arr[3][0]!="x"&&arr[3][0]!="o")
		arr[3][0]='o';
	else if (a==25&&arr[2][1]!="x"&&arr[2][1]!="o")
		arr[2][1]='o';
	else if (a==25&&arr[0][2]!="x"&&arr[0][2]!="o")
		arr[0][2]='o';
	else if (a==25&&arr[3][4]!="x"&&arr[3][4]!="o")
		arr[3][4]='o';
	else if (a==25&&arr[0][0]!="x"&&arr[0][0]!="o")
		arr[0][0]='o';
	else if (a==25&&arr[4][1]!="x"&&arr[4][1]!="o")
		arr[4][1]='o';
	else if (a==25&&arr[1][2]!="x"&&arr[1][2]!="o")
		arr[1][2]='o';
	else if (a==25&&arr[0][1]!="x"&&arr[0][1]!="o")
		arr[0][1]='o';
	else if (a==25&&arr[1][0]!="x"&&arr[1][0]!="o")
		arr[1][0]='o';
	else if (a==25&&arr[0][4]!="x"&&arr[0][4]!="o")
		arr[0][4]='o';
	else if (a==25&&arr[3][2]!="x"&&arr[3][2]!="o")
		arr[3][2]='o';
	else if (a==25&&arr[3][1]!="x"&&arr[3][1]!="o")
		arr[3][1]='o';
	else if (a==25&&arr[2][2]!="x"&&arr[2][2]!="o")
		arr[2][2]='o';
	else if (a==25&&arr[2][3]!="x"&&arr[2][3]!="o")
		arr[2][3]='o';
	else if (a==25&&arr[1][3]!="x"&&arr[1][3]!="o")
		arr[1][3]='o';
	else if (a==25&&arr[4][0]!="x"&&arr[4][0]!="o")
		arr[4][0]='o';
	else if (a==25&&arr[2][4]!="x"&&arr[2][4]!="o")
		arr[2][4]='o';
	}
void player2()
{
	if (player == 'x')
		player = 'o';
	else
		player = 'x';
}
void main()
{
	int choice , choice2;
	n = 1;
	PlaySound(TEXT("mario.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC);
	cout<<"\t\t\t Tic Tac Toe! \t\t\t\t\n";
	cout<<"Select of the following : \n";
	cout<<"1.one player \n";
	cout<<"2.two players \n";
	cout<<"Your choice : ";
	cin>>choice;
	if (choice ==1)
	{
		cout<<"Select your difficulty : \n";
		cout<<"1.Easy \n";
		cout<<"2.Medium \n";
		cout<<"3.Hard \n";
		cout<<"Your choice : ";
		cin>>choice2;
	}
	Draw();
	cout<<"Notice : Player1:x , Player2/computer:o\n";
	while (true)
	{
		input();
		if(choice==1&&choice2==1)
			com_easy();
		else if(choice==1&&choice2==2)
			com_med();
		else if(choice==1&&choice2==3)
			com_hard();
		else
			player2();
		Draw();
		cout<<"Notice : Player1:x , Player2/computer:o\n";
		if (win() == 'x')
		{
			cout << "  player 1 wins :D \n";
			break;
		}
		else if (win() == 'o')
		{
			cout << "  player 2 wins :D \n";
			break;
		}
		else if (win() == '/' && n == 13&&choice==1)
		{
			cout << "  no one wins :D \n";
			break;
		}
		else if (win() == '/' && n == 25&&choice==2)
		{
			cout << "  no one wins :D \n";
			break;
		}
		n++;
	}
}