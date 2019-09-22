#ifndef ISYSTEM_H
#define ISYSTEM_H

#include <memory>

class ISystem
{
public:
    using Pointer = std::shared_ptr<ISystem>;
    using Type = std::size_t;

    ISystem() = default;
    virtual ~ISystem() = default;

    virtual void process();
private:

};

#endif // ISYSTEM_H
