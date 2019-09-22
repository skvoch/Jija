TEMPLATE = app
CONFIG += console c++14
CONFIG -= app_bundle
CONFIG -= qt

LIBS += -lpthread \
       -lboost_system \
       -lboost_program_options \
       -lX11 \
       -lGL \
       -lGLU \
       -lglut \
       -lgainput

SOURCES += \
        src/main.cpp \
    src/core/ecs/Entity.cpp \
    src/core/ecs/ComponentManager.cpp \
    src/core/ecs/Components/InputComponent.cpp \
    src/core/ecs/IComponent.cpp \
    src/core/ecs/EntityManager.cpp \
    src/core/ecs/ISystem.cpp \
    src/core/ecs/SystemManager.cpp \
    src/core/ecs/Systems/InputSystem.cpp \
    src/core/ecs/Utils/Keys.cpp

HEADERS += \
    src/core/ecs/Entity.h \
    src/core/ecs/IComponent.h \
    src/core/ecs/ComponentManager.h \
    src/core/ecs/Components/InputComponent.h \
    src/core/ecs/EntityManager.h \
    src/core/ecs/ISystem.h \
    src/core/ecs/SystemManager.h \
    src/core/ecs/Systems/InputSystem.h \
    src/core/ecs/Utils/Keys.h
