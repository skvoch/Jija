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
        using PointerType = decltype(component.get());
        using Type = typename std::remove_pointer<PointerType>::type;

        const auto typeID = ComponentManager::getInstance()->getType<Type>();

        if(!m_components.count(typeID)) {
            component->registerInManager(typeID, m_id);
            m_components.insert({typeID, std::move(component)});
            return true;
        } else {
            std::cerr << "Entity::error - component already exist (" << typeid(component).name() << std::endl;
            return false;
        }
    }

    template<typename T>
    std::shared_ptr<T> getComponent() {
        const auto typeID = ComponentManager::getInstance()->getType<T>();

        if(m_components.count(typeID)) {
            return std::static_pointer_cast<T>(m_components[typeID]);
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
