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

// Function: sub_003ED110
// Address: 0x3ed110 - 0x3ed22c
void sub_003ED110_0x3ed110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ED110_0x3ed110");
#endif

    switch (ctx->pc) {
        case 0x3ed124u: goto label_3ed124;
        case 0x3ed204u: goto label_3ed204;
        case 0x3ed210u: goto label_3ed210;
        default: break;
    }

    ctx->pc = 0x3ed110u;

    // 0x3ed110: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ed110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ed114: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ed114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3ed118: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ed118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3ed11c: 0xc0a4a1c  jal         func_292870
    ctx->pc = 0x3ED11Cu;
    SET_GPR_U32(ctx, 31, 0x3ED124u);
    ctx->pc = 0x3ED120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED11Cu;
    // 0x3ed120: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292870u, 0x3ED11Cu, 0x3ED124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED124u;
label_3ed124:
    // 0x3ed124: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x3ed124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x3ed128: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x3ed128u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x3ed12c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3ed12cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3ed130: 0x92070002  lbu         $a3, 0x2($s0)
    ctx->pc = 0x3ed130u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3ed134: 0x24c6f380  addiu       $a2, $a2, -0xC80
    ctx->pc = 0x3ed134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964096));
    // 0x3ed138: 0x3c08447a  lui         $t0, 0x447A
    ctx->pc = 0x3ed138u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17530 << 16));
    // 0x3ed13c: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3ed13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3ed140: 0x3c05c47a  lui         $a1, 0xC47A
    ctx->pc = 0x3ed140u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50298 << 16));
    // 0x3ed144: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x3ed144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3ed148: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x3ed148u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x3ed14c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3ed14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3ed150: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ed150u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ed154: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3ed154u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ed158: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x3ed158u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x3ed15c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x3ed15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x3ed160: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3ed160u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3ed164: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x3ed164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3ed168: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x3ed168u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x3ed16c: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x3ed16cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3ed170: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3ed170u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3ed174: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ed174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ed178: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3ed178u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3ed17c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x3ed17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3ed180: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x3ed180u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x3ed184: 0xae0400e8  sw          $a0, 0xE8($s0)
    ctx->pc = 0x3ed184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 4));
    // 0x3ed188: 0xae0406c0  sw          $a0, 0x6C0($s0)
    ctx->pc = 0x3ed188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1728), GPR_U32(ctx, 4));
    // 0x3ed18c: 0xa2002bae  sb          $zero, 0x2BAE($s0)
    ctx->pc = 0x3ed18cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11182), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ed190: 0xa6002bb0  sh          $zero, 0x2BB0($s0)
    ctx->pc = 0x3ed190u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11184), (uint16_t)GPR_U32(ctx, 0));
    // 0x3ed194: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3ed194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ed198: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3ed198u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3ed19c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3ed19cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3ed1a0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ed1a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ed1a4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3ED1A4u;
    {
        const bool branch_taken_0x3ed1a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ed1a4) {
            ctx->pc = 0x3ED1BCu;
            goto label_3ed1bc;
        }
    }
    ctx->pc = 0x3ED1ACu;
    // 0x3ed1ac: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ed1acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ed1b0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3ed1b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3ed1b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3ED1B4u;
    {
        const bool branch_taken_0x3ed1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED1B4u;
        // 0x3ed1b8: 0xa6032b24  sh          $v1, 0x2B24($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11044), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed1b4) {
            ctx->pc = 0x3ED1D8u;
            goto label_3ed1d8;
        }
    }
    ctx->pc = 0x3ED1BCu;
label_3ed1bc:
    // 0x3ed1bc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3ed1bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3ed1c0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3ed1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3ed1c4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ed1c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ed1c8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3ed1c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3ed1cc: 0x0  nop
    ctx->pc = 0x3ed1ccu;
    // NOP
    // 0x3ed1d0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ed1d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ed1d4: 0xa6032b24  sh          $v1, 0x2B24($s0)
    ctx->pc = 0x3ed1d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11044), (uint16_t)GPR_U32(ctx, 3));
label_3ed1d8:
    // 0x3ed1d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3ed1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3ed1dc: 0xae002bb4  sw          $zero, 0x2BB4($s0)
    ctx->pc = 0x3ed1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11188), GPR_U32(ctx, 0));
    // 0x3ed1e0: 0xa2002b3e  sb          $zero, 0x2B3E($s0)
    ctx->pc = 0x3ed1e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11070), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ed1e4: 0xa2002b4c  sb          $zero, 0x2B4C($s0)
    ctx->pc = 0x3ed1e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11084), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ed1e8: 0xa6022ba8  sh          $v0, 0x2BA8($s0)
    ctx->pc = 0x3ed1e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11176), (uint16_t)GPR_U32(ctx, 2));
    // 0x3ed1ec: 0xa6002baa  sh          $zero, 0x2BAA($s0)
    ctx->pc = 0x3ed1ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11178), (uint16_t)GPR_U32(ctx, 0));
    // 0x3ed1f0: 0xa6002bac  sh          $zero, 0x2BAC($s0)
    ctx->pc = 0x3ed1f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11180), (uint16_t)GPR_U32(ctx, 0));
    // 0x3ed1f4: 0x86052ba8  lh          $a1, 0x2BA8($s0)
    ctx->pc = 0x3ed1f4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11176)));
    // 0x3ed1f8: 0x86062baa  lh          $a2, 0x2BAA($s0)
    ctx->pc = 0x3ed1f8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11178)));
    // 0x3ed1fc: 0xc0fa3bc  jal         func_3E8EF0
    ctx->pc = 0x3ED1FCu;
    SET_GPR_U32(ctx, 31, 0x3ED204u);
    ctx->pc = 0x3ED200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED1FCu;
    // 0x3ed200: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E8EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E8EF0u, 0x3ED1FCu, 0x3ED204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED204u;
label_3ed204:
    // 0x3ed204: 0xa2002b3f  sb          $zero, 0x2B3F($s0)
    ctx->pc = 0x3ed204u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11071), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ed208: 0xc0fa2dc  jal         func_3E8B70
    ctx->pc = 0x3ED208u;
    SET_GPR_U32(ctx, 31, 0x3ED210u);
    ctx->pc = 0x3ED20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED208u;
    // 0x3ed20c: 0x92042b3e  lbu         $a0, 0x2B3E($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11070)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E8B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E8B70u, 0x3ED208u, 0x3ED210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED210u;
label_3ed210:
    // 0x3ed210: 0x92032b3e  lbu         $v1, 0x2B3E($s0)
    ctx->pc = 0x3ed210u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11070)));
    // 0x3ed214: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ed214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3ed218: 0xa2032b3e  sb          $v1, 0x2B3E($s0)
    ctx->pc = 0x3ed218u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11070), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ed21c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ed21cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ed220: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ed220u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ed224: 0x3e00008  jr          $ra
    ctx->pc = 0x3ED224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ED228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED224u;
        // 0x3ed228: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ED224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ED22Cu;
}
