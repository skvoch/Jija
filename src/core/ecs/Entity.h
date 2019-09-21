#ifndef ENTITY_H
#define ENTITY_H

#include <unordered_map>
#include <iostream>

#include "ComponentManager.h"
#include "IComponent.h"


class Entity
{
public:
    using ID = std::size_t;
    Entity(const ID id);

    template<typename T>
    bool addComponent(const T&&component) {
        auto instance = ComponentManager::getInstance();
        const auto type = instance->getType<T>();

        if(m_components.find(type) == m_components.end()) {
            m_components.insert({type, std::move(component)});
            return true;
        } else {
            std::cerr << "Entity::error - component already exist (" << typeid(component).name() << std::endl;
            return false;
        }
    }

    template<typename T>
    std::shared_ptr<T> getComponent() {
        const auto type = ComponentManager::getInstance()->getType<T>();

        if(m_components.find(type) == m_components.end()) {
            return std::static_pointer_cast<T>(m_components[type]);
        } else {
            std::cerr << "Entity::error - component not exist (" << typeid(T).name() << std::endl;
            return nullptr;
        }
    }

    ID getID() const;
private:
    const ID m_id;
    std::unordered_map<IComponent::Type, IComponent::Pointer> m_components;
};

#endif // ENTITY_H
