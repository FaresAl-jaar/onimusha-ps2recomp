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

// Function: sub_002B3060
// Address: 0x2b3060 - 0x2b310c
void sub_002B3060_0x2b3060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B3060_0x2b3060");
#endif

    switch (ctx->pc) {
        case 0x2b30a8u: goto label_2b30a8;
        case 0x2b30f0u: goto label_2b30f0;
        case 0x2b3100u: goto label_2b3100;
        default: break;
    }

    ctx->pc = 0x2b3060u;

    // 0x2b3060: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2b3060u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2b3064: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b3064u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b3068: 0x28810065  slti        $at, $a0, 0x65
    ctx->pc = 0x2b3068u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x2b306c: 0x14200010  bnez        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B306Cu;
    {
        const bool branch_taken_0x2b306c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B306Cu;
        // 0x2b3070: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b306c) {
            ctx->pc = 0x2B30B0u;
            goto label_2b30b0;
        }
    }
    ctx->pc = 0x2B3074u;
    // 0x2b3074: 0x2483ff9c  addiu       $v1, $a0, -0x64
    ctx->pc = 0x2b3074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
    // 0x2b3078: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x2b3078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
    // 0x2b307c: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x2b307cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x2b3080: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x2b3080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x2b3084: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x2b3084u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2b3088: 0x0  nop
    ctx->pc = 0x2b3088u;
    // NOP
    // 0x2b308c: 0x0  nop
    ctx->pc = 0x2b308cu;
    // NOP
    // 0x2b3090: 0x1010  mfhi        $v0
    ctx->pc = 0x2b3090u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2b3094: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x2b3094u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2b3098: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x2b3098u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x2b309c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b309cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b30a0: 0xc0acb90  jal         func_2B2E40
    ctx->pc = 0x2B30A0u;
    SET_GPR_U32(ctx, 31, 0x2B30A8u);
    ctx->pc = 0x2B30A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B30A0u;
    // 0x2b30a4: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2E40u, 0x2B30A0u, 0x2B30A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B30A8u;
label_2b30a8:
    // 0x2b30a8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2B30A8u;
    {
        const bool branch_taken_0x2b30a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b30a8) {
            ctx->pc = 0x2B3100u;
            goto label_2b3100;
        }
    }
    ctx->pc = 0x2B30B0u;
label_2b30b0:
    // 0x2b30b0: 0x28810064  slti        $at, $a0, 0x64
    ctx->pc = 0x2b30b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x2b30b4: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B30B4u;
    {
        const bool branch_taken_0x2b30b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B30B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B30B4u;
        // 0x2b30b8: 0x24030064  addiu       $v1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b30b4) {
            ctx->pc = 0x2B30F8u;
            goto label_2b30f8;
        }
    }
    ctx->pc = 0x2B30BCu;
    // 0x2b30bc: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x2b30bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
    // 0x2b30c0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2b30c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b30c4: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x2b30c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x2b30c8: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x2b30c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x2b30cc: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x2b30ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2b30d0: 0x0  nop
    ctx->pc = 0x2b30d0u;
    // NOP
    // 0x2b30d4: 0x0  nop
    ctx->pc = 0x2b30d4u;
    // NOP
    // 0x2b30d8: 0x1010  mfhi        $v0
    ctx->pc = 0x2b30d8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2b30dc: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x2b30dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2b30e0: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x2b30e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x2b30e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b30e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b30e8: 0xc0acbd4  jal         func_2B2F50
    ctx->pc = 0x2B30E8u;
    SET_GPR_U32(ctx, 31, 0x2B30F0u);
    ctx->pc = 0x2B30ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B30E8u;
    // 0x2b30ec: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2F50u, 0x2B30E8u, 0x2B30F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B30F0u;
label_2b30f0:
    // 0x2b30f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B30F0u;
    {
        const bool branch_taken_0x2b30f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b30f0) {
            ctx->pc = 0x2B3100u;
            goto label_2b3100;
        }
    }
    ctx->pc = 0x2B30F8u;
label_2b30f8:
    // 0x2b30f8: 0xc0acb6c  jal         func_2B2DB0
    ctx->pc = 0x2B30F8u;
    SET_GPR_U32(ctx, 31, 0x2B3100u);
    ctx->pc = 0x2B2DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2DB0u, 0x2B30F8u, 0x2B3100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3100u;
label_2b3100:
    // 0x2b3100: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b3100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b3104: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3104u;
        // 0x2b3108: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B310Cu;
}
