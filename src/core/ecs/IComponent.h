#ifndef ICOMPONENT_H
#define ICOMPONENT_H

#include <numeric>
#include <memory>

class Entity;

class IComponent {
public:
    using Type = std::size_t;
    using Pointer = std::shared_ptr<IComponent>;

    friend class Entity;
protected:
    void registerInManager(std::size_t componentID, std::size_t entityID);
};


#endif // ICOMPONENT_H


