#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>

#include <com/sun/org/apache/bcel/internal/generic/AALOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/AASTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/ACONST_NULL.h>
#include <com/sun/org/apache/bcel/internal/generic/ALOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/ANEWARRAY.h>
#include <com/sun/org/apache/bcel/internal/generic/ARETURN.h>
#include <com/sun/org/apache/bcel/internal/generic/ARRAYLENGTH.h>
#include <com/sun/org/apache/bcel/internal/generic/ASTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/ATHROW.h>
#include <com/sun/org/apache/bcel/internal/generic/BALOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/BASTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/BIPUSH.h>
#include <com/sun/org/apache/bcel/internal/generic/BREAKPOINT.h>
#include <com/sun/org/apache/bcel/internal/generic/CALOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/CASTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/CHECKCAST.h>
#include <com/sun/org/apache/bcel/internal/generic/D2F.h>
#include <com/sun/org/apache/bcel/internal/generic/D2I.h>
#include <com/sun/org/apache/bcel/internal/generic/D2L.h>
#include <com/sun/org/apache/bcel/internal/generic/DADD.h>
#include <com/sun/org/apache/bcel/internal/generic/DALOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/DASTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/DCMPG.h>
#include <com/sun/org/apache/bcel/internal/generic/DCMPL.h>
#include <com/sun/org/apache/bcel/internal/generic/DCONST.h>
#include <com/sun/org/apache/bcel/internal/generic/DDIV.h>
#include <com/sun/org/apache/bcel/internal/generic/DLOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/DMUL.h>
#include <com/sun/org/apache/bcel/internal/generic/DNEG.h>
#include <com/sun/org/apache/bcel/internal/generic/DREM.h>
#include <com/sun/org/apache/bcel/internal/generic/DRETURN.h>
#include <com/sun/org/apache/bcel/internal/generic/DSTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/DSUB.h>
#include <com/sun/org/apache/bcel/internal/generic/DUP.h>
#include <com/sun/org/apache/bcel/internal/generic/DUP2.h>
#include <com/sun/org/apache/bcel/internal/generic/DUP2_X1.h>
#include <com/sun/org/apache/bcel/internal/generic/DUP2_X2.h>
#include <com/sun/org/apache/bcel/internal/generic/DUP_X1.h>
#include <com/sun/org/apache/bcel/internal/generic/DUP_X2.h>
#include <com/sun/org/apache/bcel/internal/generic/F2D.h>
#include <com/sun/org/apache/bcel/internal/generic/F2I.h>
#include <com/sun/org/apache/bcel/internal/generic/F2L.h>
#include <com/sun/org/apache/bcel/internal/generic/FADD.h>
#include <com/sun/org/apache/bcel/internal/generic/FALOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/FASTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/FCMPG.h>
#include <com/sun/org/apache/bcel/internal/generic/FCMPL.h>
#include <com/sun/org/apache/bcel/internal/generic/FCONST.h>
#include <com/sun/org/apache/bcel/internal/generic/FDIV.h>
#include <com/sun/org/apache/bcel/internal/generic/FLOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/FMUL.h>
#include <com/sun/org/apache/bcel/internal/generic/FNEG.h>
#include <com/sun/org/apache/bcel/internal/generic/FREM.h>
#include <com/sun/org/apache/bcel/internal/generic/FRETURN.h>
#include <com/sun/org/apache/bcel/internal/generic/FSTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/FSUB.h>
#include <com/sun/org/apache/bcel/internal/generic/GETFIELD.h>
#include <com/sun/org/apache/bcel/internal/generic/GETSTATIC.h>
#include <com/sun/org/apache/bcel/internal/generic/GOTO.h>
#include <com/sun/org/apache/bcel/internal/generic/GOTO_W.h>
#include <com/sun/org/apache/bcel/internal/generic/I2B.h>
#include <com/sun/org/apache/bcel/internal/generic/I2C.h>
#include <com/sun/org/apache/bcel/internal/generic/I2D.h>
#include <com/sun/org/apache/bcel/internal/generic/I2F.h>
#include <com/sun/org/apache/bcel/internal/generic/I2L.h>
#include <com/sun/org/apache/bcel/internal/generic/I2S.h>
#include <com/sun/org/apache/bcel/internal/generic/IADD.h>
#include <com/sun/org/apache/bcel/internal/generic/IALOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/IAND.h>
#include <com/sun/org/apache/bcel/internal/generic/IASTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/ICONST.h>
#include <com/sun/org/apache/bcel/internal/generic/IDIV.h>
#include <com/sun/org/apache/bcel/internal/generic/IFEQ.h>
#include <com/sun/org/apache/bcel/internal/generic/IFGE.h>
#include <com/sun/org/apache/bcel/internal/generic/IFGT.h>
#include <com/sun/org/apache/bcel/internal/generic/IFLE.h>
#include <com/sun/org/apache/bcel/internal/generic/IFLT.h>
#include <com/sun/org/apache/bcel/internal/generic/IFNE.h>
#include <com/sun/org/apache/bcel/internal/generic/IFNONNULL.h>
#include <com/sun/org/apache/bcel/internal/generic/IFNULL.h>
#include <com/sun/org/apache/bcel/internal/generic/IF_ACMPEQ.h>
#include <com/sun/org/apache/bcel/internal/generic/IF_ACMPNE.h>
#include <com/sun/org/apache/bcel/internal/generic/IF_ICMPEQ.h>
#include <com/sun/org/apache/bcel/internal/generic/IF_ICMPGE.h>
#include <com/sun/org/apache/bcel/internal/generic/IF_ICMPGT.h>
#include <com/sun/org/apache/bcel/internal/generic/IF_ICMPLE.h>
#include <com/sun/org/apache/bcel/internal/generic/IF_ICMPLT.h>
#include <com/sun/org/apache/bcel/internal/generic/IF_ICMPNE.h>
#include <com/sun/org/apache/bcel/internal/generic/IINC.h>
#include <com/sun/org/apache/bcel/internal/generic/ILOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/IMPDEP1.h>
#include <com/sun/org/apache/bcel/internal/generic/IMPDEP2.h>
#include <com/sun/org/apache/bcel/internal/generic/IMUL.h>
#include <com/sun/org/apache/bcel/internal/generic/INEG.h>
#include <com/sun/org/apache/bcel/internal/generic/INSTANCEOF.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEDYNAMIC.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEINTERFACE.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKESPECIAL.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKESTATIC.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEVIRTUAL.h>
#include <com/sun/org/apache/bcel/internal/generic/IOR.h>
#include <com/sun/org/apache/bcel/internal/generic/IREM.h>
#include <com/sun/org/apache/bcel/internal/generic/IRETURN.h>
#include <com/sun/org/apache/bcel/internal/generic/ISHL.h>
#include <com/sun/org/apache/bcel/internal/generic/ISHR.h>
#include <com/sun/org/apache/bcel/internal/generic/ISTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/ISUB.h>
#include <com/sun/org/apache/bcel/internal/generic/IUSHR.h>
#include <com/sun/org/apache/bcel/internal/generic/IXOR.h>
#include <com/sun/org/apache/bcel/internal/generic/JSR.h>
#include <com/sun/org/apache/bcel/internal/generic/JSR_W.h>
#include <com/sun/org/apache/bcel/internal/generic/L2D.h>
#include <com/sun/org/apache/bcel/internal/generic/L2F.h>
#include <com/sun/org/apache/bcel/internal/generic/L2I.h>
#include <com/sun/org/apache/bcel/internal/generic/LADD.h>
#include <com/sun/org/apache/bcel/internal/generic/LALOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/LAND.h>
#include <com/sun/org/apache/bcel/internal/generic/LASTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/LCMP.h>
#include <com/sun/org/apache/bcel/internal/generic/LCONST.h>
#include <com/sun/org/apache/bcel/internal/generic/LDC.h>
#include <com/sun/org/apache/bcel/internal/generic/LDC2_W.h>
#include <com/sun/org/apache/bcel/internal/generic/LDIV.h>
#include <com/sun/org/apache/bcel/internal/generic/LLOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/LMUL.h>
#include <com/sun/org/apache/bcel/internal/generic/LNEG.h>
#include <com/sun/org/apache/bcel/internal/generic/LOOKUPSWITCH.h>
#include <com/sun/org/apache/bcel/internal/generic/LOR.h>
#include <com/sun/org/apache/bcel/internal/generic/LREM.h>
#include <com/sun/org/apache/bcel/internal/generic/LRETURN.h>
#include <com/sun/org/apache/bcel/internal/generic/LSHL.h>
#include <com/sun/org/apache/bcel/internal/generic/LSHR.h>
#include <com/sun/org/apache/bcel/internal/generic/LSTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/LSUB.h>
#include <com/sun/org/apache/bcel/internal/generic/LUSHR.h>
#include <com/sun/org/apache/bcel/internal/generic/LXOR.h>
#include <com/sun/org/apache/bcel/internal/generic/MONITORENTER.h>
#include <com/sun/org/apache/bcel/internal/generic/MONITOREXIT.h>
#include <com/sun/org/apache/bcel/internal/generic/MULTIANEWARRAY.h>
#include <com/sun/org/apache/bcel/internal/generic/NEW.h>
#include <com/sun/org/apache/bcel/internal/generic/NEWARRAY.h>
#include <com/sun/org/apache/bcel/internal/generic/NOP.h>
#include <com/sun/org/apache/bcel/internal/generic/POP.h>
#include <com/sun/org/apache/bcel/internal/generic/POP2.h>
#include <com/sun/org/apache/bcel/internal/generic/PUTFIELD.h>
#include <com/sun/org/apache/bcel/internal/generic/PUTSTATIC.h>
#include <com/sun/org/apache/bcel/internal/generic/RET.h>
#include <com/sun/org/apache/bcel/internal/generic/RETURN.h>
#include <com/sun/org/apache/bcel/internal/generic/SALOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/SASTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/SIPUSH.h>
#include <com/sun/org/apache/bcel/internal/generic/SWAP.h>
#include <com/sun/org/apache/bcel/internal/generic/TABLESWITCH.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$MethodInfo _Visitor_MethodInfo_[] = {
	{"visitAALOAD", "(Lcom/sun/org/apache/bcel/internal/generic/AALOAD;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitAASTORE", "(Lcom/sun/org/apache/bcel/internal/generic/AASTORE;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitACONST_NULL", "(Lcom/sun/org/apache/bcel/internal/generic/ACONST_NULL;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitALOAD", "(Lcom/sun/org/apache/bcel/internal/generic/ALOAD;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitANEWARRAY", "(Lcom/sun/org/apache/bcel/internal/generic/ANEWARRAY;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitARETURN", "(Lcom/sun/org/apache/bcel/internal/generic/ARETURN;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitARRAYLENGTH", "(Lcom/sun/org/apache/bcel/internal/generic/ARRAYLENGTH;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitASTORE", "(Lcom/sun/org/apache/bcel/internal/generic/ASTORE;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitATHROW", "(Lcom/sun/org/apache/bcel/internal/generic/ATHROW;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitAllocationInstruction", "(Lcom/sun/org/apache/bcel/internal/generic/AllocationInstruction;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitArithmeticInstruction", "(Lcom/sun/org/apache/bcel/internal/generic/ArithmeticInstruction;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitArrayInstruction", "(Lcom/sun/org/apache/bcel/internal/generic/ArrayInstruction;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitBALOAD", "(Lcom/sun/org/apache/bcel/internal/generic/BALOAD;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitBASTORE", "(Lcom/sun/org/apache/bcel/internal/generic/BASTORE;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitBIPUSH", "(Lcom/sun/org/apache/bcel/internal/generic/BIPUSH;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitBREAKPOINT", "(Lcom/sun/org/apache/bcel/internal/generic/BREAKPOINT;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitBranchInstruction", "(Lcom/sun/org/apache/bcel/internal/generic/BranchInstruction;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitCALOAD", "(Lcom/sun/org/apache/bcel/internal/generic/CALOAD;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitCASTORE", "(Lcom/sun/org/apache/bcel/internal/generic/CASTORE;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitCHECKCAST", "(Lcom/sun/org/apache/bcel/internal/generic/CHECKCAST;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitCPInstruction", "(Lcom/sun/org/apache/bcel/internal/generic/CPInstruction;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitConstantPushInstruction", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPushInstruction;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitConversionInstruction", "(Lcom/sun/org/apache/bcel/internal/generic/ConversionInstruction;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitD2F", "(Lcom/sun/org/apache/bcel/internal/generic/D2F;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitD2I", "(Lcom/sun/org/apache/bcel/internal/generic/D2I;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitD2L", "(Lcom/sun/org/apache/bcel/internal/generic/D2L;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitDADD", "(Lcom/sun/org/apache/bcel/internal/generic/DADD;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitDALOAD", "(Lcom/sun/org/apache/bcel/internal/generic/DALOAD;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitDASTORE", "(Lcom/sun/org/apache/bcel/internal/generic/DASTORE;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitDCMPG", "(Lcom/sun/org/apache/bcel/internal/generic/DCMPG;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitDCMPL", "(Lcom/sun/org/apache/bcel/internal/generic/DCMPL;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitDCONST", "(Lcom/sun/org/apache/bcel/internal/generic/DCONST;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitDDIV", "(Lcom/sun/org/apache/bcel/internal/generic/DDIV;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitDLOAD", "(Lcom/sun/org/apache/bcel/internal/generic/DLOAD;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitDMUL", "(Lcom/sun/org/apache/bcel/internal/generic/DMUL;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitDNEG", "(Lcom/sun/org/apache/bcel/internal/generic/DNEG;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitDREM", "(Lcom/sun/org/apache/bcel/internal/generic/DREM;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitDRETURN", "(Lcom/sun/org/apache/bcel/internal/generic/DRETURN;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitDSTORE", "(Lcom/sun/org/apache/bcel/internal/generic/DSTORE;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitDSUB", "(Lcom/sun/org/apache/bcel/internal/generic/DSUB;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitDUP", "(Lcom/sun/org/apache/bcel/internal/generic/DUP;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitDUP2", "(Lcom/sun/org/apache/bcel/internal/generic/DUP2;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitDUP2_X1", "(Lcom/sun/org/apache/bcel/internal/generic/DUP2_X1;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitDUP2_X2", "(Lcom/sun/org/apache/bcel/internal/generic/DUP2_X2;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitDUP_X1", "(Lcom/sun/org/apache/bcel/internal/generic/DUP_X1;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitDUP_X2", "(Lcom/sun/org/apache/bcel/internal/generic/DUP_X2;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitExceptionThrower", "(Lcom/sun/org/apache/bcel/internal/generic/ExceptionThrower;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitF2D", "(Lcom/sun/org/apache/bcel/internal/generic/F2D;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitF2I", "(Lcom/sun/org/apache/bcel/internal/generic/F2I;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitF2L", "(Lcom/sun/org/apache/bcel/internal/generic/F2L;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitFADD", "(Lcom/sun/org/apache/bcel/internal/generic/FADD;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitFALOAD", "(Lcom/sun/org/apache/bcel/internal/generic/FALOAD;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitFASTORE", "(Lcom/sun/org/apache/bcel/internal/generic/FASTORE;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitFCMPG", "(Lcom/sun/org/apache/bcel/internal/generic/FCMPG;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitFCMPL", "(Lcom/sun/org/apache/bcel/internal/generic/FCMPL;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitFCONST", "(Lcom/sun/org/apache/bcel/internal/generic/FCONST;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitFDIV", "(Lcom/sun/org/apache/bcel/internal/generic/FDIV;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitFLOAD", "(Lcom/sun/org/apache/bcel/internal/generic/FLOAD;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitFMUL", "(Lcom/sun/org/apache/bcel/internal/generic/FMUL;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitFNEG", "(Lcom/sun/org/apache/bcel/internal/generic/FNEG;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitFREM", "(Lcom/sun/org/apache/bcel/internal/generic/FREM;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitFRETURN", "(Lcom/sun/org/apache/bcel/internal/generic/FRETURN;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitFSTORE", "(Lcom/sun/org/apache/bcel/internal/generic/FSTORE;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitFSUB", "(Lcom/sun/org/apache/bcel/internal/generic/FSUB;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitFieldInstruction", "(Lcom/sun/org/apache/bcel/internal/generic/FieldInstruction;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitFieldOrMethod", "(Lcom/sun/org/apache/bcel/internal/generic/FieldOrMethod;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitGETFIELD", "(Lcom/sun/org/apache/bcel/internal/generic/GETFIELD;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitGETSTATIC", "(Lcom/sun/org/apache/bcel/internal/generic/GETSTATIC;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitGOTO", "(Lcom/sun/org/apache/bcel/internal/generic/GOTO;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitGOTO_W", "(Lcom/sun/org/apache/bcel/internal/generic/GOTO_W;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitGotoInstruction", "(Lcom/sun/org/apache/bcel/internal/generic/GotoInstruction;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitI2B", "(Lcom/sun/org/apache/bcel/internal/generic/I2B;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitI2C", "(Lcom/sun/org/apache/bcel/internal/generic/I2C;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitI2D", "(Lcom/sun/org/apache/bcel/internal/generic/I2D;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitI2F", "(Lcom/sun/org/apache/bcel/internal/generic/I2F;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitI2L", "(Lcom/sun/org/apache/bcel/internal/generic/I2L;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitI2S", "(Lcom/sun/org/apache/bcel/internal/generic/I2S;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitIADD", "(Lcom/sun/org/apache/bcel/internal/generic/IADD;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitIALOAD", "(Lcom/sun/org/apache/bcel/internal/generic/IALOAD;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitIAND", "(Lcom/sun/org/apache/bcel/internal/generic/IAND;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitIASTORE", "(Lcom/sun/org/apache/bcel/internal/generic/IASTORE;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitICONST", "(Lcom/sun/org/apache/bcel/internal/generic/ICONST;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitIDIV", "(Lcom/sun/org/apache/bcel/internal/generic/IDIV;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitIFEQ", "(Lcom/sun/org/apache/bcel/internal/generic/IFEQ;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitIFGE", "(Lcom/sun/org/apache/bcel/internal/generic/IFGE;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitIFGT", "(Lcom/sun/org/apache/bcel/internal/generic/IFGT;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitIFLE", "(Lcom/sun/org/apache/bcel/internal/generic/IFLE;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitIFLT", "(Lcom/sun/org/apache/bcel/internal/generic/IFLT;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitIFNE", "(Lcom/sun/org/apache/bcel/internal/generic/IFNE;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitIFNONNULL", "(Lcom/sun/org/apache/bcel/internal/generic/IFNONNULL;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitIFNULL", "(Lcom/sun/org/apache/bcel/internal/generic/IFNULL;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitIF_ACMPEQ", "(Lcom/sun/org/apache/bcel/internal/generic/IF_ACMPEQ;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitIF_ACMPNE", "(Lcom/sun/org/apache/bcel/internal/generic/IF_ACMPNE;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitIF_ICMPEQ", "(Lcom/sun/org/apache/bcel/internal/generic/IF_ICMPEQ;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitIF_ICMPGE", "(Lcom/sun/org/apache/bcel/internal/generic/IF_ICMPGE;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitIF_ICMPGT", "(Lcom/sun/org/apache/bcel/internal/generic/IF_ICMPGT;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitIF_ICMPLE", "(Lcom/sun/org/apache/bcel/internal/generic/IF_ICMPLE;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitIF_ICMPLT", "(Lcom/sun/org/apache/bcel/internal/generic/IF_ICMPLT;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitIF_ICMPNE", "(Lcom/sun/org/apache/bcel/internal/generic/IF_ICMPNE;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitIINC", "(Lcom/sun/org/apache/bcel/internal/generic/IINC;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitILOAD", "(Lcom/sun/org/apache/bcel/internal/generic/ILOAD;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitIMPDEP1", "(Lcom/sun/org/apache/bcel/internal/generic/IMPDEP1;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitIMPDEP2", "(Lcom/sun/org/apache/bcel/internal/generic/IMPDEP2;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitIMUL", "(Lcom/sun/org/apache/bcel/internal/generic/IMUL;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitINEG", "(Lcom/sun/org/apache/bcel/internal/generic/INEG;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitINSTANCEOF", "(Lcom/sun/org/apache/bcel/internal/generic/INSTANCEOF;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitINVOKEDYNAMIC", "(Lcom/sun/org/apache/bcel/internal/generic/INVOKEDYNAMIC;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitINVOKEINTERFACE", "(Lcom/sun/org/apache/bcel/internal/generic/INVOKEINTERFACE;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitINVOKESPECIAL", "(Lcom/sun/org/apache/bcel/internal/generic/INVOKESPECIAL;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitINVOKESTATIC", "(Lcom/sun/org/apache/bcel/internal/generic/INVOKESTATIC;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitINVOKEVIRTUAL", "(Lcom/sun/org/apache/bcel/internal/generic/INVOKEVIRTUAL;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitIOR", "(Lcom/sun/org/apache/bcel/internal/generic/IOR;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitIREM", "(Lcom/sun/org/apache/bcel/internal/generic/IREM;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitIRETURN", "(Lcom/sun/org/apache/bcel/internal/generic/IRETURN;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitISHL", "(Lcom/sun/org/apache/bcel/internal/generic/ISHL;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitISHR", "(Lcom/sun/org/apache/bcel/internal/generic/ISHR;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitISTORE", "(Lcom/sun/org/apache/bcel/internal/generic/ISTORE;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitISUB", "(Lcom/sun/org/apache/bcel/internal/generic/ISUB;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitIUSHR", "(Lcom/sun/org/apache/bcel/internal/generic/IUSHR;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitIXOR", "(Lcom/sun/org/apache/bcel/internal/generic/IXOR;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitIfInstruction", "(Lcom/sun/org/apache/bcel/internal/generic/IfInstruction;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitInvokeInstruction", "(Lcom/sun/org/apache/bcel/internal/generic/InvokeInstruction;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitJSR", "(Lcom/sun/org/apache/bcel/internal/generic/JSR;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitJSR_W", "(Lcom/sun/org/apache/bcel/internal/generic/JSR_W;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitJsrInstruction", "(Lcom/sun/org/apache/bcel/internal/generic/JsrInstruction;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitL2D", "(Lcom/sun/org/apache/bcel/internal/generic/L2D;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitL2F", "(Lcom/sun/org/apache/bcel/internal/generic/L2F;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitL2I", "(Lcom/sun/org/apache/bcel/internal/generic/L2I;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitLADD", "(Lcom/sun/org/apache/bcel/internal/generic/LADD;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitLALOAD", "(Lcom/sun/org/apache/bcel/internal/generic/LALOAD;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitLAND", "(Lcom/sun/org/apache/bcel/internal/generic/LAND;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitLASTORE", "(Lcom/sun/org/apache/bcel/internal/generic/LASTORE;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitLCMP", "(Lcom/sun/org/apache/bcel/internal/generic/LCMP;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitLCONST", "(Lcom/sun/org/apache/bcel/internal/generic/LCONST;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitLDC", "(Lcom/sun/org/apache/bcel/internal/generic/LDC;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitLDC2_W", "(Lcom/sun/org/apache/bcel/internal/generic/LDC2_W;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitLDIV", "(Lcom/sun/org/apache/bcel/internal/generic/LDIV;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitLLOAD", "(Lcom/sun/org/apache/bcel/internal/generic/LLOAD;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitLMUL", "(Lcom/sun/org/apache/bcel/internal/generic/LMUL;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitLNEG", "(Lcom/sun/org/apache/bcel/internal/generic/LNEG;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitLOOKUPSWITCH", "(Lcom/sun/org/apache/bcel/internal/generic/LOOKUPSWITCH;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitLOR", "(Lcom/sun/org/apache/bcel/internal/generic/LOR;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitLREM", "(Lcom/sun/org/apache/bcel/internal/generic/LREM;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitLRETURN", "(Lcom/sun/org/apache/bcel/internal/generic/LRETURN;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitLSHL", "(Lcom/sun/org/apache/bcel/internal/generic/LSHL;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitLSHR", "(Lcom/sun/org/apache/bcel/internal/generic/LSHR;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitLSTORE", "(Lcom/sun/org/apache/bcel/internal/generic/LSTORE;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitLSUB", "(Lcom/sun/org/apache/bcel/internal/generic/LSUB;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitLUSHR", "(Lcom/sun/org/apache/bcel/internal/generic/LUSHR;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitLXOR", "(Lcom/sun/org/apache/bcel/internal/generic/LXOR;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitLoadClass", "(Lcom/sun/org/apache/bcel/internal/generic/LoadClass;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitLoadInstruction", "(Lcom/sun/org/apache/bcel/internal/generic/LoadInstruction;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitLocalVariableInstruction", "(Lcom/sun/org/apache/bcel/internal/generic/LocalVariableInstruction;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitMONITORENTER", "(Lcom/sun/org/apache/bcel/internal/generic/MONITORENTER;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitMONITOREXIT", "(Lcom/sun/org/apache/bcel/internal/generic/MONITOREXIT;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitMULTIANEWARRAY", "(Lcom/sun/org/apache/bcel/internal/generic/MULTIANEWARRAY;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitNEW", "(Lcom/sun/org/apache/bcel/internal/generic/NEW;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitNEWARRAY", "(Lcom/sun/org/apache/bcel/internal/generic/NEWARRAY;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitNOP", "(Lcom/sun/org/apache/bcel/internal/generic/NOP;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitPOP", "(Lcom/sun/org/apache/bcel/internal/generic/POP;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitPOP2", "(Lcom/sun/org/apache/bcel/internal/generic/POP2;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitPUTFIELD", "(Lcom/sun/org/apache/bcel/internal/generic/PUTFIELD;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitPUTSTATIC", "(Lcom/sun/org/apache/bcel/internal/generic/PUTSTATIC;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitPopInstruction", "(Lcom/sun/org/apache/bcel/internal/generic/PopInstruction;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitPushInstruction", "(Lcom/sun/org/apache/bcel/internal/generic/PushInstruction;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitRET", "(Lcom/sun/org/apache/bcel/internal/generic/RET;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitRETURN", "(Lcom/sun/org/apache/bcel/internal/generic/RETURN;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitReturnInstruction", "(Lcom/sun/org/apache/bcel/internal/generic/ReturnInstruction;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitSALOAD", "(Lcom/sun/org/apache/bcel/internal/generic/SALOAD;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitSASTORE", "(Lcom/sun/org/apache/bcel/internal/generic/SASTORE;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitSIPUSH", "(Lcom/sun/org/apache/bcel/internal/generic/SIPUSH;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitSWAP", "(Lcom/sun/org/apache/bcel/internal/generic/SWAP;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitSelect", "(Lcom/sun/org/apache/bcel/internal/generic/Select;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitStackConsumer", "(Lcom/sun/org/apache/bcel/internal/generic/StackConsumer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitStackInstruction", "(Lcom/sun/org/apache/bcel/internal/generic/StackInstruction;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitStackProducer", "(Lcom/sun/org/apache/bcel/internal/generic/StackProducer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitStoreInstruction", "(Lcom/sun/org/apache/bcel/internal/generic/StoreInstruction;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitTABLESWITCH", "(Lcom/sun/org/apache/bcel/internal/generic/TABLESWITCH;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitTypedInstruction", "(Lcom/sun/org/apache/bcel/internal/generic/TypedInstruction;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitUnconditionalBranch", "(Lcom/sun/org/apache/bcel/internal/generic/UnconditionalBranch;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"visitVariableLengthInstruction", "(Lcom/sun/org/apache/bcel/internal/generic/VariableLengthInstruction;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Visitor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.generic.Visitor",
	nullptr,
	nullptr,
	nullptr,
	_Visitor_MethodInfo_
};

$Object* allocate$Visitor($Class* clazz) {
	return $of($alloc(Visitor));
}

$Class* Visitor::load$($String* name, bool initialize) {
	$loadClass(Visitor, name, initialize, &_Visitor_ClassInfo_, allocate$Visitor);
	return class$;
}

$Class* Visitor::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com