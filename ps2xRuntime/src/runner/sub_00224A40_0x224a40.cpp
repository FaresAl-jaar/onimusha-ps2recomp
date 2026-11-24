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

// Function: sub_00224A40
// Address: 0x224a40 - 0x224ab0
void sub_00224A40_0x224a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224A40_0x224a40");
#endif

    switch (ctx->pc) {
        case 0x224a6cu: goto label_224a6c;
        case 0x224a84u: goto label_224a84;
        default: break;
    }

    ctx->pc = 0x224a40u;

    // 0x224a40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x224a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x224a44: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x224a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x224a48: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x224a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x224a4c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x224a4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224a50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x224a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x224a54: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x224a54u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x224a58: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x224a58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x224a5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x224a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x224a60: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x224a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x224a64: 0xc089168  jal         func_2245A0
    ctx->pc = 0x224A64u;
    SET_GPR_U32(ctx, 31, 0x224A6Cu);
    ctx->pc = 0x224A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224A64u;
    // 0x224a68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2245A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2245A0u, 0x224A64u, 0x224A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224A6Cu;
label_224a6c:
    // 0x224a6c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x224a6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224a70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x224a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224a74: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x224A74u;
    {
        const bool branch_taken_0x224a74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x224A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224A74u;
        // 0x224a78: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224a74) {
            ctx->pc = 0x224A98u;
            goto label_224a98;
        }
    }
    ctx->pc = 0x224A7Cu;
    // 0x224a7c: 0xc089396  jal         func_224E58
    ctx->pc = 0x224A7Cu;
    SET_GPR_U32(ctx, 31, 0x224A84u);
    ctx->pc = 0x224E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224E58u, 0x224A7Cu, 0x224A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224A84u;
label_224a84:
    // 0x224a84: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x224A84u;
    {
        const bool branch_taken_0x224a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224A84u;
        // 0x224a88: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224a84) {
            ctx->pc = 0x224A9Cu;
            goto label_224a9c;
        }
    }
    ctx->pc = 0x224A8Cu;
    // 0x224a8c: 0x92230022  lbu         $v1, 0x22($s1)
    ctx->pc = 0x224a8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x224a90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x224a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x224a94: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x224a94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_224a98:
    // 0x224a98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x224a98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_224a9c:
    // 0x224a9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x224a9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x224aa0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x224aa0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224aa4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x224aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x224aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x224AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224AA8u;
        // 0x224aac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224AB0u;
}
