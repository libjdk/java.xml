#ifndef _com_sun_org_apache_bcel_internal_generic_ATHROW_h_
#define _com_sun_org_apache_bcel_internal_generic_ATHROW_h_
//$ class com.sun.org.apache.bcel.internal.generic.ATHROW
//$ extends com.sun.org.apache.bcel.internal.generic.Instruction
//$ implements com.sun.org.apache.bcel.internal.generic.UnconditionalBranch,com.sun.org.apache.bcel.internal.generic.ExceptionThrower

#include <com/sun/org/apache/bcel/internal/generic/ExceptionThrower.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/UnconditionalBranch.h>
#include <java/lang/Array.h>

#pragma push_macro("ATHROW")
#undef ATHROW

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class Visitor;
						}
					}
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

class ATHROW : public ::com::sun::org::apache::bcel::internal::generic::Instruction, public ::com::sun::org::apache::bcel::internal::generic::UnconditionalBranch, public ::com::sun::org::apache::bcel::internal::generic::ExceptionThrower {
	$class(ATHROW, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::Instruction, ::com::sun::org::apache::bcel::internal::generic::UnconditionalBranch, ::com::sun::org::apache::bcel::internal::generic::ExceptionThrower)
public:
	ATHROW();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* that) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void accept(::com::sun::org::apache::bcel::internal::generic::Visitor* v) override;
	virtual $ClassArray* getExceptions() override;
	using ::com::sun::org::apache::bcel::internal::generic::Instruction::toString;
	virtual $String* toString() override;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ATHROW")

#endif // _com_sun_org_apache_bcel_internal_generic_ATHROW_h_