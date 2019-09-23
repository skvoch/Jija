#ifndef RENDERSYSTEM_H
#define RENDERSYSTEM_H

#include <GL/glut.h>

#include "../ISystem.h"

class RenderSystem : public ISystem
{
public:
    RenderSystem();

    void process() override;
};

#endif // RENDERSYSTEM_H
