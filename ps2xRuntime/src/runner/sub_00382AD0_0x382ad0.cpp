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

// Function: sub_00382AD0
// Address: 0x382ad0 - 0x382b5c
void sub_00382AD0_0x382ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00382AD0_0x382ad0");
#endif

    switch (ctx->pc) {
        case 0x382af0u: goto label_382af0;
        case 0x382b00u: goto label_382b00;
        case 0x382b14u: goto label_382b14;
        case 0x382b1cu: goto label_382b1c;
        case 0x382b30u: goto label_382b30;
        default: break;
    }

    ctx->pc = 0x382ad0u;

    // 0x382ad0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x382ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x382ad4: 0x30a31000  andi        $v1, $a1, 0x1000
    ctx->pc = 0x382ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4096);
    // 0x382ad8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x382ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x382adc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x382adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x382ae0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x382ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x382ae4: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x382AE4u;
    {
        const bool branch_taken_0x382ae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x382AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382AE4u;
        // 0x382ae8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382ae4) {
            ctx->pc = 0x382B48u;
            goto label_382b48;
        }
    }
    ctx->pc = 0x382AECu;
    // 0x382aec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x382aecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_382af0:
    // 0x382af0: 0x320500ff  andi        $a1, $s0, 0xFF
    ctx->pc = 0x382af0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x382af4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x382af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382af8: 0xc0e0ad8  jal         func_382B60
    ctx->pc = 0x382AF8u;
    SET_GPR_U32(ctx, 31, 0x382B00u);
    ctx->pc = 0x382AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382AF8u;
    // 0x382afc: 0x24060019  addiu       $a2, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x382B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382B60u, 0x382AF8u, 0x382B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382B00u;
label_382b00:
    // 0x382b00: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x382B00u;
    {
        const bool branch_taken_0x382b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x382B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382B00u;
        // 0x382b04: 0x3205ffff  andi        $a1, $s0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x382b00) {
            ctx->pc = 0x382B30u;
            goto label_382b30;
        }
    }
    ctx->pc = 0x382B08u;
    // 0x382b08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x382b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382b0c: 0xc0e09b0  jal         func_3826C0
    ctx->pc = 0x382B0Cu;
    SET_GPR_U32(ctx, 31, 0x382B14u);
    ctx->pc = 0x382B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382B0Cu;
    // 0x382b10: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3826C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3826C0u, 0x382B0Cu, 0x382B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382B14u;
label_382b14:
    // 0x382b14: 0xc0e0f00  jal         func_383C00
    ctx->pc = 0x382B14u;
    SET_GPR_U32(ctx, 31, 0x382B1Cu);
    ctx->pc = 0x382B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382B14u;
    // 0x382b18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x383C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383C00u, 0x382B14u, 0x382B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382B1Cu;
label_382b1c:
    // 0x382b1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x382b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382b20: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x382B20u;
    {
        const bool branch_taken_0x382b20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x382B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382B20u;
        // 0x382b24: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382b20) {
            ctx->pc = 0x382B30u;
            goto label_382b30;
        }
    }
    ctx->pc = 0x382B28u;
    // 0x382b28: 0xc0d26a0  jal         func_349A80
    ctx->pc = 0x382B28u;
    SET_GPR_U32(ctx, 31, 0x382B30u);
    ctx->pc = 0x349A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349A80u, 0x382B28u, 0x382B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382B30u;
label_382b30:
    // 0x382b30: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x382b30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x382b34: 0x2a030005  slti        $v1, $s0, 0x5
    ctx->pc = 0x382b34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x382b38: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x382B38u;
    {
        const bool branch_taken_0x382b38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x382b38) {
            ctx->pc = 0x382AF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_382af0;
        }
    }
    ctx->pc = 0x382B40u;
    // 0x382b40: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x382B40u;
    {
        const bool branch_taken_0x382b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x382b40) {
            ctx->pc = 0x382B48u;
            goto label_382b48;
        }
    }
    ctx->pc = 0x382B48u;
label_382b48:
    // 0x382b48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x382b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x382b4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x382b4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x382b50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x382b50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x382b54: 0x3e00008  jr          $ra
    ctx->pc = 0x382B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x382B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382B54u;
        // 0x382b58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x382B54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x382B5Cu;
}
