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

// Function: sub_0020CDD8
// Address: 0x20cdd8 - 0x20ce68
void sub_0020CDD8_0x20cdd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020CDD8_0x20cdd8");
#endif

    switch (ctx->pc) {
        case 0x20ce10u: goto label_20ce10;
        case 0x20ce1cu: goto label_20ce1c;
        default: break;
    }

    ctx->pc = 0x20cdd8u;

    // 0x20cdd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20cdd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20cddc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20cddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20cde0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20cde0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cde4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20cde4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20cde8: 0x26020d30  addiu       $v0, $s0, 0xD30
    ctx->pc = 0x20cde8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3376));
    // 0x20cdec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20cdecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x20cdf0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x20cdf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x20cdf4: 0x8e042004  lw          $a0, 0x2004($s0)
    ctx->pc = 0x20cdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8196)));
    // 0x20cdf8: 0x8c4501f8  lw          $a1, 0x1F8($v0)
    ctx->pc = 0x20cdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 504)));
    // 0x20cdfc: 0x8c4301f4  lw          $v1, 0x1F4($v0)
    ctx->pc = 0x20cdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 500)));
    // 0x20ce00: 0x14650013  bne         $v1, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x20CE00u;
    {
        const bool branch_taken_0x20ce00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x20CE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CE00u;
        // 0x20ce04: 0x8c910000  lw          $s1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ce00) {
            ctx->pc = 0x20CE50u;
            goto label_20ce50;
        }
    }
    ctx->pc = 0x20CE08u;
    // 0x20ce08: 0xc08e904  jal         func_23A410
    ctx->pc = 0x20CE08u;
    SET_GPR_U32(ctx, 31, 0x20CE10u);
    ctx->pc = 0x20CE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CE08u;
    // 0x20ce0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A410u, 0x20CE08u, 0x20CE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CE10u;
label_20ce10:
    // 0x20ce10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20ce10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ce14: 0xc08e926  jal         func_23A498
    ctx->pc = 0x20CE14u;
    SET_GPR_U32(ctx, 31, 0x20CE1Cu);
    ctx->pc = 0x20CE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CE14u;
    // 0x20ce18: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A498u, 0x20CE14u, 0x20CE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CE1Cu;
label_20ce1c:
    // 0x20ce1c: 0x5a40000d  blezl       $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x20CE1Cu;
    {
        const bool branch_taken_0x20ce1c = (GPR_S64(ctx, 18) <= 0);
        if (branch_taken_0x20ce1c) {
            ctx->pc = 0x20CE20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20CE1Cu;
            // 0x20ce20: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20CE54u;
            goto label_20ce54;
        }
    }
    ctx->pc = 0x20CE24u;
    // 0x20ce24: 0x5840000b  blezl       $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x20CE24u;
    {
        const bool branch_taken_0x20ce24 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x20ce24) {
            ctx->pc = 0x20CE28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20CE24u;
            // 0x20ce28: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20CE54u;
            goto label_20ce54;
        }
    }
    ctx->pc = 0x20CE2Cu;
    // 0x20ce2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20ce2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ce30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20ce30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20ce34: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20ce34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ce38: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20ce38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20ce3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20ce3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20ce40: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x20ce40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ce44: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x20ce44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20ce48: 0x8084192  j           func_210648
    ctx->pc = 0x20CE48u;
    ctx->pc = 0x20CE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CE48u;
    // 0x20ce4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210648u;
    sub_00210648_0x210648(rdram, ctx, runtime); return;
    ctx->pc = 0x20CE50u;
label_20ce50:
    // 0x20ce50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20ce50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20ce54:
    // 0x20ce54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20ce54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20ce58: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20ce58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20ce5c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x20ce5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20ce60: 0x3e00008  jr          $ra
    ctx->pc = 0x20CE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20CE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CE60u;
        // 0x20ce64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CE60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20CE68u;
}
