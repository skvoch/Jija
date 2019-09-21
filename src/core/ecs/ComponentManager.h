#ifndef COMPONENTMANAGER_H
#define COMPONENTMANAGER_H

#include "IComponent.h"

#include <typeinfo>
#include <iostream>
#include <string>

class ComponentManager
{
public:
    static ComponentManager* getInstance()
    {
        static auto instance = new ComponentManager;
        return instance;
    }

    template<typename T>
    IComponent::Type getType() {
        std::cerr << "not found Componentmanager::getType<T>" << std::endl;
        return 0;
    }

private:
    ComponentManager();
    ComponentManager(const ComponentManager&) = delete;
    ComponentManager& operator=( const ComponentManager&) = delete;
};


#endif // COMPONENTMANAGER_H
