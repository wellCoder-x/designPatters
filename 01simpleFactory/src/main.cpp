
/***************************************************************************************************
* file:         $File$
* author:       $Author$
* date:         $Date$
* description:  $Description$

* copyright (c) 2020 WELL. All rights reserved
***************************************************************************************************/

#include <memory>
#include "ScAnimal.hpp"
#include "ScAinmalFactory.hpp"


int main()
{
    Sc::AinmalFactory l_aninmalFactory;

    std::shared_ptr<Sc::IAnimal> l_animal1 = l_aninmalFactory.createPet(Sc::AnimalType::Ecat, "Maomi", 2);
    std::shared_ptr<Sc::IAnimal> l_animal2 = l_aninmalFactory.createPet(Sc::AnimalType::Edog, "Wangwang", 3);
    std::shared_ptr<Sc::IAnimal> l_animal3 = l_aninmalFactory.createPet(Sc::AnimalType::Epig, "Pegy", 2);

    l_animal1->printInfo();
    l_animal2->printInfo();
    l_animal3->printInfo();

    l_animal1->playWithOwner();
    l_animal2->playWithOwner();
    l_animal3->playWithOwner();

    return 0;
}
