// HelloMundo.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <windows.h>

int main(int argc, char** argv)
{
  //informar cuantos argumentos se enviaron al programa
  std::cout << "N de argumentos: " << argc << std::endl;
  for (int i = 0; i < argc; i++)
  {
    std::cout << "  argv[" << i << "] : " << argv[i] << std::endl;
  }
  Sleep( atoi(argv[1]) );
  std::cout << "Hello World!\n";

}
