#include "String.h"

#include <cstring>

const int String::CAPACITY_INC = 10;

void String::reallocStr(int newCapacity) {
	m_capacity = newCapacity;
	char* newStr = new char[m_capacity];

	// If new capacity is smaller than the original string, truncates it.
	strncpy_s(newStr, m_capacity, m_str, m_length);
	if (m_length >= m_capacity) {
		m_length = m_capacity - 1;
	}

	delete[] m_str;
	m_str = newStr;
}

String::String(const char* str) {
	m_length = strlen(str);

	int strCapacity = m_length + 1;
	m_capacity = (strCapacity - strCapacity % CAPACITY_INC) + CAPACITY_INC;

	m_str = new char[m_capacity];
	strcpy_s(m_str, m_capacity, str);
}

String::String(int capacity) {
	m_capacity = capacity;

	m_length = 1;
	m_str = new char[m_capacity];
	m_str[0] = '\0';
}

String::String(const String& other) {
	m_length = other.m_length;
	m_capacity = other.m_capacity;
	m_str = new char[m_capacity];
	strcpy_s(m_str, m_capacity, other.m_str);
}

String::~String() {
	delete[] m_str;
}

char* String::getStr() {
	return m_str;
}
void String::setStr(const char* str) {
	m_length = strlen(str);

	int strCapacity = m_length + 1;
	if (strCapacity > m_capacity) {
		m_capacity = (strCapacity - strCapacity % CAPACITY_INC) + CAPACITY_INC;
		delete[] m_str;
		m_str = new char[m_capacity];
	}

	strcpy_s(m_str, m_capacity, str);
}

int String::length() {
	return m_length;
}

int String::capacity() {
	return m_capacity;
}

int String::count(String substring) {
	int count = 0;

	char* oldStr = m_str;
	char* substringLoc = strstr(oldStr, substring.m_str);

	while (substringLoc != nullptr) {
		count++;
		oldStr = substringLoc + substring.m_length;
		substringLoc = strstr(oldStr, substring.m_str);
	}

	return count;
}

void String::replace(String substring, String new_substring) {
	int minCapacity = m_length + count(substring) * (new_substring.m_length - substring.m_length) + 1;
	char* newStr = new char[minCapacity];
	newStr[0] = '\0';

	char* oldStr = m_str;
	char* substringLoc = strstr(oldStr, substring.m_str);

	while (substringLoc != nullptr) {
		strncat_s(newStr, minCapacity, oldStr, substringLoc - oldStr);
		strcat_s(newStr, minCapacity, new_substring.m_str);
		oldStr = substringLoc + substring.m_length;
		substringLoc = strstr(oldStr, substring.m_str);
	}

	setStr(newStr);
	delete[] newStr;
}

void String::insert(String str, int offset) {
	int minCapacity = m_length + str.length() + 1;
	char* newStr = new char[minCapacity];
	
	strncpy_s(newStr, minCapacity, m_str, offset);
	strcat_s(newStr, minCapacity, str.m_str);
	strcat_s(newStr, minCapacity, m_str + offset);

	setStr(newStr);
	delete[] newStr;
}