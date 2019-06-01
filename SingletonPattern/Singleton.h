#ifndef _SINGLETON_H
#define _SINGLETON_H

template<typename T>
class Singleton
{
protected:
	static T* m_instance;
private:
	Singleton() :m_instance(0) {};
	~Singleton() {};
	Singleton& operator=(Singleton const&) {};
public:
	static T* GetInstance();
	static void destroy();
	static void AssignInstance(T* t);
};

template<typename T>
typename T* Singleton<T>::m_instance = 0;

template<typename T>
T* Singleton<T>::GetInstance()
{
	return m_instance;
}

template <typename T>
void Singleton<T>::AssignInstance(T* t)
{
	m_instance = t;
}

template<typename T>
void Singleton<T>::destroy()
{
	delete Singleton<T>::m_instance;
	Singleton<T>::m_instance = 0;
}

#endif