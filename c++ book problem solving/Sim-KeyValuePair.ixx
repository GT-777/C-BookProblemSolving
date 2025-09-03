export module sim:keyvaluepair;
import <concepts>;
import <string>;

template<typename T>
concept Arithmetic = std::integral<T> || std::floating_point<T>;

export namespace keyval
{
	template<std::integral Key, std::floating_point Value>
	class KeyValuePair
	{
	public:
		KeyValuePair(const Key& key, const Value& value) : key(key), value(value) {}
		KeyValuePair() = default;
		virtual ~KeyValuePair() = default;

		auto getKey() const { return key; }
		auto getValue() const { return value; }

		void setKey(const Key& k) { key = k; }
		void setValue(const Value& val) { value = val; }
		
		/*
		*  12 - 4
		*/
		auto static  concat(Arithmetic auto t1, Arithmetic auto t2)
		{
			return std::to_string(t1) + std::to_string(t2);
		}
	private:

		Key key;
		Value value;
	};


	// Specialization for const char* types
	/*template<>
	class KeyValuePair<const char*, const char*>
	{
	public:
		KeyValuePair(const char* key, const char* value)
			: key(key), value(value) {}

		KeyValuePair() = default;
		virtual ~KeyValuePair() = default;

		const char* getKey() const { return key; }
		const char* getValue() const { return value; }

		void setKey(const char* k) { key = k; }
		void setValue(const char* v) { value = v; }

	private:
		const char* key;
		const char* value;
	};   */
}