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

// Function: sub_0035C8A0
// Address: 0x35c8a0 - 0x35ca1c
void sub_0035C8A0_0x35c8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035C8A0_0x35c8a0");
#endif

    switch (ctx->pc) {
        case 0x35c8b8u: goto label_35c8b8;
        case 0x35c8e4u: goto label_35c8e4;
        case 0x35c8f8u: goto label_35c8f8;
        case 0x35c924u: goto label_35c924;
        case 0x35c944u: goto label_35c944;
        case 0x35c984u: goto label_35c984;
        case 0x35c998u: goto label_35c998;
        case 0x35c9c4u: goto label_35c9c4;
        case 0x35c9e4u: goto label_35c9e4;
        default: break;
    }

    ctx->pc = 0x35c8a0u;

    // 0x35c8a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35c8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35c8a4: 0x24040570  addiu       $a0, $zero, 0x570
    ctx->pc = 0x35c8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1392));
    // 0x35c8a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x35c8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x35c8ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35c8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35c8b0: 0xc0d8e98  jal         func_363A60
    ctx->pc = 0x35C8B0u;
    SET_GPR_U32(ctx, 31, 0x35C8B8u);
    ctx->pc = 0x35C8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C8B0u;
    // 0x35c8b4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363A60u, 0x35C8B0u, 0x35C8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C8B8u;
label_35c8b8:
    // 0x35c8b8: 0xaf828bbc  sw          $v0, -0x7444($gp)
    ctx->pc = 0x35c8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937532), GPR_U32(ctx, 2));
    // 0x35c8bc: 0x8f838bbc  lw          $v1, -0x7444($gp)
    ctx->pc = 0x35c8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937532)));
    // 0x35c8c0: 0x10600051  beqz        $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x35C8C0u;
    {
        const bool branch_taken_0x35c8c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C8C0u;
        // 0x35c8c4: 0x3c010081  lui         $at, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c8c0) {
            ctx->pc = 0x35CA08u;
            goto label_35ca08;
        }
    }
    ctx->pc = 0x35C8C8u;
    // 0x35c8c8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x35c8c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35c8cc: 0x8c3195c0  lw          $s1, -0x6A40($at)
    ctx->pc = 0x35c8ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940096)));
    // 0x35c8d0: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x35c8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x35c8d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35c8d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c8d8: 0x8f828bbc  lw          $v0, -0x7444($gp)
    ctx->pc = 0x35c8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937532)));
    // 0x35c8dc: 0xc0d6a60  jal         func_35A980
    ctx->pc = 0x35C8DCu;
    SET_GPR_U32(ctx, 31, 0x35C8E4u);
    ctx->pc = 0x35C8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C8DCu;
    // 0x35c8e0: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A980u, 0x35C8DCu, 0x35C8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C8E4u;
label_35c8e4:
    // 0x35c8e4: 0x96220068  lhu         $v0, 0x68($s1)
    ctx->pc = 0x35c8e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x35c8e8: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x35c8e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x35c8ec: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x35C8ECu;
    {
        const bool branch_taken_0x35c8ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C8ECu;
        // 0x35c8f0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c8ec) {
            ctx->pc = 0x35C960u;
            goto label_35c960;
        }
    }
    ctx->pc = 0x35C8F4u;
    // 0x35c8f4: 0x0  nop
    ctx->pc = 0x35c8f4u;
    // NOP
label_35c8f8:
    // 0x35c8f8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x35c8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x35c8fc: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35C8FCu;
    {
        const bool branch_taken_0x35c8fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x35C900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C8FCu;
        // 0x35c900: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c8fc) {
            ctx->pc = 0x35C910u;
            goto label_35c910;
        }
    }
    ctx->pc = 0x35C904u;
    // 0x35c904: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x35C904u;
    {
        const bool branch_taken_0x35c904 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x35c904) {
            ctx->pc = 0x35C930u;
            goto label_35c930;
        }
    }
    ctx->pc = 0x35C90Cu;
    // 0x35c90c: 0x0  nop
    ctx->pc = 0x35c90cu;
    // NOP
label_35c910:
    // 0x35c910: 0x320600ff  andi        $a2, $s0, 0xFF
    ctx->pc = 0x35c910u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x35c914: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35c914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c918: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35c918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35c91c: 0xc0d6a90  jal         func_35AA40
    ctx->pc = 0x35C91Cu;
    SET_GPR_U32(ctx, 31, 0x35C924u);
    ctx->pc = 0x35C920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C91Cu;
    // 0x35c920: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AA40u, 0x35C91Cu, 0x35C924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C924u;
label_35c924:
    // 0x35c924: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x35C924u;
    {
        const bool branch_taken_0x35c924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35c924) {
            ctx->pc = 0x35C948u;
            goto label_35c948;
        }
    }
    ctx->pc = 0x35C92Cu;
    // 0x35c92c: 0x0  nop
    ctx->pc = 0x35c92cu;
    // NOP
label_35c930:
    // 0x35c930: 0x320600ff  andi        $a2, $s0, 0xFF
    ctx->pc = 0x35c930u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x35c934: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35c934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c938: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35c938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35c93c: 0xc0d6a90  jal         func_35AA40
    ctx->pc = 0x35C93Cu;
    SET_GPR_U32(ctx, 31, 0x35C944u);
    ctx->pc = 0x35C940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C93Cu;
    // 0x35c940: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AA40u, 0x35C93Cu, 0x35C944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C944u;
label_35c944:
    // 0x35c944: 0x0  nop
    ctx->pc = 0x35c944u;
    // NOP
label_35c948:
    // 0x35c948: 0x96220068  lhu         $v0, 0x68($s1)
    ctx->pc = 0x35c948u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x35c94c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x35c94cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x35c950: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x35c950u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x35c954: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x35C954u;
    {
        const bool branch_taken_0x35c954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35c954) {
            ctx->pc = 0x35C8F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35c8f8;
        }
    }
    ctx->pc = 0x35C95Cu;
    // 0x35c95c: 0x0  nop
    ctx->pc = 0x35c95cu;
    // NOP
label_35c960:
    // 0x35c960: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x35c960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x35c964: 0x8c30b870  lw          $s0, -0x4790($at)
    ctx->pc = 0x35c964u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x80B870u));
    // 0x35c968: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x35c968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35c96c: 0x8f828bbc  lw          $v0, -0x7444($gp)
    ctx->pc = 0x35c96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937532)));
    // 0x35c970: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35c970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c974: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x35c974u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x35c978: 0x8f828bbc  lw          $v0, -0x7444($gp)
    ctx->pc = 0x35c978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937532)));
    // 0x35c97c: 0xc0d6a60  jal         func_35A980
    ctx->pc = 0x35C97Cu;
    SET_GPR_U32(ctx, 31, 0x35C984u);
    ctx->pc = 0x35C980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C97Cu;
    // 0x35c980: 0x244502b0  addiu       $a1, $v0, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A980u, 0x35C97Cu, 0x35C984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C984u;
label_35c984:
    // 0x35c984: 0x96030068  lhu         $v1, 0x68($s0)
    ctx->pc = 0x35c984u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x35c988: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x35c988u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x35c98c: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x35C98Cu;
    {
        const bool branch_taken_0x35c98c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C98Cu;
        // 0x35c990: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c98c) {
            ctx->pc = 0x35CA00u;
            goto label_35ca00;
        }
    }
    ctx->pc = 0x35C994u;
    // 0x35c994: 0x0  nop
    ctx->pc = 0x35c994u;
    // NOP
label_35c998:
    // 0x35c998: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x35c998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x35c99c: 0x12220004  beq         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35C99Cu;
    {
        const bool branch_taken_0x35c99c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x35C9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C99Cu;
        // 0x35c9a0: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c99c) {
            ctx->pc = 0x35C9B0u;
            goto label_35c9b0;
        }
    }
    ctx->pc = 0x35C9A4u;
    // 0x35c9a4: 0x1622000a  bne         $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x35C9A4u;
    {
        const bool branch_taken_0x35c9a4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x35c9a4) {
            ctx->pc = 0x35C9D0u;
            goto label_35c9d0;
        }
    }
    ctx->pc = 0x35C9ACu;
    // 0x35c9ac: 0x0  nop
    ctx->pc = 0x35c9acu;
    // NOP
label_35c9b0:
    // 0x35c9b0: 0x322600ff  andi        $a2, $s1, 0xFF
    ctx->pc = 0x35c9b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x35c9b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35c9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c9b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35c9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35c9bc: 0xc0d6a90  jal         func_35AA40
    ctx->pc = 0x35C9BCu;
    SET_GPR_U32(ctx, 31, 0x35C9C4u);
    ctx->pc = 0x35C9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C9BCu;
    // 0x35c9c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AA40u, 0x35C9BCu, 0x35C9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C9C4u;
label_35c9c4:
    // 0x35c9c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x35C9C4u;
    {
        const bool branch_taken_0x35c9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35c9c4) {
            ctx->pc = 0x35C9E8u;
            goto label_35c9e8;
        }
    }
    ctx->pc = 0x35C9CCu;
    // 0x35c9cc: 0x0  nop
    ctx->pc = 0x35c9ccu;
    // NOP
label_35c9d0:
    // 0x35c9d0: 0x322600ff  andi        $a2, $s1, 0xFF
    ctx->pc = 0x35c9d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x35c9d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35c9d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c9d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35c9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35c9dc: 0xc0d6a90  jal         func_35AA40
    ctx->pc = 0x35C9DCu;
    SET_GPR_U32(ctx, 31, 0x35C9E4u);
    ctx->pc = 0x35C9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C9DCu;
    // 0x35c9e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AA40u, 0x35C9DCu, 0x35C9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C9E4u;
label_35c9e4:
    // 0x35c9e4: 0x0  nop
    ctx->pc = 0x35c9e4u;
    // NOP
label_35c9e8:
    // 0x35c9e8: 0x96030068  lhu         $v1, 0x68($s0)
    ctx->pc = 0x35c9e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x35c9ec: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x35c9ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x35c9f0: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x35c9f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x35c9f4: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x35C9F4u;
    {
        const bool branch_taken_0x35c9f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35c9f4) {
            ctx->pc = 0x35C998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35c998;
        }
    }
    ctx->pc = 0x35C9FCu;
    // 0x35c9fc: 0x0  nop
    ctx->pc = 0x35c9fcu;
    // NOP
label_35ca00:
    // 0x35ca00: 0x8f838bbc  lw          $v1, -0x7444($gp)
    ctx->pc = 0x35ca00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937532)));
    // 0x35ca04: 0xa0600550  sb          $zero, 0x550($v1)
    ctx->pc = 0x35ca04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1360), (uint8_t)GPR_U32(ctx, 0));
label_35ca08:
    // 0x35ca08: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x35ca08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35ca0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35ca0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35ca10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35ca10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ca14: 0x3e00008  jr          $ra
    ctx->pc = 0x35CA14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35CA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CA14u;
        // 0x35ca18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35CA14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35CA1Cu;
}
