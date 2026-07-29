#include <iostream>
#include <string>

struct personaje
{
    std::string nombre;
    int vida;
    int karma;
};

int main() {

    personaje principal;
    principal.nombre = "Revan";
    principal.vida = 3;
    principal.karma = 0;

    std::cout << principal.nombre << " tiene " << principal.vida << " de vida y " << principal.karma << " de karma." << std::endl;

    int eleccion;

    std::cout << principal.nombre << " va caminando por el bosque cuando de repente se encuentra una carreta maltrecha con un anciano a sus pies. " << std::endl;
    std::cout << "Elige una de las siguientes opciones tecleando el numero correspondiente: " << std::endl;
    std::cout << "Opcion 1) Ayudar al Anciano - Opcion 2) Robar al Anciano - Opcion 3 Ignorar al Anciano" << std::endl;
    std::cin >> eleccion;

    if (eleccion == 1) {

        principal.vida = principal.vida - 1;
        principal.karma = principal.karma + 1;
        std::cout << "El Anciano en realidad era un demonio y te ataca por sorpresa" << std::endl;

} else if (eleccion == 2) {
    
} else if (eleccion == 3) {
    
} else {

}

    return 0;
}
