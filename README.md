类的使用方法：

作为一个类的成员对象来使用。如:
Class CMyDemoClass
{
...
private:
  CSimpleMutex m_mtx;
...
}

当我们进入需要互斥执行的代码块时，m_mtx.Acquire();退出需要互斥的代码块时，m_mtx.Release()。
