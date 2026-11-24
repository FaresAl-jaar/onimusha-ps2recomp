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

// Function: sub_0035DA90
// Address: 0x35da90 - 0x35db6c
void sub_0035DA90_0x35da90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035DA90_0x35da90");
#endif

    switch (ctx->pc) {
        case 0x35dad8u: goto label_35dad8;
        case 0x35dae8u: goto label_35dae8;
        case 0x35db2cu: goto label_35db2c;
        default: break;
    }

    ctx->pc = 0x35da90u;

    // 0x35da90: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x35da90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x35da94: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x35da94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x35da98: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x35da98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x35da9c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x35da9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x35daa0: 0x27b7009f  addiu       $s7, $sp, 0x9F
    ctx->pc = 0x35daa0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 159));
    // 0x35daa4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x35daa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x35daa8: 0x27b6009e  addiu       $s6, $sp, 0x9E
    ctx->pc = 0x35daa8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 158));
    // 0x35daac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x35daacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x35dab0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x35dab0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35dab4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x35dab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x35dab8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x35dab8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35dabc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35dabcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x35dac0: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x35dac0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35dac4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35dac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35dac8: 0x27b20094  addiu       $s2, $sp, 0x94
    ctx->pc = 0x35dac8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x35dacc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35daccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35dad0: 0x27b10098  addiu       $s1, $sp, 0x98
    ctx->pc = 0x35dad0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x35dad4: 0x27b0009c  addiu       $s0, $sp, 0x9C
    ctx->pc = 0x35dad4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_35dad8:
    // 0x35dad8: 0x8e652f50  lw          $a1, 0x2F50($s3)
    ctx->pc = 0x35dad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12112)));
    // 0x35dadc: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x35dadcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x35dae0: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x35DAE0u;
    SET_GPR_U32(ctx, 31, 0x35DAE8u);
    ctx->pc = 0x35DAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DAE0u;
    // 0x35dae4: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x35DAE0u, 0x35DAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DAE8u;
label_35dae8:
    // 0x35dae8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x35dae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35daec: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x35DAECu;
    {
        const bool branch_taken_0x35daec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x35daec) {
            ctx->pc = 0x35DB30u;
            goto label_35db30;
        }
    }
    ctx->pc = 0x35DAF4u;
    // 0x35daf4: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x35daf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x35daf8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x35daf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x35dafc: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x35dafcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x35db00: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x35db00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x35db04: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x35db04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x35db08: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x35db08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x35db0c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x35db0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x35db10: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x35db10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35db14: 0xa6000000  sh          $zero, 0x0($s0)
    ctx->pc = 0x35db14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x35db18: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x35db18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x35db1c: 0xa2c50000  sb          $a1, 0x0($s6)
    ctx->pc = 0x35db1cu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x35db20: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x35db20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35db24: 0xc09fcf4  jal         func_27F3D0
    ctx->pc = 0x35DB24u;
    SET_GPR_U32(ctx, 31, 0x35DB2Cu);
    ctx->pc = 0x35DB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DB24u;
    // 0x35db28: 0xa2e20000  sb          $v0, 0x0($s7) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F3D0u, 0x35DB24u, 0x35DB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DB2Cu;
label_35db2c:
    // 0x35db2c: 0x0  nop
    ctx->pc = 0x35db2cu;
    // NOP
label_35db30:
    // 0x35db30: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x35db30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x35db34: 0x2a830004  slti        $v1, $s4, 0x4
    ctx->pc = 0x35db34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x35db38: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x35DB38u;
    {
        const bool branch_taken_0x35db38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35DB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DB38u;
        // 0x35db3c: 0x26730050  addiu       $s3, $s3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35db38) {
            ctx->pc = 0x35DAD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35dad8;
        }
    }
    ctx->pc = 0x35DB40u;
    // 0x35db40: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x35db40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x35db44: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x35db44u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x35db48: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x35db48u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x35db4c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x35db4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x35db50: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x35db50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35db54: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x35db54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35db58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35db58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35db5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35db5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35db60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35db60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35db64: 0x3e00008  jr          $ra
    ctx->pc = 0x35DB64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35DB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DB64u;
        // 0x35db68: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35DB64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35DB6Cu;
}
