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

// Function: sub_002A2A40
// Address: 0x2a2a40 - 0x2a2adc
void sub_002A2A40_0x2a2a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A2A40_0x2a2a40");
#endif

    switch (ctx->pc) {
        case 0x2a2a78u: goto label_2a2a78;
        case 0x2a2aa8u: goto label_2a2aa8;
        default: break;
    }

    ctx->pc = 0x2a2a40u;

    // 0x2a2a40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a2a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a2a44: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a2a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2a2a48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a2a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a2a4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a2a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a2a50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a2a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a2a54: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2a2a54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2a58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a2a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a2a5c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a2a5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2a60: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2a2a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a2a64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a2a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2a68: 0x94530000  lhu         $s3, 0x0($v0)
    ctx->pc = 0x2a2a68u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a2a6c: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x2a2a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2a2a70: 0xc0526d4  jal         func_149B50
    ctx->pc = 0x2A2A70u;
    SET_GPR_U32(ctx, 31, 0x2A2A78u);
    ctx->pc = 0x2A2A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2A70u;
    // 0x2a2a74: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149B50u, 0x2A2A70u, 0x2A2A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2A78u;
label_2a2a78:
    // 0x2a2a78: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2a2a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2a2a7c: 0x138080  sll         $s0, $s3, 2
    ctx->pc = 0x2a2a7cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x2a2a80: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x2a2a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2a2a84: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2a2a84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2a88: 0xac520010  sw          $s2, 0x10($v0)
    ctx->pc = 0x2a2a88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 18));
    // 0x2a2a8c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2a2a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2a2a90: 0x2509021  addu        $s2, $s2, $s0
    ctx->pc = 0x2a2a90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x2a2a94: 0x2644000f  addiu       $a0, $s2, 0xF
    ctx->pc = 0x2a2a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 15));
    // 0x2a2a98: 0x839024  and         $s2, $a0, $v1
    ctx->pc = 0x2a2a98u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2a2a9c: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x2a2a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2a2aa0: 0xc0526d4  jal         func_149B50
    ctx->pc = 0x2A2AA0u;
    SET_GPR_U32(ctx, 31, 0x2A2AA8u);
    ctx->pc = 0x2A2AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2AA0u;
    // 0x2a2aa4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149B50u, 0x2A2AA0u, 0x2A2AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2AA8u;
label_2a2aa8:
    // 0x2a2aa8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2a2aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2a2aac: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x2a2aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2a2ab0: 0xac720010  sw          $s2, 0x10($v1)
    ctx->pc = 0x2a2ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 18));
    // 0x2a2ab4: 0x2509021  addu        $s2, $s2, $s0
    ctx->pc = 0x2a2ab4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x2a2ab8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a2ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a2abc: 0x2643000f  addiu       $v1, $s2, 0xF
    ctx->pc = 0x2a2abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 15));
    // 0x2a2ac0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a2ac0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a2ac4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a2ac4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a2ac8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2a2ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a2acc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a2accu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a2ad0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a2ad0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a2ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2AD4u;
        // 0x2a2ad8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A2ADCu;
}
