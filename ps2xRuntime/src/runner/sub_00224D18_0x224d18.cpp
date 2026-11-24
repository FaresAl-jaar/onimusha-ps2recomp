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

// Function: sub_00224D18
// Address: 0x224d18 - 0x224da4
void sub_00224D18_0x224d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224D18_0x224d18");
#endif

    switch (ctx->pc) {
        case 0x224d4cu: goto label_224d4c;
        case 0x224d64u: goto label_224d64;
        default: break;
    }

    ctx->pc = 0x224d18u;

    // 0x224d18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x224d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x224d1c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x224d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x224d20: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x224d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x224d24: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x224d24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224d28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x224d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x224d2c: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x224d2cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x224d30: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x224d30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x224d34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x224d34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224d38: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x224d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x224d3c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x224d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x224d40: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x224d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x224d44: 0xc089168  jal         func_2245A0
    ctx->pc = 0x224D44u;
    SET_GPR_U32(ctx, 31, 0x224D4Cu);
    ctx->pc = 0x224D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224D44u;
    // 0x224d48: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2245A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2245A0u, 0x224D44u, 0x224D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224D4Cu;
label_224d4c:
    // 0x224d4c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x224d4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224d50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x224d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224d54: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x224D54u;
    {
        const bool branch_taken_0x224d54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x224D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224D54u;
        // 0x224d58: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224d54) {
            ctx->pc = 0x224D88u;
            goto label_224d88;
        }
    }
    ctx->pc = 0x224D5Cu;
    // 0x224d5c: 0xc089396  jal         func_224E58
    ctx->pc = 0x224D5Cu;
    SET_GPR_U32(ctx, 31, 0x224D64u);
    ctx->pc = 0x224E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224E58u, 0x224D5Cu, 0x224D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224D64u;
label_224d64:
    // 0x224d64: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x224D64u;
    {
        const bool branch_taken_0x224d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224D64u;
        // 0x224d68: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224d64) {
            ctx->pc = 0x224D8Cu;
            goto label_224d8c;
        }
    }
    ctx->pc = 0x224D6Cu;
    // 0x224d6c: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x224d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x224d70: 0x286300d2  slti        $v1, $v1, 0xD2
    ctx->pc = 0x224d70u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)210) ? 1 : 0);
    // 0x224d74: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x224D74u;
    {
        const bool branch_taken_0x224d74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x224D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224D74u;
        // 0x224d78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224d74) {
            ctx->pc = 0x224D8Cu;
            goto label_224d8c;
        }
    }
    ctx->pc = 0x224D7Cu;
    // 0x224d7c: 0x92230027  lbu         $v1, 0x27($s1)
    ctx->pc = 0x224d7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 39)));
    // 0x224d80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x224d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x224d84: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x224d84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_224d88:
    // 0x224d88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x224d88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_224d8c:
    // 0x224d8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x224d8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x224d90: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x224d90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224d94: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x224d94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x224d98: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x224d98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x224d9c: 0x3e00008  jr          $ra
    ctx->pc = 0x224D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224D9Cu;
        // 0x224da0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224D9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224DA4u;
}
