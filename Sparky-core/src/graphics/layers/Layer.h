#pragma once

#include <sparky_types.h>

#include "../../events/Event.h"
#include "../../events/IEventListener.h"
#include "../Window.h"

namespace sparky { namespace graphics {

	class Layer : public events::IEventListener
	{
	protected:
		Window* m_Window;
	public:
		Layer();
		virtual ~Layer();

		virtual void Init();
		virtual bool OnEvent(const events::Event& event);
		virtual void OnTick();
		virtual void OnUpdate();
		virtual void OnRender();
	};

} }