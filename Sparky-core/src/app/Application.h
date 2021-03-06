#pragma once

#include <vector>

#include <sparkygl.h>
#include <sparky_types.h>

#include <graphics/Window.h>
#include <graphics/layers/Layer.h>
#include <utils/Timer.h>

namespace sparky {

	class Application
	{
	private:
		static Application* s_Instance;
	public:
		graphics::Window* window;
	private:
		bool m_Running, m_Suspended;
		Timer* m_Timer;
		uint m_UpdatesPerSecond, m_FramesPerSecond;

		const char* m_Name;
		uint m_Width, m_Height;

		std::vector<graphics::Layer*> m_LayerStack;
	public:
		Application(const char* name, uint width, uint height);
		virtual ~Application();

		virtual void Init();

		void PushLayer(graphics::Layer* layer);
		graphics::Layer* PopLayer();
		
		void Start();
		void Suspend();
		void Resume();
		void Stop();

	private:
		void OnTick();
		void OnUpdate();
		void OnRender();
	public:
		const uint GetFPS() const { return m_FramesPerSecond; }
		const uint GetUPS() const { return m_UpdatesPerSecond; }
	private:
		void Run();
	public:
		inline static Application& GetApplication() { return *s_Instance; }
	};


}