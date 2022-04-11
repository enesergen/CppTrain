//Enes ERGEN --- 1306180054

#include <iostream>
#include<vector>
using namespace std;

static int listcalc = 0;
static int productcalc = 0;

class List {
public:
	vector<string>name;
	vector<int>status;
};

class product {
public:
	vector<string>name;
	vector<string>quantity;
	vector<int>listnumber;
	vector<int>status;
	vector<int>mark;

};
int main() {
	vector<List>list(200);
	vector<product>item(1000);
	cout << "\t\tWelcome To Shopping List Planner" << endl;
	cout << endl;
	
	cout << "\tInformation About Using Shopping List Planner App:" << endl;
	cout << "1.The App has not a list and item when it is worked firstly." << endl;
	cout << "2.Firstly, you must create new list and then you can add items." << endl;
	cout << "3.Items have quantity attribute, this attribute must be integer otherwise this app is not working." << endl;
	cout << "4.You can edit/delete/mark items after you create item otherwise the app is not working." << endl;
	cout << "5.List Name and Item Name must be one word like 'xyz_klm',you can use '_(underscore)',you can not use space character." << endl;
	cout << "6.You must use number to make operation.The operation Menues are entered only number except the assignment of name." << endl;
	cout << "\n";
	

while(true){
	cout << "\tMain Menu" << endl;
	cout << "---------------------------------------------------------------" << endl;
	cout << "1.Create New List" << endl;
	cout << "2.Show Shopping List Menu" << endl;
	cout << "3.Exit the Shopping App\n" << endl;
	cout << "Please enter the number of operation you want to do." << endl;
	int input;
	cout << "Operation Number:";
	cin >> input;
	cout << "---------------------------------------------------------------" << endl;

	if (input == 1) {
		cout << "Welcome to Creating New List or Lists..." << endl;
		int input13;
		cout << "Please,enter the number of list you want to create." << endl;

		cout << "Number Of List:"; cin >> input13;
		cout << "RECALL:If The list name is more than one word, you can combine with '-(underscore)' like xyz_abc, you can not use space character!!!" << endl;

		for (int i = 0; i < input13; i++) {
			string listname;
			cout << i + 1 << ". List Name:"; cin >> listname;
			list[listcalc].name.push_back(listname);
			cout << "'" << listname << "'" << " is created as a list." << endl;
			listcalc++;
		}
		if (input13 == 1) { cout << "\nThe list creating is succesful..." << endl;
		cout << "---------------------------------------------------------------" << endl;
		}
		else if (input13 > 1) { cout << "\nThe Lists creating is succesful..." << endl;
		cout << "---------------------------------------------------------------" << endl;
		}
		
	}
	else if (input == 2) {
		cout << "\tWelcome to Shopping List Menu" << endl;
		int input1;
		cout << "1.Add item" << endl;
		cout << "2.Edit item" << endl;
		cout << "3.Delete item" << endl;
		cout << "4.Mark done/undone" << endl;
		cout << "5.Show Shopping List with Full Informations" << endl;		
		cout << "6.Backt to Main Menu" << endl;
		cout << "---------------------------------------------------------------" << endl;
		cout << "Please,enter the number of operation you want to do..." << endl;
		cout << "Operation Number:";
		cin >> input1;
		cout << "---------------------------------------------------------------" << endl;

		
		if (input1 == 1) {
			int input2;
			for (int i = 0; i < listcalc; i++) {
				cout <<"The List Number:"<< i+1<<"\t"<<"The List Name:"<<list[i].name.at(0) << endl;	
			}	
			cout << "\n";
			cout << "Please,choose the list number you want add item." << endl;
			cout << "List Number:";
			cin >> input2;
			cout << "\n";
			cout << "RECALL:If the item name is more than one word,you can combine with '_(underscore)' like xyz_abc,you can not use space character!!!" << endl;
			
			if (input2 <= listcalc+1) {
				cout << "How Many items Do you want to add the list?" << endl;
				int input3;
				cout << "Number of item:";
				cin >> input3;
				for (int i = 0; i < input3; i++) {
					item[productcalc].listnumber.push_back(input2-1);
					string name1;
					string quantity1;
					cout << "Please,enter " <<i+1<<".item name..." << endl;
					cout << i + 1 << ".item name:";
					cin >> name1;
					item[productcalc].name.push_back(name1);
					cout << "Please,enter "<<i+1<< ".item quantity..." << endl;
					cout << i + 1 << ".item quantity:";
					cin >> quantity1;
					item[productcalc].quantity.push_back(quantity1);
					item[productcalc].status.push_back(0);//exist 
					item[productcalc].mark.push_back(0);//undone 
					productcalc++;
				}
				cout << "\n";
				cout << "The Item Adding is succesful..." << endl;
				cout << "---------------------------------------------------------------" << endl;
				cout << "\n";
			}
			else {
				cout << "Wrong Number!";
				cout << "Try again...";
			}
		 }

		else if (input1 == 2) {
			cout << "Please,Choose the list you want to edit..." << endl;;
				for (int i = 0; i < listcalc; i++) {
					cout << i + 1 << "." << list[i].name.at(0) << endl;
				}
				int input2;
				cout << "List Number:";
				cin >> input2;
				cout << "Please,Choose the item you want to edit..." << endl;
				for (int j = 0; j < productcalc; j++) {
					if (item[j].listnumber.at(0) == input2-1 && item[j].status.at(0)==0) {
						
						cout << "Item Code:" << j + 1 << " \t" << "Item Name :" << item[j].name.at(0) << "\t\t" << "Item Quantity:" << item[j].quantity.at(0) << endl;
					}
				}
				cout << "\n";
				cout << "Please,enter the Item Code given above you want to edit..." << endl;;
				int input3;
				cout << "Item Code:";
				cin >> input3;
				cout << "\n";
				cout << "---------------------------------------------------------------" << endl;
				cout << "1.Only item name edit." << endl;
				cout << "2.Only item quantity edit." << endl;
				cout << "3.item name and quantity edit." << endl;
				cout << "4.back to main menu." << endl;

				cout << endl;
				cout << "Please,enter the edit operation number." << endl;
				int input4;
				cout << "Operation Number:";
				cin >> input4;
				if (input4 == 1) {
					string input5;
					cout << "New Item Name:";
					cin >> input5;
					item[input3 - 1].name.at(0) = input5;
					cout << "The new item name is "<<"'" << item[input3 - 1].name.at(0) <<"'"<< endl;
					cout << "The Operation is succesful..." << endl;
					cout << "---------------------------------------------------------------" << endl;

				}
				else if (input4 == 2) {
					string input6;
					cout << "New Item Quantity:";
					cin >> input6;
					item[input3 - 1].quantity.at(0) = input6;
					cout << "The new item quantity is " << "'" << item[input3 - 1].quantity.at(0) << "'" << endl;
					cout << "The Operation is succesful..." << endl;
					cout << "---------------------------------------------------------------" << endl;

				}
				else if (input4 == 3) {
					string input7, input8;
					cout << "Please, enter firstly item name and then enter item quantity...." << endl;
					cout << "The new item name:"; cin >> input7;
					cout << "The new item quantity:"; cin >> input8;
					item[input3 - 1].name.at(0) = input7;
					item[input3 - 1].quantity.at(0) = input8;
					cout << "The new item name is " << "'" << item[input3 - 1].name.at(0) << "'" << "\t" << "The new item quantity is " << "'" << item[input3 - 1].quantity.at(0) << "'" << endl;
					cout << "The Operation is succesful..." << endl;
					cout << "---------------------------------------------------------------" << endl;

				}
				else if (input4==4) {
					continue;
				}
				else { cout << "WRONG OPERATION NUMBER TRY AGAIN!!!"<<endl;
				cout << "---------------------------------------------------------------" << endl;
				}
		}
		else if (input1 == 3) {
		cout << "Please,Choose the list number you want to delete..." << endl;;
		for (int i = 0; i < listcalc; i++) {

			cout << "The List Number:"<<i + 1 << "\t" <<"The List Name:"<< list[i].name.at(0) << endl;
		}
		int input9;
		cout << "List Number:";
		cin >> input9;
		cout << "Please,Choose the item you want to delete..." << endl;
		for (int j = 0; j < productcalc; j++) {
			if (item[j].listnumber.at(0) == input9 - 1 && item[j].status.at(0)==0) {
			cout << "Item Code:" << j + 1 << " \t" << "Item Name :" << item[j].name.at(0) << "\t\t" << "Item Quantity:" << item[j].quantity.at(0) << endl;
			}
		}
		cout << "Please,Choose the 'ITEM CODE' you want to delete..." << endl;
		int input10;
		cout << "Item Code:"; cin >> input10;
		item[input10 - 1].status.at(0) = 1;
		cout << "The item deleting is succesful..." << endl;
		cout << "---------------------------------------------------------------" << endl;
		}

		else if (input1 == 4) {
		cout << "Pleas,Choose the list number you want to mark the item... " << endl;
		
		for (int i = 0; i < listcalc; i++) {
			cout << "The List Number:" << i + 1 << "\t" << "The List Name:" << list[i].name.at(0) << endl;
		}
		int input11;
		cout << "The List Number:"; cin >> input11;
		cout << "---------------------------------------------------------------" << endl;

		for (int j = 0; j < productcalc; j++) {
			if (item[j].listnumber.at(0) == input11 - 1 && item[j].status.at(0) == 0) {
				string markstatue;
				if (item[j].mark.at(0) == 0) {
					markstatue = "UNDO(-)";
				}
				else if (item[j].mark.at(0) == 1) {
					markstatue = "DONE(+)";
				}
				cout << "Item Code:" << j + 1 << " \t" << "Item Name :" << item[j].name.at(0) << "\t\t" << "Item Quantity:" << item[j].quantity.at(0) <<"\t"<<"Mark Statue:"<<markstatue<< endl;
			}
		}
		cout << "---------------------------------------------------------------" << endl;
		cout << "Please,Choose 'The Item Code' you want to mark 'done' or 'undone' " << endl;
		int input12;
		cout << "Item Code:"; cin >> input12;
		int input13;
		cout << "1.Mark Done" << endl;
		cout << "2.Mark Undone" << endl;
		cout << endl;
		cout << "Please,Choose operation number 1 or 2 ." << endl;
		cout << "Operation Number:"; cin >> input13;
		if (input13 == 1)
		{
			item[input12 - 1].mark.at(0) = 1;
			cout << "The operation of done is succesful" << endl;
			cout << "---------------------------------------------------------------" << endl;

		}
		else if (input13 == 2) {
			item[input12 - 1].mark.at(0) = 0;
			cout << "The operation of undone is succesful" << endl;
			cout << "---------------------------------------------------------------" << endl;

		}
		else { cout << "Wrong Operation Number TRY AGAIN!!!"; }
}

		else if (input1 == 5) {
		cout << "1.Only Lists" << endl;
		cout << "2.Lists and Items" << endl;
		cout << "3.Back to Main Menu" << endl;
		cout << "Please,enter the number of operation you want to do" << endl;
		int input12;
		cout << "Operation Number:"; cin >> input12;
		if (input12 == 1) {
			for (int i = 0; i < listcalc; i++) {
				cout << "List Number:" << i + 1 << " \t" << "List Name:" << list[i].name.at(0) << endl;
			}
		}
		else if (input12 == 3) {
			continue;
		}



		else if (input12 == 2) {
			for (int i = 0; i < listcalc; i++) {
				cout << endl;
				cout << endl;
				cout << "List Number:" << i + 1 << " \t" << "List Name:" << list[i].name.at(0) << endl;
				cout << "---------------------------------------------------------------" << endl;
				for (int j = 0; j < productcalc; j++) {
					if (item[j].listnumber.at(0) == i && item[j].status.at(0) == 0) {
						string markstatue;
						if (item[j].mark.at(0) == 0) {
							markstatue = "UNDO(-)";
						}
						else if (item[j].mark.at(0) == 1) {
							markstatue = "DONE(+)";
						}
						
						cout << "Item Code:" << j + 1 << "\t" << "Item Name:" << item[j].name.at(0) << "\t" << "Item Quantity:" << item[j].quantity.at(0) << "\t\t" << "Mark Statue:" << markstatue << endl;
					}
				}
			}
		}
}
		else if (input1 == 6) {
		continue;
}

}


else if (input == 3) {
cout << "The App is closed..." << endl;
cout << "---------------------------------------------------------------" << endl;

exit(0);
}



	else { cout << "WRONG OPERATION NUMBER TRY AGAIN!!!" << endl;; }

}
	return 0;
}

