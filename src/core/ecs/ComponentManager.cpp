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

void ComponentManager::register_component(const IComponent::Type type, const std::size_t entityID)
{
    m_registerTable[type].push_back(entityID);
}
