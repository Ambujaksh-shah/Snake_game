#ifndef RENDERER_H
#define RENDERER_H

#include <vector>
#include "SDL.h"
#include "snake.h"
#include"RenderingImage.h"

class Renderer {
 public:
  Renderer(const std::size_t screen_width, const std::size_t screen_height,
           const std::size_t grid_width, const std::size_t grid_height);
  ~Renderer();
  void Render(Snake const snake, SDL_Point const &food, SDL_Point const &poision);
  void UpdateWindowTitle(int score, int fps);
  int get_windowMenu();

 private:
  ImageRendering ImgLoad;

  SDL_Window *sdl_window;
  SDL_Texture *TextureSurface = nullptr;

  SDL_Renderer *sdl_renderer;

  const std::size_t screen_width;
  const std::size_t screen_height;
  const std::size_t grid_width;
  const std::size_t grid_height;
};

#endif