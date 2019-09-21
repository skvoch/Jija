#ifndef COMPONENTMANAGER_H
#define COMPONENTMANAGER_H

#include "IComponent.h"

#include <typeinfo>
#include <iostream>
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

private:
    ComponentManager() = default;
    ComponentManager(const ComponentManager&) = delete;
    ComponentManager& operator=( const ComponentManager&) = delete;
    std::string name;
};




#endif // COMPONENTMANAGER_H
