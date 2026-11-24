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

// Function: sub_00259BF0
// Address: 0x259bf0 - 0x259cd8
void sub_00259BF0_0x259bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259BF0_0x259bf0");
#endif

    switch (ctx->pc) {
        case 0x259c28u: goto label_259c28;
        case 0x259c30u: goto label_259c30;
        case 0x259c78u: goto label_259c78;
        case 0x259c8cu: goto label_259c8c;
        case 0x259ca0u: goto label_259ca0;
        default: break;
    }

    ctx->pc = 0x259bf0u;

    // 0x259bf0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x259bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x259bf4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x259bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x259bf8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x259bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x259bfc: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x259bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x259c00: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x259c00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259c04: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x259c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x259c08: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x259c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x259c0c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x259c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x259c10: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x259c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x259c14: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x259c14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x259c18: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x259C18u;
    {
        const bool branch_taken_0x259c18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x259C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259C18u;
        // 0x259c1c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259c18) {
            ctx->pc = 0x259CB8u;
            goto label_259cb8;
        }
    }
    ctx->pc = 0x259C20u;
    // 0x259c20: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x259c20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259c24: 0x0  nop
    ctx->pc = 0x259c24u;
    // NOP
label_259c28:
    // 0x259c28: 0xc0745d0  jal         func_1D1740
    ctx->pc = 0x259C28u;
    SET_GPR_U32(ctx, 31, 0x259C30u);
    ctx->pc = 0x1D1740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1740u, 0x259C28u, 0x259C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259C30u;
label_259c30:
    // 0x259c30: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x259c30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259c34: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x259c34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x259c38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x259c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x259c3c: 0x240800e0  addiu       $t0, $zero, 0xE0
    ctx->pc = 0x259c3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x259c40: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x259c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x259c44: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x259c44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x259c48: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x259c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x259c4c: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x259c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x259c50: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x259c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x259c54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x259c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259c58: 0x9022cea4  lbu         $v0, -0x315C($at)
    ctx->pc = 0x259c58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x81CEA4u));
    // 0x259c5c: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x259c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x259c60: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x259c60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259c64: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x259c64u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259c68: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x259c68u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259c6c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x259c6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259c70: 0xc07467c  jal         func_1D19F0
    ctx->pc = 0x259C70u;
    SET_GPR_U32(ctx, 31, 0x259C78u);
    ctx->pc = 0x259C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259C70u;
    // 0x259c74: 0x2300a  movz        $a2, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19F0u, 0x259C70u, 0x259C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259C78u;
label_259c78:
    // 0x259c78: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x259c78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x259c7c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x259C7Cu;
    {
        const bool branch_taken_0x259c7c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x259C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259C7Cu;
        // 0x259c80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259c7c) {
            ctx->pc = 0x259CA0u;
            goto label_259ca0;
        }
    }
    ctx->pc = 0x259C84u;
    // 0x259c84: 0xc07463c  jal         func_1D18F0
    ctx->pc = 0x259C84u;
    SET_GPR_U32(ctx, 31, 0x259C8Cu);
    ctx->pc = 0x259C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259C84u;
    // 0x259c88: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18F0u, 0x259C84u, 0x259C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259C8Cu;
label_259c8c:
    // 0x259c8c: 0x96060000  lhu         $a2, 0x0($s0)
    ctx->pc = 0x259c8cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x259c90: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x259c90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x259c94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x259c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259c98: 0xc0745fc  jal         func_1D17F0
    ctx->pc = 0x259C98u;
    SET_GPR_U32(ctx, 31, 0x259CA0u);
    ctx->pc = 0x259C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259C98u;
    // 0x259c9c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D17F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D17F0u, 0x259C98u, 0x259CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259CA0u;
label_259ca0:
    // 0x259ca0: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x259ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x259ca4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x259ca4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x259ca8: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x259ca8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x259cac: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x259CACu;
    {
        const bool branch_taken_0x259cac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x259CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259CACu;
        // 0x259cb0: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259cac) {
            ctx->pc = 0x259C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_259c28;
        }
    }
    ctx->pc = 0x259CB4u;
    // 0x259cb4: 0x0  nop
    ctx->pc = 0x259cb4u;
    // NOP
label_259cb8:
    // 0x259cb8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x259cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x259cbc: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x259cbcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x259cc0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x259cc0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x259cc4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x259cc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x259cc8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x259cc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x259ccc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x259cccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x259cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x259CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259CD0u;
        // 0x259cd4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259CD8u;
}
