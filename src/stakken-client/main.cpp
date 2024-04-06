#include <stdio.h>

#include <SDL2/SDL.h>
#include <GL/gl3w.h>

SDL_Window* window;

const int WINDOW_WIDTH = 1280;
const int WINDOW_HEIGHT = 720;

int main() {
    gl3wInit();

    window = SDL_CreateWindow("Stakken", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WINDOW_WIDTH, WINDOW_HEIGHT, SDL_WINDOW_SHOWN | SDL_WINDOW_OPENGL | SDL_WINDOW_RESIZABLE);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 2);
    SDL_GL_SetAttribute(SDL_GL_STENCIL_SIZE, 8);
    SDL_GL_CreateContext(window);
    SDL_GL_SetSwapInterval(0);

    glClearColor(0, 0, 0, 1);

    SDL_Event event;
    bool running = true;
    while (running) {
        glClear(GL_COLOR_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);
        
        while (SDL_PollEvent(&event)) {
            switch (event.type) {
                case SDL_QUIT:
                    running = false;
                    break;
            }
        }

        SDL_GL_SwapWindow(window);
    }

    return 0;
}