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

// Function: sub_002D2A60
// Address: 0x2d2a60 - 0x2d2b9c
void sub_002D2A60_0x2d2a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2A60_0x2d2a60");
#endif

    switch (ctx->pc) {
        case 0x2d2a78u: goto label_2d2a78;
        case 0x2d2ad8u: goto label_2d2ad8;
        default: break;
    }

    ctx->pc = 0x2d2a60u;

    // 0x2d2a60: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2d2a60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2a64: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2d2a64u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2a68: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2d2a68u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2a6c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x2d2a6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2a70: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2d2a70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2a74: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2d2a74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2d2a78:
    // 0x2d2a78: 0x95450084  lhu         $a1, 0x84($t2)
    ctx->pc = 0x2d2a78u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 132)));
    // 0x2d2a7c: 0x9547007c  lhu         $a3, 0x7C($t2)
    ctx->pc = 0x2d2a7cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 124)));
    // 0x2d2a80: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x2d2a80u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
    // 0x2d2a84: 0xe5082a  slt         $at, $a3, $a1
    ctx->pc = 0x2d2a84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2d2a88: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D2A88u;
    {
        const bool branch_taken_0x2d2a88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2A88u;
        // 0x2d2a8c: 0x1682804  sllv        $a1, $t0, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 11) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2a88) {
            ctx->pc = 0x2D2A98u;
            goto label_2d2a98;
        }
    }
    ctx->pc = 0x2D2A90u;
    // 0x2d2a90: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2d2a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2d2a94: 0x0  nop
    ctx->pc = 0x2d2a94u;
    // NOP
label_2d2a98:
    // 0x2d2a98: 0x8d47008c  lw          $a3, 0x8C($t2)
    ctx->pc = 0x2d2a98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 140)));
    // 0x2d2a9c: 0x8d2500ac  lw          $a1, 0xAC($t1)
    ctx->pc = 0x2d2a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 172)));
    // 0x2d2aa0: 0xe5082a  slt         $at, $a3, $a1
    ctx->pc = 0x2d2aa0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2d2aa4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D2AA4u;
    {
        const bool branch_taken_0x2d2aa4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2AA4u;
        // 0x2d2aa8: 0x1662804  sllv        $a1, $a2, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 11) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2aa4) {
            ctx->pc = 0x2D2AB0u;
            goto label_2d2ab0;
        }
    }
    ctx->pc = 0x2D2AACu;
    // 0x2d2aac: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2d2aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_2d2ab0:
    // 0x2d2ab0: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x2d2ab0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x2d2ab4: 0x2d650002  sltiu       $a1, $t3, 0x2
    ctx->pc = 0x2d2ab4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2d2ab8: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x2d2ab8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x2d2abc: 0x14a0ffee  bnez        $a1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2D2ABCu;
    {
        const bool branch_taken_0x2d2abc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2ABCu;
        // 0x2d2ac0: 0x2529000c  addiu       $t1, $t1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2abc) {
            ctx->pc = 0x2D2A78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d2a78;
        }
    }
    ctx->pc = 0x2D2AC4u;
    // 0x2d2ac4: 0x908900d6  lbu         $t1, 0xD6($a0)
    ctx->pc = 0x2d2ac4u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 214)));
    // 0x2d2ac8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2d2ac8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2acc: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2d2accu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2ad0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2d2ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d2ad4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2d2ad4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d2ad8:
    // 0x2d2ad8: 0x15200007  bnez        $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D2AD8u;
    {
        const bool branch_taken_0x2d2ad8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2ad8) {
            ctx->pc = 0x2D2AF8u;
            goto label_2d2af8;
        }
    }
    ctx->pc = 0x2D2AE0u;
    // 0x2d2ae0: 0x8c87008c  lw          $a3, 0x8C($a0)
    ctx->pc = 0x2d2ae0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x2d2ae4: 0x8d4500ac  lw          $a1, 0xAC($t2)
    ctx->pc = 0x2d2ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 172)));
    // 0x2d2ae8: 0xa7082a  slt         $at, $a1, $a3
    ctx->pc = 0x2d2ae8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2d2aec: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x2D2AECu;
    {
        const bool branch_taken_0x2d2aec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2aec) {
            ctx->pc = 0x2D2B28u;
            goto label_2d2b28;
        }
    }
    ctx->pc = 0x2D2AF4u;
    // 0x2d2af4: 0x0  nop
    ctx->pc = 0x2d2af4u;
    // NOP
label_2d2af8:
    // 0x2d2af8: 0x1528000d  bne         $t1, $t0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D2AF8u;
    {
        const bool branch_taken_0x2d2af8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 8));
        if (branch_taken_0x2d2af8) {
            ctx->pc = 0x2D2B30u;
            goto label_2d2b30;
        }
    }
    ctx->pc = 0x2D2B00u;
    // 0x2d2b00: 0x8c87008c  lw          $a3, 0x8C($a0)
    ctx->pc = 0x2d2b00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x2d2b04: 0x8d4500ac  lw          $a1, 0xAC($t2)
    ctx->pc = 0x2d2b04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 172)));
    // 0x2d2b08: 0xa7082a  slt         $at, $a1, $a3
    ctx->pc = 0x2d2b08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2d2b0c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D2B0Cu;
    {
        const bool branch_taken_0x2d2b0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2b0c) {
            ctx->pc = 0x2D2B30u;
            goto label_2d2b30;
        }
    }
    ctx->pc = 0x2D2B14u;
    // 0x2d2b14: 0x8c870090  lw          $a3, 0x90($a0)
    ctx->pc = 0x2d2b14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x2d2b18: 0x8d4500b8  lw          $a1, 0xB8($t2)
    ctx->pc = 0x2d2b18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 184)));
    // 0x2d2b1c: 0xa7082a  slt         $at, $a1, $a3
    ctx->pc = 0x2d2b1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2d2b20: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D2B20u;
    {
        const bool branch_taken_0x2d2b20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2b20) {
            ctx->pc = 0x2D2B30u;
            goto label_2d2b30;
        }
    }
    ctx->pc = 0x2D2B28u;
label_2d2b28:
    // 0x2d2b28: 0x1662804  sllv        $a1, $a2, $t3
    ctx->pc = 0x2d2b28u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 11) & 0x1F));
    // 0x2d2b2c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2d2b2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_2d2b30:
    // 0x2d2b30: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x2d2b30u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x2d2b34: 0x2d650003  sltiu       $a1, $t3, 0x3
    ctx->pc = 0x2d2b34u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2d2b38: 0x14a0ffe7  bnez        $a1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x2D2B38u;
    {
        const bool branch_taken_0x2d2b38 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2B38u;
        // 0x2d2b3c: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2b38) {
            ctx->pc = 0x2D2AD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d2ad8;
        }
    }
    ctx->pc = 0x2D2B40u;
    // 0x2d2b40: 0x8c85009c  lw          $a1, 0x9C($a0)
    ctx->pc = 0x2d2b40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x2d2b44: 0x28a50500  slti        $a1, $a1, 0x500
    ctx->pc = 0x2d2b44u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1280) ? 1 : 0);
    // 0x2d2b48: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D2B48u;
    {
        const bool branch_taken_0x2d2b48 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2b48) {
            ctx->pc = 0x2D2B58u;
            goto label_2d2b58;
        }
    }
    ctx->pc = 0x2D2B50u;
    // 0x2d2b50: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x2d2b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x2d2b54: 0x0  nop
    ctx->pc = 0x2d2b54u;
    // NOP
label_2d2b58:
    // 0x2d2b58: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D2B58u;
    {
        const bool branch_taken_0x2d2b58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2b58) {
            ctx->pc = 0x2D2B78u;
            goto label_2d2b78;
        }
    }
    ctx->pc = 0x2D2B60u;
    // 0x2d2b60: 0x8c850054  lw          $a1, 0x54($a0)
    ctx->pc = 0x2d2b60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x2d2b64: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D2B64u;
    {
        const bool branch_taken_0x2d2b64 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2b64) {
            ctx->pc = 0x2D2B78u;
            goto label_2d2b78;
        }
    }
    ctx->pc = 0x2D2B6Cu;
    // 0x2d2b6c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2D2B6Cu;
    {
        const bool branch_taken_0x2d2b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2B6Cu;
        // 0x2d2b70: 0xac800050  sw          $zero, 0x50($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2b6c) {
            ctx->pc = 0x2D2B88u;
            goto label_2d2b88;
        }
    }
    ctx->pc = 0x2D2B74u;
    // 0x2d2b74: 0x0  nop
    ctx->pc = 0x2d2b74u;
    // NOP
label_2d2b78:
    // 0x2d2b78: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x2d2b78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x2d2b7c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2d2b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2d2b80: 0xac850050  sw          $a1, 0x50($a0)
    ctx->pc = 0x2d2b80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 5));
    // 0x2d2b84: 0x0  nop
    ctx->pc = 0x2d2b84u;
    // NOP
label_2d2b88:
    // 0x2d2b88: 0x8c850058  lw          $a1, 0x58($a0)
    ctx->pc = 0x2d2b88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x2d2b8c: 0xa02827  not         $a1, $a1
    ctx->pc = 0x2d2b8cu;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 5) | GPR_U64(ctx, 0)));
    // 0x2d2b90: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x2d2b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x2d2b94: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2B94u;
        // 0x2d2b98: 0xac830054  sw          $v1, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2B94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2B9Cu;
}
