#ifndef _com_sun_org_apache_xerces_internal_impl_xs_PSVIErrorList_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_PSVIErrorList_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.PSVIErrorList
//$ extends java.util.AbstractList
//$ implements com.sun.org.apache.xerces.internal.xs.StringList

#include <com/sun/org/apache/xerces/internal/xs/StringList.h>
#include <java/lang/Array.h>
#include <java/util/AbstractList.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {

class PSVIErrorList : public ::java::util::AbstractList, public ::com::sun::org::apache::xerces::internal::xs::StringList {
	$class(PSVIErrorList, $NO_CLASS_INIT, ::java::util::AbstractList, ::com::sun::org::apache::xerces::internal::xs::StringList)
public:
	PSVIErrorList();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual bool add(Object$* arg0) override;
	virtual void add(int32_t arg0, Object$* arg1) override;
	virtual bool addAll(int32_t arg0, ::java::util::Collection* arg1) override;
	virtual bool addAll(::java::util::Collection* arg0) override;
	virtual void clear() override;
	virtual $Object* clone() override;
	virtual bool contains(Object$* arg0) override;
	virtual bool containsAll(::java::util::Collection* arg0) override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual void forEach(::java::util::function::Consumer* arg0) override;
	virtual int32_t hashCode() override;
	virtual int32_t indexOf(Object$* arg0) override;
	void init$($StringArray* array, bool even);
	virtual bool contains($String* item) override;
	virtual $Object* get(int32_t index) override;
	virtual int32_t getLength() override;
	virtual bool isEmpty() override;
	virtual $String* item(int32_t index) override;
	virtual ::java::util::Iterator* iterator() override;
	virtual int32_t lastIndexOf(Object$* arg0) override;
	virtual ::java::util::ListIterator* listIterator() override;
	virtual ::java::util::ListIterator* listIterator(int32_t arg0) override;
	virtual ::java::util::stream::Stream* parallelStream() override;
	virtual $Object* remove(int32_t arg0) override;
	virtual bool remove(Object$* arg0) override;
	virtual bool removeAll(::java::util::Collection* arg0) override;
	virtual bool removeIf(::java::util::function::Predicate* arg0) override;
	virtual void replaceAll(::java::util::function::UnaryOperator* arg0) override;
	virtual bool retainAll(::java::util::Collection* arg0) override;
	virtual $Object* set(int32_t arg0, Object$* arg1) override;
	virtual int32_t size() override;
	virtual void sort(::java::util::Comparator* arg0) override;
	virtual ::java::util::Spliterator* spliterator() override;
	virtual ::java::util::stream::Stream* stream() override;
	virtual ::java::util::List* subList(int32_t arg0, int32_t arg1) override;
	virtual $ObjectArray* toArray() override;
	virtual $ObjectArray* toArray($ObjectArray* arg0) override;
	virtual $ObjectArray* toArray(::java::util::function::IntFunction* arg0) override;
	virtual $String* toString() override;
	$StringArray* fArray = nullptr;
	int32_t fLength = 0;
	int32_t fOffset = 0;
};

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_xs_PSVIErrorList_h_