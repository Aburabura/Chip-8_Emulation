#include <cstdint>
#include <SDL2/SDL.h>
#include <glad/glad.h>

class Platform
{
    friend class imgui;

    public:
        platform(char const* title, int windowwidth, int windowHeight, int texturewidth, int textureHeight);
        ~Platform();
        void update(void const* buffer, int pitch);
        bool ProcessInput(uint8_t* keys);


    private:
        SDL_window* window{};
        SDL_GLContext gl_context{};
        GLuint framebuffer_texture;
        SDL_Renderer* renderer{};
        SDL_Texture* texture{};
};