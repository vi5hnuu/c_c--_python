#include<iostream>
#include<windows.h>
using namespace std;

int main(){
system("dir *.cpp");
char path[MAX_PATH];
unsigned long int spc,bps,nfc,tnc;
GetDiskFreeSpaceA("c:\\",&spc,&bps,&nfc,&tnc);

cout<<"Sector per clustor = "<<spc<<endl;
cout<<"bytes per clustor = "<<bps<<endl;
cout<<"Number of free clustor = "<<nfc<<endl;
cout<<"Total number of clustor = "<<tnc<<endl;

float capacity,avlbl,multiplier;
multiplier=spc/1024.0f/1024.0f/1024.0f;
capacity=tnc*multiplier;
avlbl=nfc*multiplier;
cout<<"Disk capacity = "<<capacity<<"GB"<<endl;
cout<<"Available space = "<<avlbl<<"GB"<<endl;

GetModuleFileNameA(NULL,path,MAX_PATH);
cout<<"EXE file "<<path<<endl;

GetCurrentDirectoryA(MAX_PATH,path);
cout<<"current working directory "<<path<<endl;

cout<<"Creating directory Mydir.."<<endl;
CreateDirectoryA("Mydir",NULL);

cout<<"Changing to mydir."<<endl;
SetCurrentDirectoryA("Mydir");
GetCurrentDirectoryA(MAX_PATH,path);
cout<<"Current working directory."<<endl;


cout<<"changing to parent of mydir."<<endl;
SetCurrentDirectory("..");
GetCurrentDirectoryA(MAX_PATH,path);
cout<<"Current working directory."<<endl;

cout<<"Creating file tempfile..."<<endl;
HANDLE hfile;
hfile=CreateFileA("tempfile",GENERIC_WRITE,FILE_SHARE_WRITE,NULL,CREATE_ALWAYS,0,NULL);

FILETIME ftcreate,ftaccess,ftwrite;
SYSTEMTIME stUTC,stLocal;

GetFileTime(hfile,&ftcreate,&ftaccess,&ftwrite);

FileTimeToSystemTime(&ftcreate,&stUTC);
//SytemTimeToTzSpecificLocalTime(NULL,&stUTC,&stLocal);

/*cout<<"File creation date :";
cout<stLocal.wDay<<"/"<<stLocal.wMonth<<"/"<<stLocal.wYear<<endl;
cout<<"File creation time :";
cout<stLocal.wHour<<"/"<<stLocal.wMonth<<"/"<<stLocal.wSear<<endl;
*/
}
