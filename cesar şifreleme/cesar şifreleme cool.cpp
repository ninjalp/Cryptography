#include <iostream>
#include <string>

using namespace std;

int main(){
	string message;//kendi mesajýmýzý aldýk.
	cout<<"write me that secret message: "<<endl;
	getline(cin,message);
	
	string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ "};//harfleri aldýk
	string key {"QWERTYUIOPÐÜASDFGHJKLÞÝZXCVBNMÖÇ1234567890qwertyuýopðasdfghjklþizxcvbnmöç"};//can alýcý kýsým key kýsmý. key is the most important part.
	string encrypted;
	string decrypted;
	
	for(char c:message){// mesajýn içinde char deðiþkeninde ilerliyoruz , stringler charlardan oluþur.
		int position =alphabet.find(c);// yazdýðým stringin harflerinin charlarýnýn yani alphabetteki deðerini alýr 
	if(position!=string::npos){ ///-cool shit till the end
		
		char new_char{key.at(position)};//yeni char tanýmlýyoruz , key deki o pozisyonun adamýný alýp new char a yüklüyoruz
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

