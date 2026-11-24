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

// Function: sub_0038D680
// Address: 0x38d680 - 0x38d750
void sub_0038D680_0x38d680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038D680_0x38d680");
#endif

    switch (ctx->pc) {
        case 0x38d6d8u: goto label_38d6d8;
        case 0x38d6e4u: goto label_38d6e4;
        case 0x38d6f4u: goto label_38d6f4;
        case 0x38d710u: goto label_38d710;
        case 0x38d730u: goto label_38d730;
        default: break;
    }

    ctx->pc = 0x38d680u;

    // 0x38d680: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x38d680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x38d684: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x38d684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x38d688: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38d688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38d68c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38d68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38d690: 0x90850118  lbu         $a1, 0x118($a0)
    ctx->pc = 0x38d690u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 280)));
    // 0x38d694: 0x10a30024  beq         $a1, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x38D694u;
    {
        const bool branch_taken_0x38d694 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x38D698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D694u;
        // 0x38d698: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d694) {
            ctx->pc = 0x38D728u;
            goto label_38d728;
        }
    }
    ctx->pc = 0x38D69Cu;
    // 0x38d69c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38d69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38d6a0: 0x10a30019  beq         $a1, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x38D6A0u;
    {
        const bool branch_taken_0x38d6a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x38d6a0) {
            ctx->pc = 0x38D708u;
            goto label_38d708;
        }
    }
    ctx->pc = 0x38D6A8u;
    // 0x38d6a8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x38D6A8u;
    {
        const bool branch_taken_0x38d6a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x38d6a8) {
            ctx->pc = 0x38D6B8u;
            goto label_38d6b8;
        }
    }
    ctx->pc = 0x38D6B0u;
    // 0x38d6b0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x38D6B0u;
    {
        const bool branch_taken_0x38d6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38d6b0) {
            ctx->pc = 0x38D740u;
            goto label_38d740;
        }
    }
    ctx->pc = 0x38D6B8u;
label_38d6b8:
    // 0x38d6b8: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x38d6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x38d6bc: 0x2463c770  addiu       $v1, $v1, -0x3890
    ctx->pc = 0x38d6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952816));
    // 0x38d6c0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x38d6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x38d6c4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x38d6c4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x65C770u));
    // 0x38d6c8: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x38d6c8u;
    { uint32_t bits = FAST_READ32(0x65C780u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38d6cc: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x38d6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x38d6d0: 0xc0e2e4c  jal         func_38B930
    ctx->pc = 0x38D6D0u;
    SET_GPR_U32(ctx, 31, 0x38D6D8u);
    ctx->pc = 0x38D6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D6D0u;
    // 0x38d6d4: 0xe4a00010  swc1        $f0, 0x10($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B930u, 0x38D6D0u, 0x38D6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D6D8u;
label_38d6d8:
    // 0x38d6d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38d6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d6dc: 0xc0e2df4  jal         func_38B7D0
    ctx->pc = 0x38D6DCu;
    SET_GPR_U32(ctx, 31, 0x38D6E4u);
    ctx->pc = 0x38D6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D6DCu;
    // 0x38d6e0: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B7D0u, 0x38D6DCu, 0x38D6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D6E4u;
label_38d6e4:
    // 0x38d6e4: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x38d6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x38d6e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x38d6e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x38d6ec: 0xc0e2d3c  jal         func_38B4F0
    ctx->pc = 0x38D6ECu;
    SET_GPR_U32(ctx, 31, 0x38D6F4u);
    ctx->pc = 0x38D6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D6ECu;
    // 0x38d6f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B4F0u, 0x38D6ECu, 0x38D6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D6F4u;
label_38d6f4:
    // 0x38d6f4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x38D6F4u;
    {
        const bool branch_taken_0x38d6f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D6F4u;
        // 0x38d6f8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d6f4) {
            ctx->pc = 0x38D740u;
            goto label_38d740;
        }
    }
    ctx->pc = 0x38D6FCu;
    // 0x38d6fc: 0xa2030118  sb          $v1, 0x118($s0)
    ctx->pc = 0x38d6fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 280), (uint8_t)GPR_U32(ctx, 3));
    // 0x38d700: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x38D700u;
    {
        const bool branch_taken_0x38d700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D700u;
        // 0x38d704: 0xa2000119  sb          $zero, 0x119($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 281), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d700) {
            ctx->pc = 0x38D740u;
            goto label_38d740;
        }
    }
    ctx->pc = 0x38D708u;
label_38d708:
    // 0x38d708: 0xc0e344c  jal         func_38D130
    ctx->pc = 0x38D708u;
    SET_GPR_U32(ctx, 31, 0x38D710u);
    ctx->pc = 0x38D130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D130u, 0x38D708u, 0x38D710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D710u;
label_38d710:
    // 0x38d710: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x38D710u;
    {
        const bool branch_taken_0x38d710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D710u;
        // 0x38d714: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d710) {
            ctx->pc = 0x38D740u;
            goto label_38d740;
        }
    }
    ctx->pc = 0x38D718u;
    // 0x38d718: 0xa2030118  sb          $v1, 0x118($s0)
    ctx->pc = 0x38d718u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 280), (uint8_t)GPR_U32(ctx, 3));
    // 0x38d71c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x38D71Cu;
    {
        const bool branch_taken_0x38d71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D71Cu;
        // 0x38d720: 0xa2000119  sb          $zero, 0x119($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 281), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d71c) {
            ctx->pc = 0x38D740u;
            goto label_38d740;
        }
    }
    ctx->pc = 0x38D724u;
    // 0x38d724: 0x0  nop
    ctx->pc = 0x38d724u;
    // NOP
label_38d728:
    // 0x38d728: 0xc0e2d60  jal         func_38B580
    ctx->pc = 0x38D728u;
    SET_GPR_U32(ctx, 31, 0x38D730u);
    ctx->pc = 0x38B580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B580u, 0x38D728u, 0x38D730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D730u;
label_38d730:
    // 0x38d730: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38D730u;
    {
        const bool branch_taken_0x38d730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38d730) {
            ctx->pc = 0x38D740u;
            goto label_38d740;
        }
    }
    ctx->pc = 0x38D738u;
    // 0x38d738: 0xa2000118  sb          $zero, 0x118($s0)
    ctx->pc = 0x38d738u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 280), (uint8_t)GPR_U32(ctx, 0));
    // 0x38d73c: 0xa2000119  sb          $zero, 0x119($s0)
    ctx->pc = 0x38d73cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 281), (uint8_t)GPR_U32(ctx, 0));
label_38d740:
    // 0x38d740: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38d740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38d744: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38d744u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38d748: 0x3e00008  jr          $ra
    ctx->pc = 0x38D748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38D74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D748u;
        // 0x38d74c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38D750u;
}
