#ifndef ISYSTEM_H
#define ISYSTEM_H

#include <memory>


class ComponentManager;
class EntityManager;

class ISystem
{
public:
    using Pointer = std::shared_ptr<ISystem>;
    using Type = std::size_t;
    ISystem();

    virtual ~ISystem() = default;

    virtual void process() = 0;
protected:
    ComponentManager* m_componentManager;
    EntityManager* m_entityManager;
};

#endif // ISYSTEM_H
