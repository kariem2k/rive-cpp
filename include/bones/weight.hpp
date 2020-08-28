#ifndef _RIVE_WEIGHT_HPP_
#define _RIVE_WEIGHT_HPP_
#include "generated/bones/weight_base.hpp"
#include "math/vec2d.hpp"
#include <stdio.h>

namespace rive
{
	class Weight : public WeightBase
	{
	private:
		Vec2D m_Translation;

	public:
		Vec2D& translation() { return m_Translation; }

		StatusCode onAddedClean(CoreContext* context) override
		{
			return StatusCode::Ok;
		}
		StatusCode onAddedDirty(CoreContext* context) override;

		static void deform(float x,
		                   float y,
		                   int indices,
		                   int weights,
		                   const Mat2D& world,
		                   const float* boneTransforms,
		                   Vec2D& result);
	};
} // namespace rive

#endif