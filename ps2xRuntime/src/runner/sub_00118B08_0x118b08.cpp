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

// Function: sub_00118B08
// Address: 0x118b08 - 0x118bc0
void sub_00118B08_0x118b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118B08_0x118b08");
#endif

    switch (ctx->pc) {
        case 0x118b5cu: goto label_118b5c;
        case 0x118b6cu: goto label_118b6c;
        case 0x118b7cu: goto label_118b7c;
        case 0x118b84u: goto label_118b84;
        case 0x118b8cu: goto label_118b8c;
        case 0x118ba4u: goto label_118ba4;
        default: break;
    }

    ctx->pc = 0x118b08u;

    // 0x118b08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x118b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x118b0c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x118b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x118b10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x118b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x118b14: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x118b14u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x118b18: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x118b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x118b1c: 0x26504148  addiu       $s0, $s2, 0x4148
    ctx->pc = 0x118b1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16712));
    // 0x118b20: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x118b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x118b24: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x118b24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x404150u));
    // 0x118b28: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x118B28u;
    {
        const bool branch_taken_0x118b28 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x118b28) {
            ctx->pc = 0x118B3Cu;
            goto label_118b3c;
        }
    }
    ctx->pc = 0x118B30u;
    // 0x118b30: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x118b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x118b34: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x118B34u;
    {
        const bool branch_taken_0x118b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118B34u;
        // 0x118b38: 0x34428001  ori         $v0, $v0, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        if (branch_taken_0x118b34) {
            ctx->pc = 0x118BA8u;
            goto label_118ba8;
        }
    }
    ctx->pc = 0x118B3Cu;
label_118b3c:
    // 0x118b3c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x118b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x118b40: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x118B40u;
    {
        const bool branch_taken_0x118b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x118b40) {
            ctx->pc = 0x118B54u;
            goto label_118b54;
        }
    }
    ctx->pc = 0x118B48u;
    // 0x118b48: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x118b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x118b4c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x118B4Cu;
    {
        const bool branch_taken_0x118b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118B4Cu;
        // 0x118b50: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x118b4c) {
            ctx->pc = 0x118BA8u;
            goto label_118ba8;
        }
    }
    ctx->pc = 0x118B54u;
label_118b54:
    // 0x118b54: 0xc046028  jal         func_1180A0
    ctx->pc = 0x118B54u;
    SET_GPR_U32(ctx, 31, 0x118B5Cu);
    ctx->pc = 0x1180A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180A0u, 0x118B54u, 0x118B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118B5Cu;
label_118b5c:
    // 0x118b5c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x118b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x118b60: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x118b60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118b64: 0xc043738  jal         func_10DCE0
    ctx->pc = 0x118B64u;
    SET_GPR_U32(ctx, 31, 0x118B6Cu);
    ctx->pc = 0x118B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118B64u;
    // 0x118b68: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DCE0u, 0x118B64u, 0x118B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118B6Cu;
label_118b6c:
    // 0x118b6c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x118B6Cu;
    {
        const bool branch_taken_0x118b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x118B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118B6Cu;
        // 0x118b70: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118b6c) {
            ctx->pc = 0x118B90u;
            goto label_118b90;
        }
    }
    ctx->pc = 0x118B74u;
    // 0x118b74: 0xc043ab0  jal         func_10EAC0
    ctx->pc = 0x118B74u;
    SET_GPR_U32(ctx, 31, 0x118B7Cu);
    ctx->pc = 0x118B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118B74u;
    // 0x118b78: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EAC0u, 0x118B74u, 0x118B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118B7Cu;
label_118b7c:
    // 0x118b7c: 0xc046264  jal         func_118990
    ctx->pc = 0x118B7Cu;
    SET_GPR_U32(ctx, 31, 0x118B84u);
    ctx->pc = 0x118B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118B7Cu;
    // 0x118b80: 0x24040c00  addiu       $a0, $zero, 0xC00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118990u, 0x118B7Cu, 0x118B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118B84u;
label_118b84:
    // 0x118b84: 0xc046260  jal         func_118980
    ctx->pc = 0x118B84u;
    SET_GPR_U32(ctx, 31, 0x118B8Cu);
    ctx->pc = 0x118B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118B84u;
    // 0x118b88: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118980u, 0x118B84u, 0x118B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118B8Cu;
label_118b8c:
    // 0x118b8c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x118b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_118b90:
    // 0x118b90: 0xfe404148  sd          $zero, 0x4148($s2)
    ctx->pc = 0x118b90u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16712), GPR_U64(ctx, 0));
    // 0x118b94: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x118B94u;
    {
        const bool branch_taken_0x118b94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x118B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118B94u;
        // 0x118b98: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118b94) {
            ctx->pc = 0x118BA4u;
            goto label_118ba4;
        }
    }
    ctx->pc = 0x118B9Cu;
    // 0x118b9c: 0xc04603c  jal         func_1180F0
    ctx->pc = 0x118B9Cu;
    SET_GPR_U32(ctx, 31, 0x118BA4u);
    ctx->pc = 0x1180F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180F0u, 0x118B9Cu, 0x118BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118BA4u;
label_118ba4:
    // 0x118ba4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x118ba4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_118ba8:
    // 0x118ba8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x118ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x118bac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x118bacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118bb0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x118bb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118bb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118bb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x118BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118BB8u;
        // 0x118bbc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118BC0u;
}
