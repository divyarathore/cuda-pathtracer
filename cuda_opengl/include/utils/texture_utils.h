#pragma once

namespace texture {
/// <summary>
/// Extracts two faces of a cubecross, and appends them
/// in the `out' value.
/// </summary>
float* append_cube_faces(float* out, const float* face, unsigned int width,
                         unsigned int x_start, unsigned int in_nb_comp,
                         unsigned int out_nb_comp, bool horizontal,
                         bool reverse_order);
}
