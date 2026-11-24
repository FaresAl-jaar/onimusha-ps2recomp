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

// Function: sub_0011F428
// Address: 0x11f428 - 0x11f4a0
void sub_0011F428_0x11f428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011F428_0x11f428");
#endif

    switch (ctx->pc) {
        case 0x11f44cu: goto label_11f44c;
        case 0x11f468u: goto label_11f468;
        case 0x11f478u: goto label_11f478;
        default: break;
    }

    ctx->pc = 0x11f428u;

    // 0x11f428: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11f428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11f42c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11f42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11f430: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11f430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11f434: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x11f434u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11f438: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x11f438u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x11f43c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11f43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11f440: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11f440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11f444: 0xc046028  jal         func_1180A0
    ctx->pc = 0x11F444u;
    SET_GPR_U32(ctx, 31, 0x11F44Cu);
    ctx->pc = 0x11F448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F444u;
    // 0x11f448: 0xae3241a4  sw          $s2, 0x41A4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16804), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180A0u, 0x11F444u, 0x11F44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F44Cu;
label_11f44c:
    // 0x11f44c: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x11f44cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
    // 0x11f450: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x11f450u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x11f454: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11f454u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f458: 0x24a5f3d0  addiu       $a1, $a1, -0xC30
    ctx->pc = 0x11f458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964176));
    // 0x11f45c: 0x34840012  ori         $a0, $a0, 0x12
    ctx->pc = 0x11f45cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)18);
    // 0x11f460: 0xc04444a  jal         func_111128
    ctx->pc = 0x11F460u;
    SET_GPR_U32(ctx, 31, 0x11F468u);
    ctx->pc = 0x11F464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F460u;
    // 0x11f464: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111128u, 0x11F460u, 0x11F468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F468u;
label_11f468:
    // 0x11f468: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11F468u;
    {
        const bool branch_taken_0x11f468 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F468u;
        // 0x11f46c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f468) {
            ctx->pc = 0x11F47Cu;
            goto label_11f47c;
        }
    }
    ctx->pc = 0x11F470u;
    // 0x11f470: 0xc04603c  jal         func_1180F0
    ctx->pc = 0x11F470u;
    SET_GPR_U32(ctx, 31, 0x11F478u);
    ctx->pc = 0x1180F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180F0u, 0x11F470u, 0x11F478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F478u;
label_11f478:
    // 0x11f478: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x11f478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_11f47c:
    // 0x11f47c: 0xae2041a4  sw          $zero, 0x41A4($s1)
    ctx->pc = 0x11f47cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16804), GPR_U32(ctx, 0));
    // 0x11f480: 0xac5241c8  sw          $s2, 0x41C8($v0)
    ctx->pc = 0x11f480u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16840), GPR_U32(ctx, 18));
    // 0x11f484: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11f484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11f488: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11f488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11f48c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11f48cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11f490: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11f490u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11f494: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11f494u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11f498: 0x3e00008  jr          $ra
    ctx->pc = 0x11F498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F498u;
        // 0x11f49c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F4A0u;
}
