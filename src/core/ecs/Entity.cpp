#include "Entity.h"

Entity::Entity(const std::size_t id)
    : m_id(id)
{

}

Entity::ID Entity::getID() const
{
    return m_id;
}
