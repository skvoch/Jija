#include "IComponent.h"
#include "ComponentManager.h"

void IComponent::registerInManager(std::size_t componentID, std::size_t entityID) {
    auto instance = ComponentManager::getInstance();
    instance->register_component(componentID, entityID);
}
