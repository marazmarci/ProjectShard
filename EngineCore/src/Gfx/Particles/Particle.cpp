#include "Particle.h"
#include "../ColorUtils.h"

namespace Shard
{
	namespace Gfx
	{
		Particle::Particle(const Maths::Vector2f& pos, const Maths::Vector2f& vel, float life, const Maths::Vector4f& color, float rot, float scl)
			: Position(pos), Velocity(vel), Life(life), Rotation(rot), Scale(scl), Color(ColorUtils::RGBATo32IntABGR(color))
		{
		}
	}
}