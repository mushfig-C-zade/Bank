#include <iostream>;
using namespace std;
int main()
{
	cout << "ABB-ye xos gelmisiz\n";	
	int sifre;
	int secim;
	int balance;
	int artim;
	int cixim;
	int cixis;
	do
	{
	cout << "Sifrenizi daxil edin\n";
	cin >> sifre;
	
	} while (sifre!=1238&&sifre!=4567&&sifre!=7896&&sifre!=9873&&sifre!=3216);

	if (sifre==1238)
	{
		cout << "Xos geldin Mushfig\n";
		cout << "Etmek istediyiniz emeliyyatlari secin\n";
		cout << "1. Balansini goster\n2. Balansi artir\n3. Mebleg cixar\n";
		int balance=6000;		
		cin >> secim;
		switch (secim)
		{		
		case 1:
			cout << balance<<"\n";			
			do
			{
				cout << "Emeliyyat bitdi cixis ucun 0 secin\n";
				cin >> cixis;
			} while (cixis != 0);
			if (cixis==0)
			{
				system("cls");
			}
			break;
		case 2:
			cout << "Artiracaginiz meblegi daxil edin\n";
			cin >> artim;
			balance += artim;
			cout << balance<<"\n";
			
			do
			{
				cout << "Emeliyyat bitdi cixis ucun 0 secin\n";
				cin >> cixis;
			} while (cixis != 0);
			if (cixis == 0)
			{
				system("cls");
			}
			break;
			
		case 3:
			cout << "Cixaracaginiz meblegi daxil edin\n";
			cin >> cixim;
			if (cixim<=balance)
			{
				balance -= cixim;
				cout << balance << "\n";
			}
			else
			{
				cout << "Emeliyyat mumkun olmadi, duzgun meblegi daxil edin\n";
			}
			
			
			do
			{
				cout << "Emeliyyat bitdi cixis ucun 0 secin\n";
				cin >> cixis;
			} while (cixis != 0);
			if (cixis == 0)
			{
				system("cls");
			}
			break;
			
		default:
			break;
		}
	}

	else if (sifre == 4567)
	{
		cout << "Xos geldin Haji\n";
		cout << "Etmek istediyiniz emeliyyatlari secin\n";
		cout << "1. Balansini goster\n2. Balansi artir\n3. Mebleg cixar\n";
		float balance = 5075.87;
		cin >> secim;
		switch (secim)
		{
		case 1:
			cout << balance << "\n";
			
			do
			{
				cout << "Emeliyyat bitdi cixis ucun 0 secin\n";
				cin >> cixis;
			} while (cixis != 0);
			if (cixis == 0)
			{
				system("cls");
			}
			break;
		case 2:
			cout << "Artiracaginiz meblegi daxil edin\n";
			cin >> artim;
			balance += artim;
			cout << balance << "\n";

			do
			{
				cout << "Emeliyyat bitdi cixis ucun 0 secin\n";
				cin >> cixis;
			} while (cixis != 0);
			if (cixis == 0)
			{
				system("cls");
			}
			break;

		case 3:
			cout << "Cixaracaginiz meblegi daxil edin\n";
			cin >> cixim;
			if (cixim <= balance)
			{
				balance -= cixim;
				cout << balance << "\n";
			}
			else
			{
				cout << "Emeliyyat mumkun olmadi, duzgun meblegi daxil edin\n";
			}
			

			do
			{
				cout << "Emeliyyat bitdi cixis ucun 0 secin\n";
				cin >> cixis;
			} while (cixis != 0);
			if (cixis == 0)
			{
				system("cls");
			}
			break;

		default:
			break;
		}
	}

	else if (sifre == 7896)
	{
		cout << "Xos geldin Ismayil\n";
		cout << "Etmek istediyiniz emeliyyatlari secin\n";
		cout << "1. Balansini goster\n2. Balansi artir\n3. Mebleg cixar\n";
		int balance = 4000;
		cin >> secim;
		switch (secim)
		{
		case 1:
			cout << balance << "\n";
			
			do
			{
				cout << "Emeliyyat bitdi cixis ucun 0 secin\n";
				cin >> cixis;
			} while (cixis != 0);

			if (cixis == 0)
			{
				system("cls");
			}
			break;
		case 2:
			cout << "Artiracaginiz meblegi daxil edin\n";
			cin >> artim;
			balance += artim;
			cout << balance << "\n";

			do
			{
				cout << "Emeliyyat bitdi cixis ucun 0 secin\n";
				cin >> cixis;
			} while (cixis != 0);
			if (cixis == 0)
			{
				system("cls");
			}
			break;

		case 3:
			cout << "Cixaracaginiz meblegi daxil edin\n";
			cin >> cixim;
			if (cixim <= balance)
			{
				balance -= cixim;
				cout << balance << "\n";
			}
			else
			{
				cout << "Emeliyyat mumkun olmadi, duzgun meblegi daxil edin\n";
			}
			

			do
			{
				cout << "Emeliyyat bitdi cixis ucun 0 secin\n";
				cin >> cixis;
			} while (cixis != 0);
			if (cixis == 0)
			{
				system("cls");
			}
			break;

		default:
			break;
		}
	}

	else if (sifre == 9873)
	{
		cout << "Xos geldin Tural\n";
		cout << "Etmek istediyiniz emeliyyatlari secin\n";
		cout << "1. Balansini goster\n2. Balansi artir\n3. Mebleg cixar\n";
		float balance = 3686.46;
		cin >> secim;
		switch (secim)
		{
		case 1:
			cout << balance << "\n";
			
			do
			{
				cout << "Emeliyyat bitdi cixis ucun 0 secin\n";
				cin >> cixis;
			} while (cixis != 0);
			if (cixis == 0)
			{
				system("cls");
			}
			break;
		case 2:
			cout << "Artiracaginiz meblegi daxil edin\n";
			cin >> artim;
			balance += artim;
			cout << balance << "\n";

			do
			{
				cout << "Emeliyyat bitdi cixis ucun 0 secin\n";
				cin >> cixis;
			} while (cixis != 0);
			if (cixis == 0)
			{
				system("cls");
			}
			break;

		case 3:
			cout << "Cixaracaginiz meblegi daxil edin\n";
			cin >> cixim;
			if (cixim <= balance)
			{
				balance -= cixim;
				cout << balance << "\n";
			}
			else
			{
				cout << "Emeliyyat mumkun olmadi, duzgun meblegi daxil edin\n";
			}
			

			do
			{
				cout << "Emeliyyat bitdi cixis ucun 0 secin\n";
				cin >> cixis;
			} while (cixis != 0);
			if (cixis == 0)
			{
				system("cls");
			}
			break;

		default:
			break;
		}
	}

	else if (sifre == 3216)
	{
		cout << "Xos geldin Mahammad\n";
		cout << "Etmek istediyiniz emeliyyatlari secin\n";
		cout << "1. Balansini goster\n2. Balansi artir\n3. Mebleg cixar\n";
		int balance = 1500;
		cin >> secim;
		switch (secim)
		{
		case 1:
			cout << balance << "\n";
			
			do
			{
				cout << "Emeliyyat bitdi cixis ucun 0 secin\n";
				cin >> cixis;
			} while (cixis != 0);
			if (cixis == 0)
			{
				system("cls");
			}
			break;
		case 2:
			cout << "Artiracaginiz meblegi daxil edin\n";
			cin >> artim;
			balance += artim;
			cout << balance << "\n";

			do
			{
				cout << "Emeliyyat bitdi cixis ucun 0 secin\n";
				cin >> cixis;
			} while (cixis != 0);
			if (cixis == 0)
			{
				system("cls");
			}
			break;

		case 3:
			cout << "Cixaracaginiz meblegi daxil edin\n";
			cin >> cixim;
			if (cixim <= balance)
			{
				balance -= cixim;
				cout << balance << "\n";
			}
			else
			{
				cout << "Emeliyyat mumkun olmadi, duzgun meblegi daxil edin\n";
			}
			

			do
			{
				cout << "Emeliyyat bitdi cixis ucun 0 secin\n";
				cin >> cixis;
			} while (cixis != 0);
			if (cixis == 0)
			{
				system("cls");
			}
			break;

		default:
			break;
		}
	}
}