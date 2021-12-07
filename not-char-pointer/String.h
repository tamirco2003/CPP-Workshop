#pragma once

/**
 * Class representation of a string (might have overdone it a little).
 */
class String {
private:
	/**
	 * By how much should the buffer capacity be increased?
	 */
	static const int CAPACITY_INC;

	/**
	 * Internal buffer.
	 */
	char* m_str;
	/**
	 * Length of string.
	 */
	int m_length;
	/**
	 * Capacity of internal buffer.
	 */
	int m_capacity;

	/**
	 * Reallocates the internal buffer, truncates string if too long.
	 */
	void reallocStr(int newCapacity);
public:
	/*
	 * Constructor, copies string to internal buffer.
	 */
	String(const char* str);

	/**
	 * Constructor, allocates internal string but only inserts null character.
	 */
	String(int capacity);

	/**
	 * Copy constructor.
	 */
	String(const String& other);

	/**
	 * Destructor, deletes m_str.
	 */
	~String();

	/**
	 * Returns internal char*.
	 */
	char* getStr();
	/**
	 * Resets internal char*, assumes it was previously allocated.
	 */
	void setStr(const char* str);

	/**
	 * m_length getter.
	 */
	int length();
	/**
	 * m_capacity getter.
	 */
	int capacity();

	/**
	 * Counts number of occurences of substring.
	 */
	int count(String substring);

	/**
	 * Replaces all occurences of substring with new_substring.
	 */
	void replace(String substring, String new_substring);

	/**
	 * Inserts str in offset.
	 */
	void insert(const String str, int offset);
};

