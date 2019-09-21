#include "core/ecs/ComponentManager.h"
#include "core/ecs/Entity.h"
#include "core/ecs/Components/InputComponent.h"



int main()
{
    auto player = Entity(0);
    auto input = std::make_shared<InputComponent>();
    player.addComponent(std::move(input));


    // usage
    auto component = player.getComponent<InputComponent>();
    auto value = component->key;
    std::cout << value << std::endl;

    for(auto id: ComponentManager::getInstance()->getEntitesByComponent<InputComponent>()) {
        std::cout << id << std::endl;
    }

}
