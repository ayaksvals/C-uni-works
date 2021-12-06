#include <iostream>
#include <fstream>
#include <cctype> //ctype.h - toupper()

using namespace std;

int main(){
 char fname[20] = "input.txt";
 ifstream f(fname);

 string Artikles[] = {"der", "das", "die", 
                      "den", "der", "dem"
                     };

 string buf;
 bool isArtikle = false; 

 ofstream f2("temp.txt"); 

 while(f >> buf){
  //  cout<<"buf"<<buf;

    if(art) {
       buf[0] = toupper(buf[0]);
    }
    clog << buf << " ";
    f2 << buf << " "; 

    isArtikle = false; 
    for(int i = 0; i < 6; i++){
       if(buf == Artikles[i]){ 
          isArtikle = true;
          break;
       }
    }  
   
 } 

 f.close(); 
 f2.close();

 
 rename("temp.txt", fname);

}