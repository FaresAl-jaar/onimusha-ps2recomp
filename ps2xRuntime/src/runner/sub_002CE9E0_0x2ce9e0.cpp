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

// Function: sub_002CE9E0
// Address: 0x2ce9e0 - 0x2ceafc
void sub_002CE9E0_0x2ce9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CE9E0_0x2ce9e0");
#endif

    switch (ctx->pc) {
        case 0x2cea90u: goto label_2cea90;
        case 0x2ceaa8u: goto label_2ceaa8;
        case 0x2ceab4u: goto label_2ceab4;
        case 0x2ceaf0u: goto label_2ceaf0;
        default: break;
    }

    ctx->pc = 0x2ce9e0u;

    // 0x2ce9e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ce9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ce9e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ce9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ce9e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ce9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ce9ec: 0x93848a8c  lbu         $a0, -0x7574($gp)
    ctx->pc = 0x2ce9ecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937228)));
    // 0x2ce9f0: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CE9F0u;
    {
        const bool branch_taken_0x2ce9f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ce9f0) {
            ctx->pc = 0x2CEA10u;
            goto label_2cea10;
        }
    }
    ctx->pc = 0x2CE9F8u;
    // 0x2ce9f8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CE9F8u;
    {
        const bool branch_taken_0x2ce9f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce9f8) {
            ctx->pc = 0x2CEA08u;
            goto label_2cea08;
        }
    }
    ctx->pc = 0x2CEA00u;
    // 0x2cea00: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x2CEA00u;
    {
        const bool branch_taken_0x2cea00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cea00) {
            ctx->pc = 0x2CEAF0u;
            goto label_2ceaf0;
        }
    }
    ctx->pc = 0x2CEA08u;
label_2cea08:
    // 0x2cea08: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x2CEA08u;
    {
        const bool branch_taken_0x2cea08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cea08) {
            ctx->pc = 0x2CEAF0u;
            goto label_2ceaf0;
        }
    }
    ctx->pc = 0x2CEA10u;
label_2cea10:
    // 0x2cea10: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2cea10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2cea14: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2cea14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cea18: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2cea18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2cea1c: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x2cea1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x2cea20: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x2cea20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x2cea24: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2cea24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2cea28: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2cea28u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2cea2c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2cea2cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cea30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2cea30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cea34: 0x0  nop
    ctx->pc = 0x2cea34u;
    // NOP
    // 0x2cea38: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2cea38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2cea3c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2cea3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cea40: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2CEA40u;
    {
        const bool branch_taken_0x2cea40 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CEA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEA40u;
        // 0x2cea44: 0x93858a80  lbu         $a1, -0x7580($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cea40) {
            ctx->pc = 0x2CEA58u;
            goto label_2cea58;
        }
    }
    ctx->pc = 0x2CEA48u;
    // 0x2cea48: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2cea48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2cea4c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2cea4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2cea50: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2CEA50u;
    {
        const bool branch_taken_0x2cea50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cea50) {
            ctx->pc = 0x2CEA70u;
            goto label_2cea70;
        }
    }
    ctx->pc = 0x2CEA58u;
label_2cea58:
    // 0x2cea58: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2cea58u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2cea5c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2cea5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2cea60: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2cea60u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2cea64: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2cea64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2cea68: 0x0  nop
    ctx->pc = 0x2cea68u;
    // NOP
    // 0x2cea6c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2cea6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2cea70:
    // 0x2cea70: 0x14a40019  bne         $a1, $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2CEA70u;
    {
        const bool branch_taken_0x2cea70 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x2cea70) {
            ctx->pc = 0x2CEAD8u;
            goto label_2cead8;
        }
    }
    ctx->pc = 0x2CEA78u;
    // 0x2cea78: 0x93838a88  lbu         $v1, -0x7578($gp)
    ctx->pc = 0x2cea78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937224)));
    // 0x2cea7c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2cea7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2cea80: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CEA80u;
    {
        const bool branch_taken_0x2cea80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEA80u;
        // 0x2cea84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cea80) {
            ctx->pc = 0x2CEA90u;
            goto label_2cea90;
        }
    }
    ctx->pc = 0x2CEA88u;
    // 0x2cea88: 0xc0b3840  jal         func_2CE100
    ctx->pc = 0x2CEA88u;
    SET_GPR_U32(ctx, 31, 0x2CEA90u);
    ctx->pc = 0x2CEA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEA88u;
    // 0x2cea8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE100u, 0x2CEA88u, 0x2CEA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEA90u;
label_2cea90:
    // 0x2cea90: 0x93838a88  lbu         $v1, -0x7578($gp)
    ctx->pc = 0x2cea90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937224)));
    // 0x2cea94: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2cea94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2cea98: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CEA98u;
    {
        const bool branch_taken_0x2cea98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEA98u;
        // 0x2cea9c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cea98) {
            ctx->pc = 0x2CEAA8u;
            goto label_2ceaa8;
        }
    }
    ctx->pc = 0x2CEAA0u;
    // 0x2ceaa0: 0xc0b3840  jal         func_2CE100
    ctx->pc = 0x2CEAA0u;
    SET_GPR_U32(ctx, 31, 0x2CEAA8u);
    ctx->pc = 0x2CEAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEAA0u;
    // 0x2ceaa4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE100u, 0x2CEAA0u, 0x2CEAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEAA8u;
label_2ceaa8:
    // 0x2ceaa8: 0xa3808a8c  sb          $zero, -0x7574($gp)
    ctx->pc = 0x2ceaa8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937228), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ceaac: 0xc0b346c  jal         func_2CD1B0
    ctx->pc = 0x2CEAACu;
    SET_GPR_U32(ctx, 31, 0x2CEAB4u);
    ctx->pc = 0x2CEAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEAACu;
    // 0x2ceab0: 0xa3808a88  sb          $zero, -0x7578($gp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937224), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD1B0u, 0x2CEAACu, 0x2CEAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEAB4u;
label_2ceab4:
    // 0x2ceab4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2ceab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2ceab8: 0x3c03fffe  lui         $v1, 0xFFFE
    ctx->pc = 0x2ceab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
    // 0x2ceabc: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x2ceabcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x2ceac0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2ceac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2ceac4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2ceac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2ceac8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2ceac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2ceacc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2CEACCu;
    {
        const bool branch_taken_0x2ceacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEACCu;
        // 0x2cead0: 0xac23cebc  sw          $v1, -0x3144($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ceacc) {
            ctx->pc = 0x2CEAF0u;
            goto label_2ceaf0;
        }
    }
    ctx->pc = 0x2CEAD4u;
    // 0x2cead4: 0x0  nop
    ctx->pc = 0x2cead4u;
    // NOP
label_2cead8:
    // 0x2cead8: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2cead8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2ceadc: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x2ceadcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
    // 0x2ceae0: 0x3c048ff8  lui         $a0, 0x8FF8
    ctx->pc = 0x2ceae0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36856 << 16));
    // 0x2ceae4: 0xa022e000  sb          $v0, -0x2000($at)
    ctx->pc = 0x2ceae4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8DE000u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8DE000u, _value); } while (0);
    // 0x2ceae8: 0xc0b2d24  jal         func_2CB490
    ctx->pc = 0x2CEAE8u;
    SET_GPR_U32(ctx, 31, 0x2CEAF0u);
    ctx->pc = 0x2CEAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEAE8u;
    // 0x2ceaec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB490u, 0x2CEAE8u, 0x2CEAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEAF0u;
label_2ceaf0:
    // 0x2ceaf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ceaf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ceaf4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CEAF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CEAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEAF4u;
        // 0x2ceaf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CEAF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CEAFCu;
}
