#include <iostream>
#include <string>

struct personaje
{
        std::string nombre;
        int vida;
        int karma;
};

bool estaVivo(personaje jugador);

personaje decision1(personaje jugador, int eleccion);
personaje decision2(personaje jugador, int eleccion);
personaje decision3(personaje jugador, int eleccion);
personaje decision4(personaje jugador, int eleccion);
personaje decision5(personaje jugador, int eleccion);

void tipoFinal(personaje jugador);

int main()
{

        personaje principal;
        principal.nombre = "Revan";
        principal.vida = 3;
        principal.karma = 0;

        std::cout << principal.nombre << " tiene " << principal.vida << " de vida y " << principal.karma << " de karma." << std::endl;

        int eleccion;

        std::cout << "Revan avanza por el sendero del bosque cuando el crujido de la madera lo detiene: ante el yace una carreta destrozada, y junto a ella, tendido en el suelo, un anciano herido." << std::endl;
        std::cout << "Elige una de las siguientes opciones tecleando el numero correspondiente: " << std::endl;
        std::cout << "Opcion 1) Ayudar al anciano." << std::endl;
        std::cout << "Opcion 2) Robar al anciano." << std::endl;
        std::cout << "Opcion 3) Ignorar al anciano." << std::endl;
        std::cin >> eleccion;

        principal = decision1(principal, eleccion);

        bool vivo = estaVivo(principal);

        if (!vivo)
        {
                std::cout << "Game Over" << std::endl;
                return 0;
        }

        std::cout << "Continuas tu camino y te adentras mas en el bosque, atraido por gritos de batalla. Al acercarte, descubres a un grupo de bandidos emboscando a varios caballeros." << std::endl;
        std::cout << "Opcion 1) Te unes a los bandidos y atacas a los caballeros." << std::endl;
        std::cout << "Opcion 2) Ayudas a los caballeros a repeler la emboscada." << std::endl;
        std::cout << "Opcion 3) Te ocultas entre las sombras y atacas a ambos bandos a distancia, solo por diversion." << std::endl;
        std::cin >> eleccion;

        principal = decision2(principal, eleccion);

        vivo = estaVivo(principal);

        if (!vivo)
        {
                std::cout << "Game Over" << std::endl;
                return 0;
        }

        std::cout << "Caminas entre la niebla de un pantano cuando un olor extraño te detiene. Al investigar, encuentras a una bruja a punto de arrojar a unos niños a su caldero." << std::endl;
        std::cout << "Opcion 1) Prefieres ser cauteloso y sigues tu camino." << std::endl;
        std::cout << "Opcion 2) Te armas de valor y confrontas a la bruja." << std::endl;
        std::cout << "Opcion 3) Esperas a que la bruja este distraida cocinando para matarla por la espalda." << std::endl;
        std::cin >> eleccion;

        principal = decision3(principal, eleccion);

        vivo = estaVivo(principal);

        if (!vivo)
        {
                std::cout << "Game Over" << std::endl;
                return 0;
        }

        std::cout << "Exploras las vastas cavernas de cristal cuando un quejido rompe el silencio. Al investigar, encuentras a un guardia de la ciudad, herido por una flecha en la rodilla." << std::endl;
        std::cout << "Opcion 1) Es un blanco facil: decides matarlo y robar sus pertenencias." << std::endl;
        std::cout << "Opcion 2) Te acercas para ayudarlo y brindarle asistencia." << std::endl;
        std::cout << "Opcion 3) El pasado te ha enseñado a desconfiar de extraños; le arrojas una pocion y sigues tu camino." << std::endl;
        std::cin >> eleccion;

        principal = decision4(principal, eleccion);

        vivo = estaVivo(principal);

        if (!vivo)
        {
                std::cout << "Game Over" << std::endl;
                return 0;
        }

        std::cout << "El rey te ha convocado a su sala del trono, dispuesto a recompensarte por tus grandes hazañas." << std::endl;
        std::cout << "Opcion 1) Decides atacarlo y matarlo para arrebatarle el poder." << std::endl;
        std::cout << "Opcion 2) Aceptas el premio con gusto y te conviertes en capitan de la guardia real." << std::endl;
        std::cout << "Opcion 3) Rechazas el premio con amabilidad, pues tu vida pertenece al camino y a la aventura." << std::endl;
        std::cin >> eleccion;

        principal = decision5(principal, eleccion);

        vivo = estaVivo(principal);

        if (!vivo)
        {
                std::cout << "Game Over" << std::endl;
                return 0;
        }

        tipoFinal(principal);

        return 0;
}

bool estaVivo(personaje jugador)
{
        if (jugador.vida > 0)
        {
                return true;
        }
        else
        {
                return false;
        }
}

personaje decision1(personaje jugador, int eleccion)
{

        if (eleccion == 1)
        {

                jugador.vida = jugador.vida - 1;
                jugador.karma = jugador.karma + 1;
                std::cout << "El anciano no era lo que parecia: sus ojos se tiñen de fuego y revela su verdadera forma, un demonio que te ataca sin piedad. Malherido, logras escapar entre la maleza..." << std::endl;
                std::cout << "- 1 vida + 1 karma" << std::endl;
        }
        else if (eleccion == 2)
        {

                jugador.karma = jugador.karma - 2;
                std::cout << "En cuanto extiendes la mano hacia sus pertenencias, el anciano revela su verdadera naturaleza demoniaca. Atento al peligro, logras bloquear el golpe y escapas ileso." << std::endl;
                std::cout << "- 2 karma" << std::endl;
        }
        else if (eleccion == 3)
        {

                jugador.karma = jugador.karma - 1;
                std::cout << "Algo en la escena no te da buena espina. Decides no arriesgarte y continuas tu camino sin mirar atras." << std::endl;
                std::cout << "- 1 karma" << std::endl;
        }
        else
        {

                std::cout << "Comando no valido. Por favor, selecciona la opcion 1, 2 o 3." << std::endl;
        }

        return jugador;
}

personaje decision2(personaje jugador, int eleccion)
{

        if (eleccion == 1)
        {

                jugador.karma = jugador.karma - 1;
                std::cout << "Junto a los bandidos, logras vencer a los caballeros. Como recompensa, te quedas con una parte del botin." << std::endl;
                std::cout << "- 1 karma" << std::endl;
        }
        else if (eleccion == 2)
        {

                jugador.karma = jugador.karma + 2;
                std::cout << "Con tu ayuda, los caballeros repelen a los bandidos y capturan a varios. Al llegar a la ciudad mas cercana, te recompensan por tu valentia." << std::endl;
                std::cout << "+ 2 karma" << std::endl;
        }
        else if (eleccion == 3)
        {

                jugador.karma = jugador.karma - 2;
                std::cout << "Desde las sombras, atacas a ambos bandos solo por el placer del caos. Cuando finalmente te descubren, escapas entre carcajadas." << std::endl;
                std::cout << "- 2 karma" << std::endl;
        }
        else
        {

                std::cout << "Comando no valido. Por favor, selecciona la opcion 1, 2 o 3." << std::endl;
        }

        return jugador;
}

personaje decision3(personaje jugador, int eleccion)
{

        if (eleccion == 1)
        {

                jugador.karma = jugador.karma - 1;
                std::cout << "Logras alejarte a tiempo, pero la conciencia te pesa: sabes que abandonaste a esos niños a su suerte." << std::endl;
                std::cout << "- 1 karma" << std::endl;
        }
        else if (eleccion == 2)
        {

                jugador.karma = jugador.karma + 2;
                std::cout << "Sabias que las probabilidades estaban en tu contra, pero con la ayuda de uno de los niños logras vencer a la bruja, arrojandola a su propio caldero." << std::endl;
                std::cout << "+ 2 karma" << std::endl;
        }
        else if (eleccion == 3)
        {

                jugador.karma = jugador.karma - 2;
                std::cout << "Aprovechas su distraccion para acabar con la bruja y te quedas con sus tesoros." << std::endl;
                std::cout << "- 2 karma" << std::endl;
        }
        else
        {

                std::cout << "Comando no valido. Por favor, selecciona la opcion 1, 2 o 3." << std::endl;
        }

        return jugador;
}

personaje decision4(personaje jugador, int eleccion)
{

        if (eleccion == 1)
        {

                jugador.karma = jugador.karma - 2;
                jugador.vida = jugador.vida - 2;
                std::cout << "Apenas acabas con el indefenso guardia y te dispones a saquearlo, una estalactita de cristal se desprende del techo y te hiere gravemente." << std::endl;
                std::cout << "- 2 karma - 2 vida" << std::endl;
        }
        else if (eleccion == 2)
        {

                jugador.karma = jugador.karma + 2;
                std::cout << "Cargas al guardia sobre tus hombros hasta la salida, donde el capitan de la guardia elogia tu heroismo y te recompensa con oro." << std::endl;
                std::cout << "+ 2 karma" << std::endl;
        }
        else if (eleccion == 3)
        {

                jugador.karma = jugador.karma + 1;
                std::cout << "Despues de darle la pocion al guardia, continuas tu camino. Tiempo despues, te lo encuentras en la ciudad; el agradece tu ayuda y comprende tu desconfianza." << std::endl;
                std::cout << "+ 1 karma" << std::endl;
        }
        else
        {

                std::cout << "Comando no valido. Por favor, selecciona la opcion 1, 2 o 3." << std::endl;
        }

        return jugador;
}

personaje decision5(personaje jugador, int eleccion)
{

        if (eleccion == 1)
        {

                jugador.karma = jugador.karma - 2;
                std::cout << "Intentas asesinar al rey, pero los guardias reales te detienen antes de lograrlo y te arrojan al calabozo." << std::endl;
                std::cout << "- 2 karma" << std::endl;
        }
        else if (eleccion == 2)
        {

                jugador.karma = jugador.karma + 1;
                std::cout << "Aceptas tu nuevo puesto como capitan de la guardia real y te instalas en una vida mas tranquila." << std::endl;
                std::cout << "+ 1 karma" << std::endl;
        }
        else if (eleccion == 3)
        {

                jugador.karma = jugador.karma + 2;
                std::cout << "El rey te obsequia un compañero de viaje y una bolsa de monedas, admitiendo con una sonrisa envidiosa que desearia tener tu libertad. Emprendes entonces un nuevo viaje rumbo a lo desconocido." << std::endl;
                std::cout << "+ 2 karma" << std::endl;
        }
        else
        {

                std::cout << "Comando no valido. Por favor, selecciona la opcion 1, 2 o 3." << std::endl;
        }

        return jugador;
}

void tipoFinal(personaje jugador)
{
        if (jugador.karma >= 1)
        {
                std::cout << "Final Bueno: Tus hazañas trascendieron el tiempo. Generaciones despues, tu historia sigue viva en las canciones que se cantan en tu nombre." << std::endl;
        }
        else if (jugador.karma == 0)
        {
                std::cout << "Final Neutro: Viviste una vida llena de aventuras, sin gloria ni infamia. Tus seres queridos te recordaron... hasta que, con el tiempo, dejaron de hacerlo." << std::endl;
        }
        else
        {
                std::cout << "Final Malo: Mueres como viviste: solo, olvidado, como una rata mas en el calabozo del castillo." << std::endl;
        }
}