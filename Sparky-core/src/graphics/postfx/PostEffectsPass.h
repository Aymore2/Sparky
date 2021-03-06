#pragma once

#include "../Framebuffer.h"
#include "../shaders/Shader.h"

namespace sparky { namespace graphics {

	class PostEffectsPass
	{
	private:
		Shader* m_Shader;
	public:
		PostEffectsPass(Shader* shader);
		~PostEffectsPass();

		void RenderPass(Framebuffer* target);
	};

} }