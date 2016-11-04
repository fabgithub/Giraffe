/**
 *    > Author:   UncP
 *    > Mail:     770778010@qq.com
 *    > Github:	  https://www.github.com/UncP/Giraffe
 *    > Description:
 *
 *    > Created Time: 2016-09-17 16:53:00
**/

#include "image.hpp"

namespace Giraffe {

Vector3d ImageTexture::evaluate(const Point3d &position, const Point2d &uv,
	Vector3d &normal) const
{
	int uu = static_cast<int>(std::fmod(uv.x_ * frequency_, 1.0) * (width_ - 1));
	int vv = static_cast<int>(std::fmod(uv.y_ * frequency_, 1.0) * (height_ - 1));
	return image_[uu + vv * width_];
}

} // namespace Giraffe
