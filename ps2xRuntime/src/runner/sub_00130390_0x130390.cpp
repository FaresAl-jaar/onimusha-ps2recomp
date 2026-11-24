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

// Function: sub_00130390
// Address: 0x130390 - 0x130458
void sub_00130390_0x130390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130390_0x130390");
#endif

    switch (ctx->pc) {
        case 0x1303c8u: goto label_1303c8;
        case 0x1303dcu: goto label_1303dc;
        case 0x130404u: goto label_130404;
        case 0x130438u: goto label_130438;
        default: break;
    }

    ctx->pc = 0x130390u;

    // 0x130390: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x130390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x130394: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x130394u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x130398: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x130398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x13039c: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x13039cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x1303a0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1303a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1303a4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1303a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1303a8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1303a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1303ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1303acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1303b0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1303b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1303b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1303b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1303b8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1303b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1303bc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1303bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1303c0: 0xc05e360  jal         func_178D80
    ctx->pc = 0x1303C0u;
    SET_GPR_U32(ctx, 31, 0x1303C8u);
    ctx->pc = 0x1303C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1303C0u;
    // 0x1303c4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x1303C0u, 0x1303C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1303C8u;
label_1303c8:
    // 0x1303c8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x1303c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x1303cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1303ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1303d0: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x1303d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x1303d4: 0xc05e360  jal         func_178D80
    ctx->pc = 0x1303D4u;
    SET_GPR_U32(ctx, 31, 0x1303DCu);
    ctx->pc = 0x1303D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1303D4u;
    // 0x1303d8: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x1303D4u, 0x1303DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1303DCu;
label_1303dc:
    // 0x1303dc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1303dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1303e0: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1303e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1303e4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1303e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1303e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1303e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1303ec: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1303ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1303f0: 0x24a55a70  addiu       $a1, $a1, 0x5A70
    ctx->pc = 0x1303f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23152));
    // 0x1303f4: 0x3c020808  lui         $v0, 0x808
    ctx->pc = 0x1303f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2056 << 16));
    // 0x1303f8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1303f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1303fc: 0xc04c094  jal         func_130250
    ctx->pc = 0x1303FCu;
    SET_GPR_U32(ctx, 31, 0x130404u);
    ctx->pc = 0x130400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1303FCu;
    // 0x130400: 0xae140008  sw          $s4, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130250u, 0x1303FCu, 0x130404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130404u;
label_130404:
    // 0x130404: 0x12113c  dsll32      $v0, $s2, 4
    ctx->pc = 0x130404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 4));
    // 0x130408: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x130408u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x13040c: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x13040cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x130410: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x130410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x130414: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x130414u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x130418: 0x133182  srl         $a2, $s3, 6
    ctx->pc = 0x130418u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 19), 6));
    // 0x13041c: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x13041cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x130420: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x130420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x130424: 0xfe230000  sd          $v1, 0x0($s1)
    ctx->pc = 0x130424u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
    // 0x130428: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x130428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x13042c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13042cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130430: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x130430u;
    SET_GPR_U32(ctx, 31, 0x130438u);
    ctx->pc = 0x130434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130430u;
    // 0x130434: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x130430u, 0x130438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130438u;
label_130438:
    // 0x130438: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x130438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13043c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13043cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x130440: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x130440u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x130444: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x130444u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x130448: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x130448u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13044c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13044cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130450: 0x3e00008  jr          $ra
    ctx->pc = 0x130450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130450u;
        // 0x130454: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130458u;
}
