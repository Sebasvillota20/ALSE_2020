#include <string>
#include <iostream>
#include <fstream>
#include <math.h>

struct Term{
    double  coef;
    int     expo;
};

int main(int argc, char** argv){
	
	if(argc != 2){
        std::cout << "El programa se usa así:" << std::endl;
        std::cout << "polynom path_to_file" << std::endl;
        std::cout << "Se debe indicar la ruta al archivo a leer" << std::endl;
        return 1;
    }

    std::string path;
    path = argv[1];
    std::ifstream archivo;
    archivo.open(path);

    std::cout << "Se abrirá el archivo: " << path << std::endl;

    Term Polynom[6];
    double a = 0.;
    int b = 0;
    int i = 0;
    std::string variable="";

    if(archivo.is_open()){
        // Aquí va el codigo que se va a hacer para leer el archivo
        getline(archivo, path );
        variable = path;

        while(!archivo.eof()){
            getline(archivo, path);
            a = atof( path.c_str() );
            getline( archivo, path );
            b = atoi( path.c_str() );
            Polynom[i].coef = a;
            Polynom[i].expo = b;
            i++;
        }
    }
    /*
    std::cout << "¿Cuál es la varible del polinomio? ";
    std::cin >> path;
    */
    i=0;
    while(i < 6 && Polynom[i].coef != 0){
        if(i > 0 && Polynom[i].coef > 0 ) std::cout << "+";
        std::cout << Polynom[i].coef << variable << "^" << Polynom[i].expo;
        i++;
    }
    std::cout << std::endl;

    return 0;
}









