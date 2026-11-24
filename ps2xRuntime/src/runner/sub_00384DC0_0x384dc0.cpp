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

// Function: sub_00384DC0
// Address: 0x384dc0 - 0x384ed0
void sub_00384DC0_0x384dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00384DC0_0x384dc0");
#endif

    switch (ctx->pc) {
        case 0x384dfcu: goto label_384dfc;
        case 0x384e40u: goto label_384e40;
        case 0x384e60u: goto label_384e60;
        case 0x384e88u: goto label_384e88;
        case 0x384ebcu: goto label_384ebc;
        default: break;
    }

    ctx->pc = 0x384dc0u;

    // 0x384dc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x384dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x384dc4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x384dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x384dc8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x384dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x384dcc: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x384dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x384dd0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x384dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x384dd4: 0x2406fffb  addiu       $a2, $zero, -0x5
    ctx->pc = 0x384dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x384dd8: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x384dd8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x384ddc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x384ddcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384de0: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x384de0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x384de4: 0xac2040b4  sw          $zero, 0x40B4($at)
    ctx->pc = 0x384de4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x9140B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9140B4u, _value); } while (0);
    // 0x384de8: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x384de8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x384dec: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x384decu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x384df0: 0x8c2540b8  lw          $a1, 0x40B8($at)
    ctx->pc = 0x384df0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x9140B8u));
    // 0x384df4: 0xc0ce438  jal         func_3390E0
    ctx->pc = 0x384DF4u;
    SET_GPR_U32(ctx, 31, 0x384DFCu);
    ctx->pc = 0x384DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384DF4u;
    // 0x384df8: 0x24843fb0  addiu       $a0, $a0, 0x3FB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3390E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3390E0u, 0x384DF4u, 0x384DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384DFCu;
label_384dfc:
    // 0x384dfc: 0x8203002a  lb          $v1, 0x2A($s0)
    ctx->pc = 0x384dfcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x384e00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x384e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x384e04: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x384E04u;
    {
        const bool branch_taken_0x384e04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x384e04) {
            ctx->pc = 0x384E20u;
            goto label_384e20;
        }
    }
    ctx->pc = 0x384E0Cu;
    // 0x384e0c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x384E0Cu;
    {
        const bool branch_taken_0x384e0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x384e0c) {
            ctx->pc = 0x384E20u;
            goto label_384e20;
        }
    }
    ctx->pc = 0x384E14u;
    // 0x384e14: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x384E14u;
    {
        const bool branch_taken_0x384e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x384e14) {
            ctx->pc = 0x384E68u;
            goto label_384e68;
        }
    }
    ctx->pc = 0x384E1Cu;
    // 0x384e1c: 0x0  nop
    ctx->pc = 0x384e1cu;
    // NOP
label_384e20:
    // 0x384e20: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x384e20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x384e24: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x384e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x384e28: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x384e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x384e2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x384e2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384e30: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x384e30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384e34: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x384e34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384e38: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x384E38u;
    SET_GPR_U32(ctx, 31, 0x384E40u);
    ctx->pc = 0x384E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384E38u;
    // 0x384e3c: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x384E38u, 0x384E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384E40u;
label_384e40:
    // 0x384e40: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x384e40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x384e44: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x384e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x384e48: 0x24844aa0  addiu       $a0, $a0, 0x4AA0
    ctx->pc = 0x384e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19104));
    // 0x384e4c: 0x3445090f  ori         $a1, $v0, 0x90F
    ctx->pc = 0x384e4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2319);
    // 0x384e50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x384e50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384e54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x384e54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384e58: 0xc0c99d0  jal         func_326740
    ctx->pc = 0x384E58u;
    SET_GPR_U32(ctx, 31, 0x384E60u);
    ctx->pc = 0x384E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384E58u;
    // 0x384e5c: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326740u, 0x384E58u, 0x384E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384E60u;
label_384e60:
    // 0x384e60: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x384E60u;
    {
        const bool branch_taken_0x384e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x384e60) {
            ctx->pc = 0x384EC0u;
            goto label_384ec0;
        }
    }
    ctx->pc = 0x384E68u;
label_384e68:
    // 0x384e68: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x384e68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x384e6c: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x384e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x384e70: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x384e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x384e74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x384e74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384e78: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x384e78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384e7c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x384e7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384e80: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x384E80u;
    SET_GPR_U32(ctx, 31, 0x384E88u);
    ctx->pc = 0x384E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384E80u;
    // 0x384e84: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x384E80u, 0x384E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384E88u;
label_384e88:
    // 0x384e88: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x384e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x384e8c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x384e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x384e90: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x384e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x384e94: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x384e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x384e98: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x384e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x384e9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x384e9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384ea0: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x384ea0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x384ea4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x384ea4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384ea8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x384ea8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384eac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x384eacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384eb0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x384eb0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384eb4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x384EB4u;
    SET_GPR_U32(ctx, 31, 0x384EBCu);
    ctx->pc = 0x384EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384EB4u;
    // 0x384eb8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x384EB4u, 0x384EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384EBCu;
label_384ebc:
    // 0x384ebc: 0x0  nop
    ctx->pc = 0x384ebcu;
    // NOP
label_384ec0:
    // 0x384ec0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x384ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x384ec4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x384ec4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x384ec8: 0x3e00008  jr          $ra
    ctx->pc = 0x384EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384EC8u;
        // 0x384ecc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384EC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x384ED0u;
}
