#include "ComponentManager.h"



template<>
IComponent::Type ComponentManager::getType<InputComponent>() {
    return 0;
}




ComponentManager *ComponentManager::getInstance()
{
    static auto instance = new ComponentManager;
    return instance;
}
