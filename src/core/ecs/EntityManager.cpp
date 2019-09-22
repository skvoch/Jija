#include "EntityManager.h"



EntityManager* EntityManager::getInstance()
{
    static auto instance = new EntityManager;
    return instance;
}

Entity::Pointer EntityManager::createEntity()
{
    static Entity::ID index = 0;
    index++;

    m_memory[index] = std::make_shared<Entity>(index);
    return m_memory[index];
}

Entity::Pointer EntityManager::getEntity(const Entity::ID value)
{
    return m_memory[value];
}
