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

// Function: sub_0035B5E0
// Address: 0x35b5e0 - 0x35b75c
void sub_0035B5E0_0x35b5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035B5E0_0x35b5e0");
#endif

    switch (ctx->pc) {
        case 0x35b5f8u: goto label_35b5f8;
        case 0x35b624u: goto label_35b624;
        case 0x35b638u: goto label_35b638;
        case 0x35b64cu: goto label_35b64c;
        case 0x35b684u: goto label_35b684;
        case 0x35b698u: goto label_35b698;
        case 0x35b6b4u: goto label_35b6b4;
        case 0x35b70cu: goto label_35b70c;
        case 0x35b728u: goto label_35b728;
        default: break;
    }

    ctx->pc = 0x35b5e0u;

    // 0x35b5e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x35b5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x35b5e4: 0x240403b0  addiu       $a0, $zero, 0x3B0
    ctx->pc = 0x35b5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 944));
    // 0x35b5e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x35b5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x35b5ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35b5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35b5f0: 0xc0d8e98  jal         func_363A60
    ctx->pc = 0x35B5F0u;
    SET_GPR_U32(ctx, 31, 0x35B5F8u);
    ctx->pc = 0x35B5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B5F0u;
    // 0x35b5f4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363A60u, 0x35B5F0u, 0x35B5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B5F8u;
label_35b5f8:
    // 0x35b5f8: 0xaf828bb8  sw          $v0, -0x7448($gp)
    ctx->pc = 0x35b5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937528), GPR_U32(ctx, 2));
    // 0x35b5fc: 0x8f838bb8  lw          $v1, -0x7448($gp)
    ctx->pc = 0x35b5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35b600: 0x10600051  beqz        $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x35B600u;
    {
        const bool branch_taken_0x35b600 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B600u;
        // 0x35b604: 0x3c010081  lui         $at, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b600) {
            ctx->pc = 0x35B748u;
            goto label_35b748;
        }
    }
    ctx->pc = 0x35B608u;
    // 0x35b608: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x35b608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35b60c: 0x8c3095c0  lw          $s0, -0x6A40($at)
    ctx->pc = 0x35b60cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940096)));
    // 0x35b610: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x35b610u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x35b614: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35b614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b618: 0x8f828bb8  lw          $v0, -0x7448($gp)
    ctx->pc = 0x35b618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35b61c: 0xc0d6a60  jal         func_35A980
    ctx->pc = 0x35B61Cu;
    SET_GPR_U32(ctx, 31, 0x35B624u);
    ctx->pc = 0x35B620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B61Cu;
    // 0x35b620: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A980u, 0x35B61Cu, 0x35B624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B624u;
label_35b624:
    // 0x35b624: 0x96020068  lhu         $v0, 0x68($s0)
    ctx->pc = 0x35b624u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x35b628: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x35b628u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x35b62c: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x35B62Cu;
    {
        const bool branch_taken_0x35b62c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B62Cu;
        // 0x35b630: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b62c) {
            ctx->pc = 0x35B660u;
            goto label_35b660;
        }
    }
    ctx->pc = 0x35B634u;
    // 0x35b634: 0x0  nop
    ctx->pc = 0x35b634u;
    // NOP
label_35b638:
    // 0x35b638: 0x322600ff  andi        $a2, $s1, 0xFF
    ctx->pc = 0x35b638u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x35b63c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35b63cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b640: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35b640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b644: 0xc0d6a90  jal         func_35AA40
    ctx->pc = 0x35B644u;
    SET_GPR_U32(ctx, 31, 0x35B64Cu);
    ctx->pc = 0x35B648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B644u;
    // 0x35b648: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AA40u, 0x35B644u, 0x35B64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B64Cu;
label_35b64c:
    // 0x35b64c: 0x96020068  lhu         $v0, 0x68($s0)
    ctx->pc = 0x35b64cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x35b650: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x35b650u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x35b654: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x35b654u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x35b658: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x35B658u;
    {
        const bool branch_taken_0x35b658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35b658) {
            ctx->pc = 0x35B638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35b638;
        }
    }
    ctx->pc = 0x35B660u;
label_35b660:
    // 0x35b660: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x35b660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x35b664: 0x8c30b870  lw          $s0, -0x4790($at)
    ctx->pc = 0x35b664u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x80B870u));
    // 0x35b668: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x35b668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35b66c: 0x8f828bb8  lw          $v0, -0x7448($gp)
    ctx->pc = 0x35b66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35b670: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35b670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b674: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x35b674u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x35b678: 0x8f828bb8  lw          $v0, -0x7448($gp)
    ctx->pc = 0x35b678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35b67c: 0xc0d6a60  jal         func_35A980
    ctx->pc = 0x35B67Cu;
    SET_GPR_U32(ctx, 31, 0x35B684u);
    ctx->pc = 0x35B680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B67Cu;
    // 0x35b680: 0x244501d0  addiu       $a1, $v0, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A980u, 0x35B67Cu, 0x35B684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B684u;
label_35b684:
    // 0x35b684: 0x96020068  lhu         $v0, 0x68($s0)
    ctx->pc = 0x35b684u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x35b688: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x35b688u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x35b68c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x35B68Cu;
    {
        const bool branch_taken_0x35b68c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B68Cu;
        // 0x35b690: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b68c) {
            ctx->pc = 0x35B6D0u;
            goto label_35b6d0;
        }
    }
    ctx->pc = 0x35B694u;
    // 0x35b694: 0x0  nop
    ctx->pc = 0x35b694u;
    // NOP
label_35b698:
    // 0x35b698: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x35b698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x35b69c: 0x12220006  beq         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35B69Cu;
    {
        const bool branch_taken_0x35b69c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x35B6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B69Cu;
        // 0x35b6a0: 0x322600ff  andi        $a2, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b69c) {
            ctx->pc = 0x35B6B8u;
            goto label_35b6b8;
        }
    }
    ctx->pc = 0x35B6A4u;
    // 0x35b6a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35b6a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b6a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35b6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b6ac: 0xc0d6a90  jal         func_35AA40
    ctx->pc = 0x35B6ACu;
    SET_GPR_U32(ctx, 31, 0x35B6B4u);
    ctx->pc = 0x35B6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B6ACu;
    // 0x35b6b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AA40u, 0x35B6ACu, 0x35B6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B6B4u;
label_35b6b4:
    // 0x35b6b4: 0x0  nop
    ctx->pc = 0x35b6b4u;
    // NOP
label_35b6b8:
    // 0x35b6b8: 0x96020068  lhu         $v0, 0x68($s0)
    ctx->pc = 0x35b6b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x35b6bc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x35b6bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x35b6c0: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x35b6c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x35b6c4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x35B6C4u;
    {
        const bool branch_taken_0x35b6c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35b6c4) {
            ctx->pc = 0x35B698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35b698;
        }
    }
    ctx->pc = 0x35B6CCu;
    // 0x35b6cc: 0x0  nop
    ctx->pc = 0x35b6ccu;
    // NOP
label_35b6d0:
    // 0x35b6d0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x35b6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x35b6d4: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x35b6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
    // 0x35b6d8: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x35b6d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35b6dc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x35b6dcu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x658650u));
    // 0x35b6e0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x35b6e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x35b6e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x35b6e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b6e8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x35b6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x35b6ec: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x35b6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x35b6f0: 0x24428660  addiu       $v0, $v0, -0x79A0
    ctx->pc = 0x35b6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936160));
    // 0x35b6f4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x35b6f4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x658660u));
    // 0x35b6f8: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x35b6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x35b6fc: 0x8f828bb8  lw          $v0, -0x7448($gp)
    ctx->pc = 0x35b6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35b700: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x35b700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35b704: 0xc0d6bf0  jal         func_35AFC0
    ctx->pc = 0x35B704u;
    SET_GPR_U32(ctx, 31, 0x35B70Cu);
    ctx->pc = 0x35B708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B704u;
    // 0x35b708: 0x244500f0  addiu       $a1, $v0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AFC0u, 0x35B704u, 0x35B70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B70Cu;
label_35b70c:
    // 0x35b70c: 0x8f828bb8  lw          $v0, -0x7448($gp)
    ctx->pc = 0x35b70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35b710: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x35b710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x35b714: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x35b714u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35b718: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x35b718u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b71c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x35b71cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x35b720: 0xc0d6bf0  jal         func_35AFC0
    ctx->pc = 0x35B720u;
    SET_GPR_U32(ctx, 31, 0x35B728u);
    ctx->pc = 0x35B724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B720u;
    // 0x35b724: 0x244502b0  addiu       $a1, $v0, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AFC0u, 0x35B720u, 0x35B728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B728u;
label_35b728:
    // 0x35b728: 0x8f838bb8  lw          $v1, -0x7448($gp)
    ctx->pc = 0x35b728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35b72c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x35b72cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b730: 0xa0600390  sb          $zero, 0x390($v1)
    ctx->pc = 0x35b730u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 912), (uint8_t)GPR_U32(ctx, 0));
    // 0x35b734: 0x8f838bb8  lw          $v1, -0x7448($gp)
    ctx->pc = 0x35b734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35b738: 0xa46003a0  sh          $zero, 0x3A0($v1)
    ctx->pc = 0x35b738u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 928), (uint16_t)GPR_U32(ctx, 0));
    // 0x35b73c: 0x8f838bb8  lw          $v1, -0x7448($gp)
    ctx->pc = 0x35b73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35b740: 0xa06403a2  sb          $a0, 0x3A2($v1)
    ctx->pc = 0x35b740u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 930), (uint8_t)GPR_U32(ctx, 4));
    // 0x35b744: 0x0  nop
    ctx->pc = 0x35b744u;
    // NOP
label_35b748:
    // 0x35b748: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x35b748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35b74c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35b74cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35b750: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35b750u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b754: 0x3e00008  jr          $ra
    ctx->pc = 0x35B754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B754u;
        // 0x35b758: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B75Cu;
}
