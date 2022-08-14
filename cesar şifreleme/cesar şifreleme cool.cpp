#include <iostream>
#include <string>

using namespace std;

int main(){
	string message;//kendi mesaj�m�z� ald�k.
	cout<<"write me that secret message: "<<endl;
	getline(cin,message);
	
	string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ "};//harfleri ald�k
	string key {"QWERTYUIOP��ASDFGHJKL��ZXCVBNM��1234567890qwertyu�op�asdfghjkl�izxcvbnm��"};//can al�c� k�s�m key k�sm�. key is the most important part.
	string encrypted;
	string decrypted;
	
	for(char c:message){// mesaj�n i�inde char de�i�keninde ilerliyoruz , stringler charlardan olu�ur.
		int position =alphabet.find(c);// yazd���m stringin harflerinin charlar�n�n yani alphabetteki de�erini al�r 
	if(position!=string::npos){ ///-cool shit till the end
		
		char new_char{key.at(position)};//yeni char tan�ml�yoruz , key deki o pozisyonun adam�n� al�p new char a y�kl�yoruz
		encrypted+=new_char;
	}
	else{
		encrypted+=c;
	}
	cout<<"encrypted: ";
	cout<<encrypted<<endl;
	
	}
	for(char c:encrypted){
		int position=key.find(c);
		if(position!=string::npos){
			char new_char{alphabet.at(position)};
			decrypted+=new_char;
		}
		else{
			decrypted+=c;
			
		}
		
		cout<<decrypted<<endl;
		
	}
	
	
	return 0;
}

