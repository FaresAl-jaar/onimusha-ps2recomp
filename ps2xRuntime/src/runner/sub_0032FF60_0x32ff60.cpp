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

// Function: sub_0032FF60
// Address: 0x32ff60 - 0x33002c
void sub_0032FF60_0x32ff60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032FF60_0x32ff60");
#endif

    switch (ctx->pc) {
        case 0x32ffa0u: goto label_32ffa0;
        case 0x32ffb0u: goto label_32ffb0;
        case 0x32ffe0u: goto label_32ffe0;
        case 0x32fff8u: goto label_32fff8;
        case 0x330008u: goto label_330008;
        case 0x330014u: goto label_330014;
        default: break;
    }

    ctx->pc = 0x32ff60u;

    // 0x32ff60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32ff60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32ff64: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x32ff64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x32ff68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32ff68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x32ff6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32ff6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32ff70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32ff70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32ff74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32ff74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32ff78: 0x9023140c  lbu         $v1, 0x140C($at)
    ctx->pc = 0x32ff78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x92140Cu));
    // 0x32ff7c: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x32FF7Cu;
    {
        const bool branch_taken_0x32ff7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32FF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FF7Cu;
        // 0x32ff80: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ff7c) {
            ctx->pc = 0x32FFA8u;
            goto label_32ffa8;
        }
    }
    ctx->pc = 0x32FF84u;
    // 0x32ff84: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x32FF84u;
    {
        const bool branch_taken_0x32ff84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ff84) {
            ctx->pc = 0x32FF98u;
            goto label_32ff98;
        }
    }
    ctx->pc = 0x32FF8Cu;
    // 0x32ff8c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x32FF8Cu;
    {
        const bool branch_taken_0x32ff8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ff8c) {
            ctx->pc = 0x32FFB8u;
            goto label_32ffb8;
        }
    }
    ctx->pc = 0x32FF94u;
    // 0x32ff94: 0x0  nop
    ctx->pc = 0x32ff94u;
    // NOP
label_32ff98:
    // 0x32ff98: 0xc0cc13c  jal         func_3304F0
    ctx->pc = 0x32FF98u;
    SET_GPR_U32(ctx, 31, 0x32FFA0u);
    ctx->pc = 0x3304F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3304F0u, 0x32FF98u, 0x32FFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FFA0u;
label_32ffa0:
    // 0x32ffa0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x32FFA0u;
    {
        const bool branch_taken_0x32ffa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FFA0u;
        // 0x32ffa4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ffa0) {
            ctx->pc = 0x32FFB8u;
            goto label_32ffb8;
        }
    }
    ctx->pc = 0x32FFA8u;
label_32ffa8:
    // 0x32ffa8: 0xc0cc774  jal         func_331DD0
    ctx->pc = 0x32FFA8u;
    SET_GPR_U32(ctx, 31, 0x32FFB0u);
    ctx->pc = 0x331DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331DD0u, 0x32FFA8u, 0x32FFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FFB0u;
label_32ffb0:
    // 0x32ffb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32ffb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ffb4: 0x0  nop
    ctx->pc = 0x32ffb4u;
    // NOP
label_32ffb8:
    // 0x32ffb8: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x32ffb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x32ffbc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x32FFBCu;
    {
        const bool branch_taken_0x32ffbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ffbc) {
            ctx->pc = 0x32FFE8u;
            goto label_32ffe8;
        }
    }
    ctx->pc = 0x32FFC4u;
    // 0x32ffc4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x32ffc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32ffc8: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x32ffc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x32ffcc: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x32ffccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x32ffd0: 0x94450004  lhu         $a1, 0x4($v0)
    ctx->pc = 0x32ffd0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x32ffd4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x32ffd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32ffd8: 0xc0bd1d0  jal         func_2F4740
    ctx->pc = 0x32FFD8u;
    SET_GPR_U32(ctx, 31, 0x32FFE0u);
    ctx->pc = 0x32FFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FFD8u;
    // 0x32ffdc: 0x30460001  andi        $a2, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4740u, 0x32FFD8u, 0x32FFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FFE0u;
label_32ffe0:
    // 0x32ffe0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x32FFE0u;
    {
        const bool branch_taken_0x32ffe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FFE0u;
        // 0x32ffe4: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ffe0) {
            ctx->pc = 0x32FFF0u;
            goto label_32fff0;
        }
    }
    ctx->pc = 0x32FFE8u;
label_32ffe8:
    // 0x32ffe8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x32ffe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32ffec: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x32ffecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_32fff0:
    // 0x32fff0: 0xc0cc03c  jal         func_3300F0
    ctx->pc = 0x32FFF0u;
    SET_GPR_U32(ctx, 31, 0x32FFF8u);
    ctx->pc = 0x32FFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FFF0u;
    // 0x32fff4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3300F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3300F0u, 0x32FFF0u, 0x32FFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FFF8u;
label_32fff8:
    // 0x32fff8: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x32fff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x32fffc: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x32fffcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x330000: 0xc0cebdc  jal         func_33AF70
    ctx->pc = 0x330000u;
    SET_GPR_U32(ctx, 31, 0x330008u);
    ctx->pc = 0x330004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330000u;
    // 0x330004: 0x248440c0  addiu       $a0, $a0, 0x40C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AF70u, 0x330000u, 0x330008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330008u;
label_330008:
    // 0x330008: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x330008u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x33000c: 0xc0ceb88  jal         func_33AE20
    ctx->pc = 0x33000Cu;
    SET_GPR_U32(ctx, 31, 0x330014u);
    ctx->pc = 0x330010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33000Cu;
    // 0x330010: 0x248440c0  addiu       $a0, $a0, 0x40C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AE20u, 0x33000Cu, 0x330014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330014u;
label_330014:
    // 0x330014: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x330014u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330018: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x330018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33001c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33001cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x330020: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x330020u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x330024: 0x3e00008  jr          $ra
    ctx->pc = 0x330024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x330028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330024u;
        // 0x330028: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33002Cu;
}
