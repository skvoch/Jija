#ifndef ENTITYMANAGER_H
#define ENTITYMANAGER_H

#include <unordered_map>

#include "Entity.h"

class EntityManager
{
public:
    static EntityManager* getInstance();

    Entity::Pointer createEntity();
    Entity::Pointer getEntity(const Entity::ID value);
private:
    EntityManager();
    EntityManager(const EntityManager&) = delete;
    EntityManager& operator=( const EntityManager&) = delete;


    std::unordered_map<Entity::ID, Entity::Pointer> m_memory;
};

#endif // ENTITYMANAGER_H
