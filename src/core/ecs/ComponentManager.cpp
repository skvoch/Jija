#include "ComponentManager.h"
#include "Components/InputComponent.h"



ComponentManager::ComponentManager()
{

}

template<>
IComponent::Type ComponentManager::getType<IComponent>() {
    return 0;
}

template<>
IComponent::Type ComponentManager::getType<InputComponent>() {
    return 1;
}


