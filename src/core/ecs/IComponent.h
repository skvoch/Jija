#ifndef ICOMPONENT_H
#define ICOMPONENT_H

#include <numeric>
#include <memory>

class IComponent {
public:
    using Type = std::size_t;
    using Pointer = std::shared_ptr<IComponent>;
};


#endif // ICOMPONENT_H
