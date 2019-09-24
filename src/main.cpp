#include "core/ecs/ComponentManager.h"
#include "core/ecs/SystemManager.h"
#include "core/ecs/EntityManager.h"
#include "core/ecs/Entity.h"

#include "core/ecs/Systems/InputSystem.h"
#include "core/ecs/Systems/RenderSystem.h"


int main(int argc, char** argv)
{
    auto entityManager = EntityManager::getInstance();
    auto componentManager = ComponentManager::getInstance();
    auto systemManager = SystemManager::getInstance();

    systemManager->addSystem<InputSystem>();
    systemManager->addSystem<RenderSystem>();


    auto player = entityManager->createEntity();
    player->addComponent(componentManager->createComponent<InputComponent>());

    auto component = player->getComponent<InputComponent>();

    component->registerKey(InputComponent::Key::A);
    component->registerKey(InputComponent::Key::W);
    component->registerKey(InputComponent::Key::S);
    component->registerKey(InputComponent::Key::D);

    return systemManager->waitForFinished();
}
