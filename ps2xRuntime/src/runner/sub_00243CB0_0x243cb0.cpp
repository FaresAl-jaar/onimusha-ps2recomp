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

// Function: sub_00243CB0
// Address: 0x243cb0 - 0x243d58
void sub_00243CB0_0x243cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243CB0_0x243cb0");
#endif

    switch (ctx->pc) {
        case 0x243ce4u: goto label_243ce4;
        case 0x243cfcu: goto label_243cfc;
        case 0x243d04u: goto label_243d04;
        case 0x243d18u: goto label_243d18;
        case 0x243d20u: goto label_243d20;
        case 0x243d38u: goto label_243d38;
        default: break;
    }

    ctx->pc = 0x243cb0u;

    // 0x243cb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x243cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x243cb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x243cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x243cb8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x243cb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243cbc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x243cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x243cc0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x243cc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243cc4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x243cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x243cc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x243cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x243ccc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x243cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x243cd0: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x243cd0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x243cd4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x243CD4u;
    {
        const bool branch_taken_0x243cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x243CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243CD4u;
        // 0x243cd8: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243cd4) {
            ctx->pc = 0x243CF0u;
            goto label_243cf0;
        }
    }
    ctx->pc = 0x243CDCu;
    // 0x243cdc: 0xc091010  jal         func_244040
    ctx->pc = 0x243CDCu;
    SET_GPR_U32(ctx, 31, 0x243CE4u);
    ctx->pc = 0x244040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244040u, 0x243CDCu, 0x243CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243CE4u;
label_243ce4:
    // 0x243ce4: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x243ce4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x243ce8: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x243CE8u;
    {
        const bool branch_taken_0x243ce8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x243CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243CE8u;
        // 0x243cec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243ce8) {
            ctx->pc = 0x243D3Cu;
            goto label_243d3c;
        }
    }
    ctx->pc = 0x243CF0u;
label_243cf0:
    // 0x243cf0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x243cf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243cf4: 0xc091546  jal         func_245518
    ctx->pc = 0x243CF4u;
    SET_GPR_U32(ctx, 31, 0x243CFCu);
    ctx->pc = 0x243CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243CF4u;
    // 0x243cf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245518u, 0x243CF4u, 0x243CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243CFCu;
label_243cfc:
    // 0x243cfc: 0xc090e62  jal         func_243988
    ctx->pc = 0x243CFCu;
    SET_GPR_U32(ctx, 31, 0x243D04u);
    ctx->pc = 0x243D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243CFCu;
    // 0x243d00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243988u, 0x243CFCu, 0x243D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243D04u;
label_243d04:
    // 0x243d04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x243d04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243d08: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x243D08u;
    {
        const bool branch_taken_0x243d08 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x243D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243D08u;
        // 0x243d0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243d08) {
            ctx->pc = 0x243D38u;
            goto label_243d38;
        }
    }
    ctx->pc = 0x243D10u;
    // 0x243d10: 0xc091010  jal         func_244040
    ctx->pc = 0x243D10u;
    SET_GPR_U32(ctx, 31, 0x243D18u);
    ctx->pc = 0x244040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244040u, 0x243D10u, 0x243D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243D18u;
label_243d18:
    // 0x243d18: 0xc090e62  jal         func_243988
    ctx->pc = 0x243D18u;
    SET_GPR_U32(ctx, 31, 0x243D20u);
    ctx->pc = 0x243D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243D18u;
    // 0x243d1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243988u, 0x243D18u, 0x243D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243D20u;
label_243d20:
    // 0x243d20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x243d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243d24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x243d24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243d28: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x243D28u;
    {
        const bool branch_taken_0x243d28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x243D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243D28u;
        // 0x243d2c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243d28) {
            ctx->pc = 0x243D3Cu;
            goto label_243d3c;
        }
    }
    ctx->pc = 0x243D30u;
    // 0x243d30: 0xc049ed2  jal         func_127B48
    ctx->pc = 0x243D30u;
    SET_GPR_U32(ctx, 31, 0x243D38u);
    ctx->pc = 0x127B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B48u, 0x243D30u, 0x243D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243D38u;
label_243d38:
    // 0x243d38: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x243d38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_243d3c:
    // 0x243d3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x243d3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243d40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x243d40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x243d44: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x243d44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243d48: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x243d48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243d4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x243d4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x243d50: 0x3e00008  jr          $ra
    ctx->pc = 0x243D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243D50u;
        // 0x243d54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243D50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243D58u;
}
