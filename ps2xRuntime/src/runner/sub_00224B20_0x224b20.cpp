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

// Function: sub_00224B20
// Address: 0x224b20 - 0x224b94
void sub_00224B20_0x224b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224B20_0x224b20");
#endif

    switch (ctx->pc) {
        case 0x224b48u: goto label_224b48;
        case 0x224b60u: goto label_224b60;
        default: break;
    }

    ctx->pc = 0x224b20u;

    // 0x224b20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x224b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x224b24: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x224b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x224b28: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x224b28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224b2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x224b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x224b30: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x224b30u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x224b34: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x224b34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x224b38: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x224b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x224b3c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x224b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x224b40: 0xc089168  jal         func_2245A0
    ctx->pc = 0x224B40u;
    SET_GPR_U32(ctx, 31, 0x224B48u);
    ctx->pc = 0x224B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224B40u;
    // 0x224b44: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2245A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2245A0u, 0x224B40u, 0x224B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224B48u;
label_224b48:
    // 0x224b48: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x224b48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224b4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x224b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224b50: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x224B50u;
    {
        const bool branch_taken_0x224b50 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x224B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224B50u;
        // 0x224b54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224b50) {
            ctx->pc = 0x224B7Cu;
            goto label_224b7c;
        }
    }
    ctx->pc = 0x224B58u;
    // 0x224b58: 0xc089396  jal         func_224E58
    ctx->pc = 0x224B58u;
    SET_GPR_U32(ctx, 31, 0x224B60u);
    ctx->pc = 0x224E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224E58u, 0x224B58u, 0x224B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224B60u;
label_224b60:
    // 0x224b60: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x224B60u;
    {
        const bool branch_taken_0x224b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224B60u;
        // 0x224b64: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224b60) {
            ctx->pc = 0x224B80u;
            goto label_224b80;
        }
    }
    ctx->pc = 0x224B68u;
    // 0x224b68: 0x92230023  lbu         $v1, 0x23($s1)
    ctx->pc = 0x224b68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x224b6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x224b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x224b70: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x224b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x224b74: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x224b74u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x224b78: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x224b78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_224b7c:
    // 0x224b7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x224b7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_224b80:
    // 0x224b80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x224b80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x224b84: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x224b84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224b88: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x224b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x224b8c: 0x3e00008  jr          $ra
    ctx->pc = 0x224B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224B8Cu;
        // 0x224b90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224B8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224B94u;
}
