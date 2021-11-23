#include "SMCE_dll.hpp"
#include <cstdint>
#include "SMCE/BoardView.hpp"

class SMCE__DLL_RT_API SMCE_Framebuffer {
  public:
    SMCE_Framebuffer(int id) {
        m_id = id;
    }
    void set (int x, int y, uint8_t r, uint8_t g, uint8_t b);
    int begin (std::uint16_t width, std::uint16_t height);
    void end ();
  private:
    int m_id;
    smce::BoardView board_view;
};