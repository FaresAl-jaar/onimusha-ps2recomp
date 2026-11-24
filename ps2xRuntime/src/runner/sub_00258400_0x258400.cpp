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

// Function: sub_00258400
// Address: 0x258400 - 0x2584a4
void sub_00258400_0x258400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258400_0x258400");
#endif

    switch (ctx->pc) {
        case 0x25841cu: goto label_25841c;
        case 0x258430u: goto label_258430;
        case 0x25843cu: goto label_25843c;
        case 0x258470u: goto label_258470;
        default: break;
    }

    ctx->pc = 0x258400u;

    // 0x258400: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x258400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x258404: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x258404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x258408: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x258408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25840c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x25840cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258410: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x258410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x258414: 0xc0957f4  jal         func_255FD0
    ctx->pc = 0x258414u;
    SET_GPR_U32(ctx, 31, 0x25841Cu);
    ctx->pc = 0x258418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258414u;
    // 0x258418: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255FD0u, 0x258414u, 0x25841Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25841Cu;
label_25841c:
    // 0x25841c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25841cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258420: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x258420u;
    {
        const bool branch_taken_0x258420 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x258420) {
            ctx->pc = 0x258430u;
            goto label_258430;
        }
    }
    ctx->pc = 0x258428u;
    // 0x258428: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x258428u;
    {
        const bool branch_taken_0x258428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25842Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258428u;
        // 0x25842c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258428) {
            ctx->pc = 0x258490u;
            goto label_258490;
        }
    }
    ctx->pc = 0x258430u;
label_258430:
    // 0x258430: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x258430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258434: 0xc097958  jal         func_25E560
    ctx->pc = 0x258434u;
    SET_GPR_U32(ctx, 31, 0x25843Cu);
    ctx->pc = 0x258438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258434u;
    // 0x258438: 0x27a5003c  addiu       $a1, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E560u, 0x258434u, 0x25843Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25843Cu;
label_25843c:
    // 0x25843c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x25843Cu;
    {
        const bool branch_taken_0x25843c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25843c) {
            ctx->pc = 0x258488u;
            goto label_258488;
        }
    }
    ctx->pc = 0x258444u;
    // 0x258444: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x258444u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x258448: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x258448u;
    {
        const bool branch_taken_0x258448 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x258448) {
            ctx->pc = 0x258488u;
            goto label_258488;
        }
    }
    ctx->pc = 0x258450u;
    // 0x258450: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x258450u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x258454: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x258454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x258458: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x258458u;
    {
        const bool branch_taken_0x258458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x258458) {
            ctx->pc = 0x258478u;
            goto label_258478;
        }
    }
    ctx->pc = 0x258460u;
    // 0x258460: 0x8fa6003c  lw          $a2, 0x3C($sp)
    ctx->pc = 0x258460u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x258464: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x258464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258468: 0xc049522  jal         func_125488
    ctx->pc = 0x258468u;
    SET_GPR_U32(ctx, 31, 0x258470u);
    ctx->pc = 0x25846Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258468u;
    // 0x25846c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x258468u, 0x258470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258470u;
label_258470:
    // 0x258470: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x258470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x258474: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x258474u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_258478:
    // 0x258478: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x258478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x25847c: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x25847Cu;
    {
        const bool branch_taken_0x25847c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25847Cu;
        // 0x258480: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25847c) {
            ctx->pc = 0x258430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_258430;
        }
    }
    ctx->pc = 0x258484u;
    // 0x258484: 0x0  nop
    ctx->pc = 0x258484u;
    // NOP
label_258488:
    // 0x258488: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x258488u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25848c: 0x0  nop
    ctx->pc = 0x25848cu;
    // NOP
label_258490:
    // 0x258490: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x258490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258494: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x258494u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258498: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x258498u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25849c: 0x3e00008  jr          $ra
    ctx->pc = 0x25849Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2584A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25849Cu;
        // 0x2584a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25849Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2584A4u;
}
