#include "ISystem.h"
#include "ComponentManager.h"
#include "EntityManager.h"


ISystem::ISystem()
{
    m_componentManager = ComponentManager::getInstance();
    m_entityManager = EntityManager::getInstance();
}
