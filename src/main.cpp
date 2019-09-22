#include "core/ecs/Components/InputComponent.h"
#include "core/ecs/ComponentManager.h"
#include "core/ecs/EntityManager.h"
#include "core/ecs/Entity.h"



int main()
{
    auto entityManager = EntityManager::getInstance();
    auto componentManager = ComponentManager::getInstance();

    auto player = entityManager->createEntity();
    auto input = componentManager->createComponent<InputComponent>();

    player->addComponent(std::move(input));

    auto component = player->getComponent<InputComponent>();
    auto value = component->key;
    std::cout << value << std::endl;

    for(auto id: ComponentManager::getInstance()->getEntitesIDs<InputComponent>()) {
        std::cout << id << std::endl;
    }

}
