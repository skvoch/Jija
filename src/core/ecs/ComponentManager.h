#ifndef COMPONENTMANAGER_H
#define COMPONENTMANAGER_H

#include "IComponent.h"

#include <unordered_map>
#include <iostream>
#include <typeinfo>
#include <vector>
#include <string>

#include "Components/InputComponent.h"

class ComponentManager
{
public:
    static ComponentManager* getInstance();

    template<typename T>
    IComponent::Type getType() {
        throw std::logic_error("Partial specialization for ComponentManager::getType<T> not exist");
    }

    template<typename T>
    std::vector<std::size_t> getEntitesIDs() {
        return m_registerTable[getType<T>()];
    }

    //todo args
    template<typename T>
    std::shared_ptr<T> createComponent() {
        return std::make_shared<T>();
    }

    void register_component(const IComponent::Type type, const std::size_t entityID);
private:
    ComponentManager() = default;
    ComponentManager(const ComponentManager&) = delete;
    ComponentManager& operator=( const ComponentManager&) = delete;

    std::unordered_map<InputComponent::Type, std::vector<std::size_t>> m_registerTable;
};




#endif // COMPONENTMANAGER_H
