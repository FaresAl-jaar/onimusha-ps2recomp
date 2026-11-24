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

// Function: sub_00204D48
// Address: 0x204d48 - 0x204dfc
void sub_00204D48_0x204d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204D48_0x204d48");
#endif

    switch (ctx->pc) {
        case 0x204d74u: goto label_204d74;
        case 0x204da8u: goto label_204da8;
        case 0x204dc0u: goto label_204dc0;
        default: break;
    }

    ctx->pc = 0x204d48u;

    // 0x204d48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x204d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x204d4c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x204d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x204d50: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x204d50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204d54: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x204d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x204d58: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x204d58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204d5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x204d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x204d60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x204d60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204d64: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x204d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x204d68: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x204d68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x204d6c: 0xc081d84  jal         func_207610
    ctx->pc = 0x204D6Cu;
    SET_GPR_U32(ctx, 31, 0x204D74u);
    ctx->pc = 0x204D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204D6Cu;
    // 0x204d70: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x204D6Cu, 0x204D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204D74u;
label_204d74:
    // 0x204d74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x204d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204d78: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x204D78u;
    {
        const bool branch_taken_0x204d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x204D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204D78u;
        // 0x204d7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204d78) {
            ctx->pc = 0x204DA0u;
            goto label_204da0;
        }
    }
    ctx->pc = 0x204D80u;
    // 0x204d80: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x204d80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x204d84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x204d84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204d88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x204d88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x204d8c: 0x24846d00  addiu       $a0, $a0, 0x6D00
    ctx->pc = 0x204d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27904));
    // 0x204d90: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x204d90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x204d94: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x204d94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x204d98: 0x8082e3e  j           func_20B8F8
    ctx->pc = 0x204D98u;
    ctx->pc = 0x204D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204D98u;
    // 0x204d9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    sub_0020B8F8_0x20b8f8(rdram, ctx, runtime); return;
    ctx->pc = 0x204DA0u;
label_204da0:
    // 0x204da0: 0xc081c12  jal         func_207048
    ctx->pc = 0x204DA0u;
    SET_GPR_U32(ctx, 31, 0x204DA8u);
    ctx->pc = 0x207048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207048u, 0x204DA0u, 0x204DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204DA8u;
label_204da8:
    // 0x204da8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x204da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204dac: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x204dacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204db0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x204DB0u;
    {
        const bool branch_taken_0x204db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204DB0u;
        // 0x204db4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204db0) {
            ctx->pc = 0x204DE4u;
            goto label_204de4;
        }
    }
    ctx->pc = 0x204DB8u;
    // 0x204db8: 0xc08688a  jal         func_21A228
    ctx->pc = 0x204DB8u;
    SET_GPR_U32(ctx, 31, 0x204DC0u);
    ctx->pc = 0x21A228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A228u, 0x204DB8u, 0x204DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204DC0u;
label_204dc0:
    // 0x204dc0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x204dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x204dc4: 0x2443fffc  addiu       $v1, $v0, -0x4
    ctx->pc = 0x204dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x204dc8: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x204dc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x204dcc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x204DCCu;
    {
        const bool branch_taken_0x204dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204DCCu;
        // 0x204dd0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204dcc) {
            ctx->pc = 0x204DE8u;
            goto label_204de8;
        }
    }
    ctx->pc = 0x204DD4u;
    // 0x204dd4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x204dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x204dd8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x204dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x204ddc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x204ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x204de0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x204de0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_204de4:
    // 0x204de4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x204de4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_204de8:
    // 0x204de8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x204de8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x204dec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x204decu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x204df0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x204df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x204df4: 0x3e00008  jr          $ra
    ctx->pc = 0x204DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204DF4u;
        // 0x204df8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204DF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204DFCu;
}
