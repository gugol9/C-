#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{	
	
	cout<<" 1 PYTANIE "<<endl;
int i=0;
char odp;
cout<<"TEST Z INFORMATYKI"<<endl;
cout<<"Ktory z wymienionych elementów zestawu komputerowego nie jest  czescia jednostki centralnej? "<<endl;
cout<<" a) Pamiec Ram ?"<<endl<<endl;
cout<<" b) Klawiatura ?"<<endl<<endl;
cout<<" c) Plyta glowna?"<<endl;
cin>>odp;	
if(odp=='b') {cout<<"poprawna odpowiedz"<<endl<<endl<<endl;
i++;
}
else{
	cout<<"odpowiedz zla "<<endl<<endl<<endl;
}


cout<<" 2 PYTANIE "<<endl;


cout<<"Ktora z wymienionych pamieci jest pamiecia wewnetrzna komputera? "<<endl<<endl;
cout<<" a) Pendrive ?"<<endl<<endl;
cout<<" b) CD-ROM ?"<<endl<<endl;
cout<<" c) Dysk Twardy?"<<endl;
cin>>odp;	
if(odp=='c') {cout<<"poprawna odpowiedz"<<endl<<endl<<endl;
i++;
}
else{
	cout<<"odpowiedz zla "<<endl<<endl<<endl;
}

cout<<" 3 PYTANIE "<<endl;


cout<<"Jakim systemem pos³uguje sie komputer? "<<endl<<endl;
cout<<" a) systemem dwojkowym ?"<<endl<<endl;
cout<<" b) systemem dziesietnym ?"<<endl<<endl;
cout<<" c) systemem dwunastkowym?"<<endl;
cin>>odp;	
if(odp=='a') {cout<<"poprawna odpowiedz"<<endl<<endl<<endl;
i++;
}
else{
	cout<<"odpowiedz zla "<<endl<<endl<<endl;
}

cout<<" 4 PYTANIE "<<endl;

cout<<"Przycisku Reset - u¿ywamy wtedy, gdy chcemy: "<<endl<<endl;
cout<<" a) wylaczyæ komputer ?"<<endl<<endl;
cout<<" b) wyczyscic pamiec podreczna komputera"<<endl<<endl;
cout<<" c) ponownie uruchomic komputer gdy komputer nie reaguje na nasze polecenia?"<<endl;
cin>>odp;	
if(odp=='c') {cout<<"poprawna odpowiedz"<<endl<<endl<<endl;
i++;
}
else{
	cout<<"odpowiedz zla "<<endl<<endl<<endl;
}


cout<<" 5 PYTANIE "<<endl;


cout<<"Ktore z poni¿ej wymienionych urz¹dzeñ jest urz¹dzeniem wejœcia? "<<endl<<endl;
cout<<" a) Mikrofon ?"<<endl<<endl;
cout<<" b) Monitor ?"<<endl<<endl;
cout<<" c) Drukarka ?"<<endl;
cin>>odp;	
if(odp=='a') {cout<<"poprawna odpowiedz"<<endl<<endl<<endl;
i++;
}
else{
	cout<<"odpowiedz zla "<<endl<<endl<<endl;
}

cout<<" 6 PYTANIE "<<endl;


cout<<"Ktory z wymienionych programów jest programem antywirusowym?? "<<endl<<endl;
cout<<" a) Firefox ?"<<endl<<endl;
cout<<" b) Norton Ghost ?"<<endl<<endl;
cout<<" c) AVG?"<<endl;
cin>>odp;	
if(odp=='c') {cout<<"poprawna odpowiedz"<<endl<<endl<<endl;
i++;
}
else{
	cout<<"odpowiedz zla "<<endl<<endl<<endl;
}


cout<<" 7 PYTANIE "<<endl;



cout<<"Co to jest ikonka? "<<endl<<endl;
cout<<" a) To inaczej tapeta ?"<<endl<<endl;
cout<<" b) To inaczej program komputerowy ?"<<endl<<endl;
cout<<" c) Ma³y obrazek reprezentuj¹cy folder, plik lub program To inaczej skrót do programu?"<<endl;
cin>>odp;	
if(odp=='c') {cout<<"poprawna odpowiedz"<<endl<<endl<<endl;
i++;
}
else{
	cout<<"odpowiedz zla "<<endl<<endl<<endl;
}




cout<<" 8 PYTANIE "<<endl;


cout<<"Co to jest software? "<<endl<<endl;
cout<<" a) Sprzêt komputerowy ?"<<endl<<endl;
cout<<" b) Oprogramowanie komputerowe ?"<<endl<<endl;
cout<<" c) Darmowy system operacyjny?"<<endl;
cin>>odp;	
if(odp=='b') {cout<<"poprawna odpowiedz"<<endl<<endl<<endl;
i++;
}
else{
	cout<<"odpowiedz zla "<<endl<<endl<<endl;
}


cout<<" 9 PYTANIE "<<endl;


cout<<"Jakiego znaku nie mo¿e zawieraæ nazwa folderu? "<<endl<<endl;
cout<<" a) ? ?"<<endl<<endl;
cout<<" b) ! ?"<<endl<<endl;
cout<<" c) @ ?"<<endl;
cin>>odp;	
if(odp=='a') {cout<<"poprawna odpowiedz"<<endl<<endl<<endl;
i++;
}
else{
	cout<<"odpowiedz zla "<<endl<<endl<<endl;
}



cout<<"10 PYTANIE "<<endl;


cout<<"Ktore z ponizszych zdan jest falszywe? "<<endl<<endl;
cout<<" a) Folder moze zawieraæ inny folder? "<<endl<<endl;
cout<<" b) Plik moze zawieraæ folder ?"<<endl<<endl;
cout<<" c) Plik moze byæ zawarty w folderze   ?"<<endl;
cin>>odp;	
if(odp=='a') {cout<<"poprawna odpowiedz"<<endl<<endl<<endl;
i++;
}
else{
	cout<<"odpowiedz zla "<<endl<<endl<<endl;
}
 	
 	cout<<"poprawnych odpowiedzi jest "<<endl;
cout<<i<<"/10"<<endl;
	int x;
	x=i*10;
	cout<<x<<"%"<<endl;
	
	cout<<"dostajesz ocene ";
	
 if  (x>=90)            cout<<"dbd"<<endl;
 if( (x>=75) && (x<90) )cout<<"db"<<endl;
 if( (x>=60) && (x<75) )cout<<"dst"<<endl;
 if( (x>=40) && (x<60) )cout<<"dop"<<endl;
 if( (x>=0)  &&  (x<40) )cout<<"ndst"<<endl;
 
 	



  



    system("PAUSE");
    return EXIT_SUCCESS;

}
