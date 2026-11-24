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

// Function: sub_00374F90
// Address: 0x374f90 - 0x375020
void sub_00374F90_0x374f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00374F90_0x374f90");
#endif

    switch (ctx->pc) {
        case 0x374fa4u: goto label_374fa4;
        default: break;
    }

    ctx->pc = 0x374f90u;

    // 0x374f90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x374f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x374f94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x374f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x374f98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x374f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x374f9c: 0xc0a60b8  jal         func_2982E0
    ctx->pc = 0x374F9Cu;
    SET_GPR_U32(ctx, 31, 0x374FA4u);
    ctx->pc = 0x374FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374F9Cu;
    // 0x374fa0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2982E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2982E0u, 0x374F9Cu, 0x374FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374FA4u;
label_374fa4:
    // 0x374fa4: 0x92030218  lbu         $v1, 0x218($s0)
    ctx->pc = 0x374fa4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 536)));
    // 0x374fa8: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x374FA8u;
    {
        const bool branch_taken_0x374fa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x374fa8) {
            ctx->pc = 0x375010u;
            goto label_375010;
        }
    }
    ctx->pc = 0x374FB0u;
    // 0x374fb0: 0x92032b60  lbu         $v1, 0x2B60($s0)
    ctx->pc = 0x374fb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11104)));
    // 0x374fb4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x374FB4u;
    {
        const bool branch_taken_0x374fb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x374fb4) {
            ctx->pc = 0x374FC8u;
            goto label_374fc8;
        }
    }
    ctx->pc = 0x374FBCu;
    // 0x374fbc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x374FBCu;
    {
        const bool branch_taken_0x374fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374FBCu;
        // 0x374fc0: 0xa2002b61  sb          $zero, 0x2B61($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11105), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374fbc) {
            ctx->pc = 0x375010u;
            goto label_375010;
        }
    }
    ctx->pc = 0x374FC4u;
    // 0x374fc4: 0x0  nop
    ctx->pc = 0x374fc4u;
    // NOP
label_374fc8:
    // 0x374fc8: 0x8e0329c0  lw          $v1, 0x29C0($s0)
    ctx->pc = 0x374fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x374fcc: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x374fccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x374fd0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x374FD0u;
    {
        const bool branch_taken_0x374fd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x374FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374FD0u;
        // 0x374fd4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374fd0) {
            ctx->pc = 0x374FE8u;
            goto label_374fe8;
        }
    }
    ctx->pc = 0x374FD8u;
    // 0x374fd8: 0x24030094  addiu       $v1, $zero, 0x94
    ctx->pc = 0x374fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    // 0x374fdc: 0xa2042b61  sb          $a0, 0x2B61($s0)
    ctx->pc = 0x374fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11105), (uint8_t)GPR_U32(ctx, 4));
    // 0x374fe0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x374FE0u;
    {
        const bool branch_taken_0x374fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374FE0u;
        // 0x374fe4: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374fe0) {
            ctx->pc = 0x375010u;
            goto label_375010;
        }
    }
    ctx->pc = 0x374FE8u;
label_374fe8:
    // 0x374fe8: 0x9603022a  lhu         $v1, 0x22A($s0)
    ctx->pc = 0x374fe8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 554)));
    // 0x374fec: 0x286100c8  slti        $at, $v1, 0xC8
    ctx->pc = 0x374fecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)200) ? 1 : 0);
    // 0x374ff0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x374FF0u;
    {
        const bool branch_taken_0x374ff0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x374FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374FF0u;
        // 0x374ff4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374ff0) {
            ctx->pc = 0x375000u;
            goto label_375000;
        }
    }
    ctx->pc = 0x374FF8u;
    // 0x374ff8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x374FF8u;
    {
        const bool branch_taken_0x374ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374FF8u;
        // 0x374ffc: 0xa2032b61  sb          $v1, 0x2B61($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11105), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374ff8) {
            ctx->pc = 0x375010u;
            goto label_375010;
        }
    }
    ctx->pc = 0x375000u;
label_375000:
    // 0x375000: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x375000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x375004: 0xa2032b61  sb          $v1, 0x2B61($s0)
    ctx->pc = 0x375004u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11105), (uint8_t)GPR_U32(ctx, 3));
    // 0x375008: 0xa600022a  sh          $zero, 0x22A($s0)
    ctx->pc = 0x375008u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 554), (uint16_t)GPR_U32(ctx, 0));
    // 0x37500c: 0x0  nop
    ctx->pc = 0x37500cu;
    // NOP
label_375010:
    // 0x375010: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x375010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x375014: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x375014u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x375018: 0x3e00008  jr          $ra
    ctx->pc = 0x375018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37501Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375018u;
        // 0x37501c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375020u;
}
