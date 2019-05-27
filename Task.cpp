#include <bits/stdc++.h>
using namespace std;

int main()
{
	string type,created_date,mock_created_date;
	cin >> type >> ws >> created_date >> ws >> mock_created_date;

	char ch = type[1];

	// Handling prepaid case
	if(ch == 'r' || ch == 'R')
	{
		string yr = mock_created_date.substr(0,5);
		
		// debug
		string month = created_date.substr(5,7);
		

		int yr_num = 0;

		// Individual digits of year
		int a = yr[0]-48; 
		int b = yr[1]-48;
		int c = yr[2]-48;
		int d = yr[3]-48;

		yr_num = 1000*a + 100*b + 10*c + d;
		yr_num++;

		// Print created_date's date

		//cout << mock_created_date[5] << mock_created_date[6] << "\n";
		 cout << type << " " << yr_num << "-" << created_date[5] << created_date[6] << "-"<<
		  created_date[8] << created_date[9] << "\n";
	}
	else
	{
		// Postpaid case
		int month_mock =  (mock_created_date[5]-48)*10 + (mock_created_date[6]-48);
		string actual_date = created_date.substr(7,created_date.size()); 
		// If its the last month of the year we increase the year count
		// else increase the month count
		if(month_mock == 12)
			{
				string month = mock_created_date.substr(5,7);
				string date = mock_created_date.substr(7,mock_created_date.size());		
				
				int yr = (mock_created_date[0]-48)*1000 + (mock_created_date[1]*100) + (mock_created_date[2]*10) + mock_created_date[3];		
				yr++;

				cout << type <<  yr  << month <<  actual_date << "\n";	
			}
		else	
			{	
				string yr = mock_created_date.substr(0,5);
				string date = mock_created_date.substr(7,mock_created_date.size());
				 cout << type <<  yr  << month_mock+1 << actual_date << "\n"; 
				// cout << yr <<"--";

			}	 
	}	


}