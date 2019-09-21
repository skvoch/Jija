#include "core/ecs/ComponentManager.h"
#include "core/ecs/Entity.h"
#include "core/ecs/Components/InputComponent.h"



int main()
{
    auto player = Entity(0);

    auto input = std::make_shared<InputComponent>();
    player.addComponent(std::move(input));
    std::cout << player.getComponent<InputComponent>()->key << std::endl;

}
