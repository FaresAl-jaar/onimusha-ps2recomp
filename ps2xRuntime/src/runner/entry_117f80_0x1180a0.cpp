#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_117f80
// Address: 0x117f80 - 0x1180a0
void entry_117f80_0x1180a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_117f80_0x1180a0");
#endif

    switch (ctx->pc) {
        case 0x117f80u: goto label_117f80;
        case 0x117f84u: goto label_117f84;
        case 0x117f88u: goto label_117f88;
        case 0x117f8cu: goto label_117f8c;
        case 0x117f90u: goto label_117f90;
        case 0x117f94u: goto label_117f94;
        case 0x117f98u: goto label_117f98;
        case 0x117f9cu: goto label_117f9c;
        case 0x117fa0u: goto label_117fa0;
        case 0x117fa4u: goto label_117fa4;
        case 0x117fa8u: goto label_117fa8;
        case 0x117facu: goto label_117fac;
        case 0x117fb0u: goto label_117fb0;
        case 0x117fb4u: goto label_117fb4;
        case 0x117fb8u: goto label_117fb8;
        case 0x117fbcu: goto label_117fbc;
        case 0x117fc0u: goto label_117fc0;
        case 0x117fc4u: goto label_117fc4;
        case 0x117fc8u: goto label_117fc8;
        case 0x117fccu: goto label_117fcc;
        case 0x117fd0u: goto label_117fd0;
        case 0x117fd4u: goto label_117fd4;
        case 0x117fd8u: goto label_117fd8;
        case 0x117fdcu: goto label_117fdc;
        case 0x117fe0u: goto label_117fe0;
        case 0x117fe4u: goto label_117fe4;
        case 0x117fe8u: goto label_117fe8;
        case 0x117fecu: goto label_117fec;
        case 0x117ff0u: goto label_117ff0;
        case 0x117ff4u: goto label_117ff4;
        case 0x117ff8u: goto label_117ff8;
        case 0x117ffcu: goto label_117ffc;
        case 0x118000u: goto label_118000;
        case 0x118004u: goto label_118004;
        case 0x118008u: goto label_118008;
        case 0x11800cu: goto label_11800c;
        case 0x118010u: goto label_118010;
        case 0x118014u: goto label_118014;
        case 0x118018u: goto label_118018;
        case 0x11801cu: goto label_11801c;
        case 0x118020u: goto label_118020;
        case 0x118024u: goto label_118024;
        case 0x118028u: goto label_118028;
        case 0x11802cu: goto label_11802c;
        case 0x118030u: goto label_118030;
        case 0x118034u: goto label_118034;
        case 0x118038u: goto label_118038;
        case 0x11803cu: goto label_11803c;
        case 0x118040u: goto label_118040;
        case 0x118044u: goto label_118044;
        case 0x118048u: goto label_118048;
        case 0x11804cu: goto label_11804c;
        case 0x118050u: goto label_118050;
        case 0x118054u: goto label_118054;
        case 0x118058u: goto label_118058;
        case 0x11805cu: goto label_11805c;
        case 0x118060u: goto label_118060;
        case 0x118064u: goto label_118064;
        case 0x118068u: goto label_118068;
        case 0x11806cu: goto label_11806c;
        case 0x118070u: goto label_118070;
        case 0x118074u: goto label_118074;
        case 0x118078u: goto label_118078;
        case 0x11807cu: goto label_11807c;
        case 0x118080u: goto label_118080;
        case 0x118084u: goto label_118084;
        case 0x118088u: goto label_118088;
        case 0x11808cu: goto label_11808c;
        case 0x118090u: goto label_118090;
        case 0x118094u: goto label_118094;
        case 0x118098u: goto label_118098;
        case 0x11809cu: goto label_11809c;
        default: break;
    }

    ctx->pc = 0x117f80u;

label_117f80:
    // 0x117f80: 0x3c1a0069  lui         $k0, 0x69
    ctx->pc = 0x117f80u;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)105 << 16));
label_117f84:
    // 0x117f84: 0x275a1900  addiu       $k0, $k0, 0x1900
    ctx->pc = 0x117f84u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 26), 6400));
label_117f88:
    // 0x117f88: 0x7f410010  sq          $at, 0x10($k0)
    ctx->pc = 0x117f88u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 16), GPR_VEC(ctx, 1));
label_117f8c:
    // 0x117f8c: 0x7f420020  sq          $v0, 0x20($k0)
    ctx->pc = 0x117f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 32), GPR_VEC(ctx, 2));
label_117f90:
    // 0x117f90: 0x7f430030  sq          $v1, 0x30($k0)
    ctx->pc = 0x117f90u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 48), GPR_VEC(ctx, 3));
label_117f94:
    // 0x117f94: 0x7f440040  sq          $a0, 0x40($k0)
    ctx->pc = 0x117f94u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 64), GPR_VEC(ctx, 4));
label_117f98:
    // 0x117f98: 0x7f450050  sq          $a1, 0x50($k0)
    ctx->pc = 0x117f98u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 80), GPR_VEC(ctx, 5));
label_117f9c:
    // 0x117f9c: 0x7f460060  sq          $a2, 0x60($k0)
    ctx->pc = 0x117f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 96), GPR_VEC(ctx, 6));
label_117fa0:
    // 0x117fa0: 0x7f470070  sq          $a3, 0x70($k0)
    ctx->pc = 0x117fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 112), GPR_VEC(ctx, 7));
label_117fa4:
    // 0x117fa4: 0x7f480080  sq          $t0, 0x80($k0)
    ctx->pc = 0x117fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 128), GPR_VEC(ctx, 8));
label_117fa8:
    // 0x117fa8: 0x7f490090  sq          $t1, 0x90($k0)
    ctx->pc = 0x117fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 144), GPR_VEC(ctx, 9));
label_117fac:
    // 0x117fac: 0x7f4a00a0  sq          $t2, 0xA0($k0)
    ctx->pc = 0x117facu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 160), GPR_VEC(ctx, 10));
label_117fb0:
    // 0x117fb0: 0x7f4b00b0  sq          $t3, 0xB0($k0)
    ctx->pc = 0x117fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 176), GPR_VEC(ctx, 11));
label_117fb4:
    // 0x117fb4: 0x7f4c00c0  sq          $t4, 0xC0($k0)
    ctx->pc = 0x117fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 192), GPR_VEC(ctx, 12));
label_117fb8:
    // 0x117fb8: 0x7f4d00d0  sq          $t5, 0xD0($k0)
    ctx->pc = 0x117fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 208), GPR_VEC(ctx, 13));
label_117fbc:
    // 0x117fbc: 0x7f4e00e0  sq          $t6, 0xE0($k0)
    ctx->pc = 0x117fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 224), GPR_VEC(ctx, 14));
label_117fc0:
    // 0x117fc0: 0x7f4f00f0  sq          $t7, 0xF0($k0)
    ctx->pc = 0x117fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 240), GPR_VEC(ctx, 15));
label_117fc4:
    // 0x117fc4: 0x7f500100  sq          $s0, 0x100($k0)
    ctx->pc = 0x117fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 256), GPR_VEC(ctx, 16));
label_117fc8:
    // 0x117fc8: 0x7f510110  sq          $s1, 0x110($k0)
    ctx->pc = 0x117fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 272), GPR_VEC(ctx, 17));
label_117fcc:
    // 0x117fcc: 0x7f520120  sq          $s2, 0x120($k0)
    ctx->pc = 0x117fccu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 288), GPR_VEC(ctx, 18));
label_117fd0:
    // 0x117fd0: 0x7f530130  sq          $s3, 0x130($k0)
    ctx->pc = 0x117fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 304), GPR_VEC(ctx, 19));
label_117fd4:
    // 0x117fd4: 0x7f540140  sq          $s4, 0x140($k0)
    ctx->pc = 0x117fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 320), GPR_VEC(ctx, 20));
label_117fd8:
    // 0x117fd8: 0x7f550150  sq          $s5, 0x150($k0)
    ctx->pc = 0x117fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 336), GPR_VEC(ctx, 21));
label_117fdc:
    // 0x117fdc: 0x7f560160  sq          $s6, 0x160($k0)
    ctx->pc = 0x117fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 352), GPR_VEC(ctx, 22));
label_117fe0:
    // 0x117fe0: 0x7f570170  sq          $s7, 0x170($k0)
    ctx->pc = 0x117fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 368), GPR_VEC(ctx, 23));
label_117fe4:
    // 0x117fe4: 0x7f580180  sq          $t8, 0x180($k0)
    ctx->pc = 0x117fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 384), GPR_VEC(ctx, 24));
label_117fe8:
    // 0x117fe8: 0x7f590190  sq          $t9, 0x190($k0)
    ctx->pc = 0x117fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 400), GPR_VEC(ctx, 25));
label_117fec:
    // 0x117fec: 0x7f5c01c0  sq          $gp, 0x1C0($k0)
    ctx->pc = 0x117fecu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 448), GPR_VEC(ctx, 28));
label_117ff0:
    // 0x117ff0: 0x7f5d01d0  sq          $sp, 0x1D0($k0)
    ctx->pc = 0x117ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 464), GPR_VEC(ctx, 29));
label_117ff4:
    // 0x117ff4: 0x7f5e01e0  sq          $fp, 0x1E0($k0)
    ctx->pc = 0x117ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 480), GPR_VEC(ctx, 30));
label_117ff8:
    // 0x117ff8: 0x7f5f01f0  sq          $ra, 0x1F0($k0)
    ctx->pc = 0x117ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 496), GPR_VEC(ctx, 31));
label_117ffc:
    // 0x117ffc: 0x1010  mfhi        $v0
    ctx->pc = 0x117ffcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_118000:
    // 0x118000: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x118000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
label_118004:
    // 0x118004: 0xfc221b00  sd          $v0, 0x1B00($at)
    ctx->pc = 0x118004u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 6912), GPR_U64(ctx, 2));
label_118008:
    // 0x118008: 0x70001010  mfhi1       $v0
    ctx->pc = 0x118008u;
    SET_GPR_U64(ctx, 2, ctx->hi1);
label_11800c:
    // 0x11800c: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x11800cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
label_118010:
    // 0x118010: 0xfc221b08  sd          $v0, 0x1B08($at)
    ctx->pc = 0x118010u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 6920), GPR_U64(ctx, 2));
label_118014:
    // 0x118014: 0x1012  mflo        $v0
    ctx->pc = 0x118014u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_118018:
    // 0x118018: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x118018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
label_11801c:
    // 0x11801c: 0xfc221b10  sd          $v0, 0x1B10($at)
    ctx->pc = 0x11801cu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 6928), GPR_U64(ctx, 2));
label_118020:
    // 0x118020: 0x70001012  mflo1       $v0
    ctx->pc = 0x118020u;
    SET_GPR_U64(ctx, 2, ctx->lo1);
label_118024:
    // 0x118024: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x118024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
label_118028:
    // 0x118028: 0xfc221b18  sd          $v0, 0x1B18($at)
    ctx->pc = 0x118028u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 6936), GPR_U64(ctx, 2));
label_11802c:
    // 0x11802c: 0x1028  mfsa        $v0
    ctx->pc = 0x11802cu;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_118030:
    // 0x118030: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x118030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
label_118034:
    // 0x118034: 0xfc221b20  sd          $v0, 0x1B20($at)
    ctx->pc = 0x118034u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 6944), GPR_U64(ctx, 2));
label_118038:
    // 0x118038: 0x40046000  mfc0        $a0, Status
    ctx->pc = 0x118038u;
    SET_GPR_S32(ctx, 4, (int32_t)ctx->cop0_status);
label_11803c:
    // 0x11803c: 0x40056800  mfc0        $a1, Cause
    ctx->pc = 0x11803cu;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_cause);
label_118040:
    // 0x118040: 0x40067000  mfc0        $a2, EPC
    ctx->pc = 0x118040u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_epc);
label_118044:
    // 0x118044: 0x40074000  mfc0        $a3, BadVaddr
    ctx->pc = 0x118044u;
    SET_GPR_S32(ctx, 7, (int32_t)ctx->cop0_badvaddr);
label_118048:
    // 0x118048: 0x4008b800  mfc0        $t0, Reserved23
    ctx->pc = 0x118048u;
    SET_GPR_S32(ctx, 8, (int32_t)ctx->cop0_badpaddr);
label_11804c:
    // 0x11804c: 0x3c090069  lui         $t1, 0x69
    ctx->pc = 0x11804cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)105 << 16));
label_118050:
    // 0x118050: 0x25291900  addiu       $t1, $t1, 0x1900
    ctx->pc = 0x118050u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6400));
label_118054:
    // 0x118054: 0x3c010012  lui         $at, 0x12
    ctx->pc = 0x118054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18 << 16));
label_118058:
    // 0x118058: 0x2421807c  addiu       $at, $at, -0x7F84
    ctx->pc = 0x118058u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294934652));
label_11805c:
    // 0x11805c: 0x40817000  mtc0        $at, EPC
    ctx->pc = 0x11805cu;
    ctx->cop0_epc = GPR_U32(ctx, 1);
label_118060:
    // 0x118060: 0x40f  sync.p
    ctx->pc = 0x118060u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_118064:
    // 0x118064: 0x40016000  mfc0        $at, Status
    ctx->pc = 0x118064u;
    SET_GPR_S32(ctx, 1, (int32_t)ctx->cop0_status);
label_118068:
    // 0x118068: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x118068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_11806c:
    // 0x11806c: 0x220824  and         $at, $at, $v0
    ctx->pc = 0x11806cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) & GPR_U64(ctx, 2));
label_118070:
    // 0x118070: 0x40816000  mtc0        $at, Status
    ctx->pc = 0x118070u;
    ctx->cop0_status = GPR_U32(ctx, 1) & 0xFF57FFFF;
label_118074:
    // 0x118074: 0x40f  sync.p
    ctx->pc = 0x118074u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_118078:
    // 0x118078: 0x42000018  eret
    ctx->pc = 0x118078u;
    if (ctx->cop0_status & 0x4) { 
    ctx->pc = ctx->cop0_errorepc; 
    ctx->cop0_status &= ~0x4; 
} else { 
    ctx->pc = ctx->cop0_epc; 
    ctx->cop0_status &= ~0x2; 
} 
runtime->clearLLBit(ctx); 
return;
label_11807c:
    // 0x11807c: 0x30a2007c  andi        $v0, $a1, 0x7C
    ctx->pc = 0x11807cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)124);
label_118080:
    // 0x118080: 0x3c010040  lui         $at, 0x40
    ctx->pc = 0x118080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)64 << 16));
label_118084:
    // 0x118084: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x118084u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_118088:
    // 0x118088: 0x8c212ea0  lw          $at, 0x2EA0($at)
    ctx->pc = 0x118088u;
    SET_GPR_S32(ctx, 1, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11936)));
label_11808c:
    // 0x11808c: 0x3c1d0069  lui         $sp, 0x69
    ctx->pc = 0x11808cu;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)105 << 16));
label_118090:
    // 0x118090: 0x20f809  jalr        $at
label_118094:
    if (ctx->pc == 0x118094u) {
        ctx->pc = 0x118094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118090u;
        // 0x118094: 0x27bd1900  addiu       $sp, $sp, 0x1900 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 6400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x118098u;
        goto label_118098;
    }
    ctx->pc = 0x118090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        SET_GPR_U32(ctx, 31, 0x118098u);
        ctx->pc = 0x118094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118090u;
        // 0x118094: 0x27bd1900  addiu       $sp, $sp, 0x1900 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 6400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118090u, 0x118098u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x118098u;
label_118098:
    // 0x118098: 0x3ffffcd  break       1023, 1023
    ctx->pc = 0x118098u;
    runtime->handleBreak(rdram, ctx);
label_11809c:
    // 0x11809c: 0x0  nop
    ctx->pc = 0x11809cu;
    // NOP
    ctx->pc = 0x1180a0u;
}
