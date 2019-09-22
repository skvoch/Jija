#ifndef ENTITYMANAGER_H
#define ENTITYMANAGER_H

#include <boost/core/noncopyable.hpp>

#include <unordered_map>

#include "Entity.h"

class EntityManager : private boost::noncopyable
{
public:
    static EntityManager* getInstance();

    Entity::Pointer createEntity();
    Entity::Pointer getEntity(const Entity::ID value);
private:
    std::unordered_map<Entity::ID, Entity::Pointer> m_memory;
};

#endif // ENTITYMANAGER_H
