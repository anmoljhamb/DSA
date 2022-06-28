using namespace std; 

template<typename T>
class vector
{
private:
    T *arr;
    int capacity, size;

public:
    vector(int n = 1)
    {
        size = 0;
        capacity = n;
        arr = new T[capacity];
    }

    vector(int n, int x)
    {
        size = n;
        capacity = n;
        arr = new T[capacity];
        for (int i = 0; i < n; i++)
        {
            arr[i] = x;
        }
    }

    ~vector()
    {
        delete[] arr;
    }

    T &operator[](int i)
    {
        return arr[i];
    }

    T get(int index)
    {
        return arr[index];
    }

    int get_size()
    {
        return size;
    }

    int get_capacity()
    {
        return capacity;
    }

    void push_back(T element)
    {
        if (size == capacity)
        {
            T *old_arr = arr;
            capacity = 2 * capacity;
            arr = new T[capacity];

            for (int i = 0; i < size; i++)
            {
                arr[i] = old_arr[i];
            }

            delete[] old_arr;
        }

        arr[size] = element;
        size++;
    }

    void pop()
    {
        size--;
    }

    bool is_empty()
    {
        return size == 0;
    }

    T front()
    {
        return arr[0];
    }

    T back()
    {
        return arr[size - 1];
    }

    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
