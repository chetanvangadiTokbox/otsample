#include <opentok.h>
#include <string>
#include <mutex>

#include <GL/glew.h>

class Renderer {
public:
    Renderer(const std::string name);

    void render();
    void set_frame(const otc_video_frame* frame);

private:
    otc_video_frame* last_frame;
    std::string name;
    std::mutex mutex;
    GLuint image_texture;
};
