#include "InputSystem.h"
#include "../ComponentManager.h"
#include "../EntityManager.h"

#include <iostream>

InputSystem::InputSystem()
{

}

void InputSystem::process()
{
    const auto enitites_ids = m_componentManager->getEntitesIDs<InputComponent>();

    for(const auto id: enitites_ids) {
        auto keys = m_entityManager->getEntity(id)->getComponent<InputComponent>()->getKeySetup();

        for(const auto & key:keys){


            std::cout << "Used key:" << Utils::Keys::type2string(key) << std::endl;
        }
    }

    std::cout << "\n" << std::endl;
}
