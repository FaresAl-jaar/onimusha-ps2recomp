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

// Function: sub_002E79B0
// Address: 0x2e79b0 - 0x2e7a90
void sub_002E79B0_0x2e79b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E79B0_0x2e79b0");
#endif

    switch (ctx->pc) {
        case 0x2e7a58u: goto label_2e7a58;
        default: break;
    }

    ctx->pc = 0x2e79b0u;

    // 0x2e79b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e79b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e79b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e79b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e79b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e79b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e79bc: 0x94820152  lhu         $v0, 0x152($a0)
    ctx->pc = 0x2e79bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 338)));
    // 0x2e79c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e79c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e79c4: 0xa4820152  sh          $v0, 0x152($a0)
    ctx->pc = 0x2e79c4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 338), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e79c8: 0x94820152  lhu         $v0, 0x152($a0)
    ctx->pc = 0x2e79c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 338)));
    // 0x2e79cc: 0x284103e8  slti        $at, $v0, 0x3E8
    ctx->pc = 0x2e79ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x2e79d0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E79D0u;
    {
        const bool branch_taken_0x2e79d0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E79D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E79D0u;
        // 0x2e79d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e79d0) {
            ctx->pc = 0x2E79E0u;
            goto label_2e79e0;
        }
    }
    ctx->pc = 0x2E79D8u;
    // 0x2e79d8: 0x240203e7  addiu       $v0, $zero, 0x3E7
    ctx->pc = 0x2e79d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x2e79dc: 0xa6020152  sh          $v0, 0x152($s0)
    ctx->pc = 0x2e79dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 338), (uint16_t)GPR_U32(ctx, 2));
label_2e79e0:
    // 0x2e79e0: 0x96030152  lhu         $v1, 0x152($s0)
    ctx->pc = 0x2e79e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 338)));
    // 0x2e79e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e79e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e79e8: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2E79E8u;
    {
        const bool branch_taken_0x2e79e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E79ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E79E8u;
        // 0x2e79ec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e79e8) {
            ctx->pc = 0x2E7A70u;
            goto label_2e7a70;
        }
    }
    ctx->pc = 0x2E79F0u;
    // 0x2e79f0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E79F0u;
    {
        const bool branch_taken_0x2e79f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e79f0) {
            ctx->pc = 0x2E7A00u;
            goto label_2e7a00;
        }
    }
    ctx->pc = 0x2E79F8u;
    // 0x2e79f8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E79F8u;
    {
        const bool branch_taken_0x2e79f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e79f8) {
            ctx->pc = 0x2E7A28u;
            goto label_2e7a28;
        }
    }
    ctx->pc = 0x2E7A00u;
label_2e7a00:
    // 0x2e7a00: 0x2402ff60  addiu       $v0, $zero, -0xA0
    ctx->pc = 0x2e7a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967136));
    // 0x2e7a04: 0xa602015a  sh          $v0, 0x15A($s0)
    ctx->pc = 0x2e7a04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 346), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e7a08: 0xa2000150  sb          $zero, 0x150($s0)
    ctx->pc = 0x2e7a08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 336), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e7a0c: 0x2402ff80  addiu       $v0, $zero, -0x80
    ctx->pc = 0x2e7a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x2e7a10: 0xa2000151  sb          $zero, 0x151($s0)
    ctx->pc = 0x2e7a10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 337), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e7a14: 0xa202015e  sb          $v0, 0x15E($s0)
    ctx->pc = 0x2e7a14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 350), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e7a18: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2e7a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e7a1c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2e7a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2e7a20: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2e7a20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2e7a24: 0x0  nop
    ctx->pc = 0x2e7a24u;
    // NOP
label_2e7a28:
    // 0x2e7a28: 0x96030152  lhu         $v1, 0x152($s0)
    ctx->pc = 0x2e7a28u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 338)));
    // 0x2e7a2c: 0x96020156  lhu         $v0, 0x156($s0)
    ctx->pc = 0x2e7a2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 342)));
    // 0x2e7a30: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x2e7a30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e7a34: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E7A34u;
    {
        const bool branch_taken_0x2e7a34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7a34) {
            ctx->pc = 0x2E7A40u;
            goto label_2e7a40;
        }
    }
    ctx->pc = 0x2E7A3Cu;
    // 0x2e7a3c: 0xa6030156  sh          $v1, 0x156($s0)
    ctx->pc = 0x2e7a3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 342), (uint16_t)GPR_U32(ctx, 3));
label_2e7a40:
    // 0x2e7a40: 0x96060152  lhu         $a2, 0x152($s0)
    ctx->pc = 0x2e7a40u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 338)));
    // 0x2e7a44: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x2e7a44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x2e7a48: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e7a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e7a4c: 0x24843050  addiu       $a0, $a0, 0x3050
    ctx->pc = 0x2e7a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12368));
    // 0x2e7a50: 0xc0ce1cc  jal         func_338730
    ctx->pc = 0x2E7A50u;
    SET_GPR_U32(ctx, 31, 0x2E7A58u);
    ctx->pc = 0x2E7A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7A50u;
    // 0x2e7a54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338730u, 0x2E7A50u, 0x2E7A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7A58u;
label_2e7a58:
    // 0x2e7a58: 0x96030152  lhu         $v1, 0x152($s0)
    ctx->pc = 0x2e7a58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 338)));
    // 0x2e7a5c: 0x96020158  lhu         $v0, 0x158($s0)
    ctx->pc = 0x2e7a5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x2e7a60: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x2e7a60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e7a64: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E7A64u;
    {
        const bool branch_taken_0x2e7a64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7a64) {
            ctx->pc = 0x2E7A70u;
            goto label_2e7a70;
        }
    }
    ctx->pc = 0x2E7A6Cu;
    // 0x2e7a6c: 0xa6030158  sh          $v1, 0x158($s0)
    ctx->pc = 0x2e7a6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 344), (uint16_t)GPR_U32(ctx, 3));
label_2e7a70:
    // 0x2e7a70: 0x240200b4  addiu       $v0, $zero, 0xB4
    ctx->pc = 0x2e7a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x2e7a74: 0xa6020162  sh          $v0, 0x162($s0)
    ctx->pc = 0x2e7a74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 354), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e7a78: 0xa6020160  sh          $v0, 0x160($s0)
    ctx->pc = 0x2e7a78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 352), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e7a7c: 0x96020152  lhu         $v0, 0x152($s0)
    ctx->pc = 0x2e7a7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 338)));
    // 0x2e7a80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e7a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e7a84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e7a84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e7a88: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7A88u;
        // 0x2e7a8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E7A90u;
}
