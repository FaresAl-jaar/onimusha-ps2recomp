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

// Function: sub_003B1BD0
// Address: 0x3b1bd0 - 0x3b1d68
void sub_003B1BD0_0x3b1bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B1BD0_0x3b1bd0");
#endif

    switch (ctx->pc) {
        case 0x3b1c20u: goto label_3b1c20;
        case 0x3b1c58u: goto label_3b1c58;
        case 0x3b1c90u: goto label_3b1c90;
        case 0x3b1cd0u: goto label_3b1cd0;
        case 0x3b1d08u: goto label_3b1d08;
        case 0x3b1d40u: goto label_3b1d40;
        default: break;
    }

    ctx->pc = 0x3b1bd0u;

    // 0x3b1bd0: 0x10800039  beqz        $a0, . + 4 + (0x39 << 2)
    ctx->pc = 0x3B1BD0u;
    {
        const bool branch_taken_0x3b1bd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1BD0u;
        // 0x3b1bd4: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1bd0) {
            ctx->pc = 0x3B1CB8u;
            goto label_3b1cb8;
        }
    }
    ctx->pc = 0x3B1BD8u;
    // 0x3b1bd8: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x3b1bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x3b1bdc: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x3b1bdcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
    // 0x3b1be0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3b1be0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3b1be4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3b1be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3b1be8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3b1be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3b1bec: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B1BECu;
    {
        const bool branch_taken_0x3b1bec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b1bec) {
            ctx->pc = 0x3B1C08u;
            goto label_3b1c08;
        }
    }
    ctx->pc = 0x3B1BF4u;
    // 0x3b1bf4: 0x90830162  lbu         $v1, 0x162($a0)
    ctx->pc = 0x3b1bf4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 354)));
    // 0x3b1bf8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B1BF8u;
    {
        const bool branch_taken_0x3b1bf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1BF8u;
        // 0x3b1bfc: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1bf8) {
            ctx->pc = 0x3B1C08u;
            goto label_3b1c08;
        }
    }
    ctx->pc = 0x3B1C00u;
    // 0x3b1c00: 0xa0830162  sb          $v1, 0x162($a0)
    ctx->pc = 0x3b1c00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 354), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b1c04: 0x0  nop
    ctx->pc = 0x3b1c04u;
    // NOP
label_3b1c08:
    // 0x3b1c08: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x3b1c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x3b1c0c: 0x8c25f680  lw          $a1, -0x980($at)
    ctx->pc = 0x3b1c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x8BF680u));
    // 0x3b1c10: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3b1c10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3b1c14: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3B1C14u;
    {
        const bool branch_taken_0x3b1c14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1C14u;
        // 0x3b1c18: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1c14) {
            ctx->pc = 0x3B1C40u;
            goto label_3b1c40;
        }
    }
    ctx->pc = 0x3B1C1Cu;
    // 0x3b1c1c: 0x0  nop
    ctx->pc = 0x3b1c1cu;
    // NOP
label_3b1c20:
    // 0x3b1c20: 0x90a30162  lbu         $v1, 0x162($a1)
    ctx->pc = 0x3b1c20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 354)));
    // 0x3b1c24: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B1C24u;
    {
        const bool branch_taken_0x3b1c24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b1c24) {
            ctx->pc = 0x3B1C30u;
            goto label_3b1c30;
        }
    }
    ctx->pc = 0x3B1C2Cu;
    // 0x3b1c2c: 0xa0a40162  sb          $a0, 0x162($a1)
    ctx->pc = 0x3b1c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 354), (uint8_t)GPR_U32(ctx, 4));
label_3b1c30:
    // 0x3b1c30: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x3b1c30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3b1c34: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3b1c34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3b1c38: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3B1C38u;
    {
        const bool branch_taken_0x3b1c38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b1c38) {
            ctx->pc = 0x3B1C20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b1c20;
        }
    }
    ctx->pc = 0x3B1C40u;
label_3b1c40:
    // 0x3b1c40: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3b1c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3b1c44: 0x8c252410  lw          $a1, 0x2410($at)
    ctx->pc = 0x3b1c44u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x8D2410u));
    // 0x3b1c48: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3b1c48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3b1c4c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3B1C4Cu;
    {
        const bool branch_taken_0x3b1c4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1C4Cu;
        // 0x3b1c50: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1c4c) {
            ctx->pc = 0x3B1C78u;
            goto label_3b1c78;
        }
    }
    ctx->pc = 0x3B1C54u;
    // 0x3b1c54: 0x0  nop
    ctx->pc = 0x3b1c54u;
    // NOP
label_3b1c58:
    // 0x3b1c58: 0x90a30162  lbu         $v1, 0x162($a1)
    ctx->pc = 0x3b1c58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 354)));
    // 0x3b1c5c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B1C5Cu;
    {
        const bool branch_taken_0x3b1c5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b1c5c) {
            ctx->pc = 0x3B1C68u;
            goto label_3b1c68;
        }
    }
    ctx->pc = 0x3B1C64u;
    // 0x3b1c64: 0xa0a40162  sb          $a0, 0x162($a1)
    ctx->pc = 0x3b1c64u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 354), (uint8_t)GPR_U32(ctx, 4));
label_3b1c68:
    // 0x3b1c68: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x3b1c68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3b1c6c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3b1c6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3b1c70: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3B1C70u;
    {
        const bool branch_taken_0x3b1c70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b1c70) {
            ctx->pc = 0x3B1C58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b1c58;
        }
    }
    ctx->pc = 0x3B1C78u;
label_3b1c78:
    // 0x3b1c78: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x3b1c78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x3b1c7c: 0x8c252f90  lw          $a1, 0x2F90($at)
    ctx->pc = 0x3b1c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x912F90u));
    // 0x3b1c80: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3b1c80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3b1c84: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x3B1C84u;
    {
        const bool branch_taken_0x3b1c84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1C84u;
        // 0x3b1c88: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1c84) {
            ctx->pc = 0x3B1D60u;
            goto label_3b1d60;
        }
    }
    ctx->pc = 0x3B1C8Cu;
    // 0x3b1c8c: 0x0  nop
    ctx->pc = 0x3b1c8cu;
    // NOP
label_3b1c90:
    // 0x3b1c90: 0x90a30162  lbu         $v1, 0x162($a1)
    ctx->pc = 0x3b1c90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 354)));
    // 0x3b1c94: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B1C94u;
    {
        const bool branch_taken_0x3b1c94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b1c94) {
            ctx->pc = 0x3B1CA0u;
            goto label_3b1ca0;
        }
    }
    ctx->pc = 0x3B1C9Cu;
    // 0x3b1c9c: 0xa0a40162  sb          $a0, 0x162($a1)
    ctx->pc = 0x3b1c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 354), (uint8_t)GPR_U32(ctx, 4));
label_3b1ca0:
    // 0x3b1ca0: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x3b1ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3b1ca4: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3b1ca4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3b1ca8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3B1CA8u;
    {
        const bool branch_taken_0x3b1ca8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b1ca8) {
            ctx->pc = 0x3B1C90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b1c90;
        }
    }
    ctx->pc = 0x3B1CB0u;
    // 0x3b1cb0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x3B1CB0u;
    {
        const bool branch_taken_0x3b1cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b1cb0) {
            ctx->pc = 0x3B1D60u;
            goto label_3b1d60;
        }
    }
    ctx->pc = 0x3B1CB8u;
label_3b1cb8:
    // 0x3b1cb8: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x3b1cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x3b1cbc: 0x8c25f680  lw          $a1, -0x980($at)
    ctx->pc = 0x3b1cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x8BF680u));
    // 0x3b1cc0: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3b1cc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3b1cc4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3B1CC4u;
    {
        const bool branch_taken_0x3b1cc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1CC4u;
        // 0x3b1cc8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1cc4) {
            ctx->pc = 0x3B1CF0u;
            goto label_3b1cf0;
        }
    }
    ctx->pc = 0x3B1CCCu;
    // 0x3b1ccc: 0x0  nop
    ctx->pc = 0x3b1cccu;
    // NOP
label_3b1cd0:
    // 0x3b1cd0: 0x90a30162  lbu         $v1, 0x162($a1)
    ctx->pc = 0x3b1cd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 354)));
    // 0x3b1cd4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B1CD4u;
    {
        const bool branch_taken_0x3b1cd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b1cd4) {
            ctx->pc = 0x3B1CE0u;
            goto label_3b1ce0;
        }
    }
    ctx->pc = 0x3B1CDCu;
    // 0x3b1cdc: 0xa0a40162  sb          $a0, 0x162($a1)
    ctx->pc = 0x3b1cdcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 354), (uint8_t)GPR_U32(ctx, 4));
label_3b1ce0:
    // 0x3b1ce0: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x3b1ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3b1ce4: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3b1ce4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3b1ce8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3B1CE8u;
    {
        const bool branch_taken_0x3b1ce8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b1ce8) {
            ctx->pc = 0x3B1CD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b1cd0;
        }
    }
    ctx->pc = 0x3B1CF0u;
label_3b1cf0:
    // 0x3b1cf0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3b1cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3b1cf4: 0x8c252410  lw          $a1, 0x2410($at)
    ctx->pc = 0x3b1cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x8D2410u));
    // 0x3b1cf8: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3b1cf8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3b1cfc: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3B1CFCu;
    {
        const bool branch_taken_0x3b1cfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1CFCu;
        // 0x3b1d00: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1cfc) {
            ctx->pc = 0x3B1D28u;
            goto label_3b1d28;
        }
    }
    ctx->pc = 0x3B1D04u;
    // 0x3b1d04: 0x0  nop
    ctx->pc = 0x3b1d04u;
    // NOP
label_3b1d08:
    // 0x3b1d08: 0x90a30162  lbu         $v1, 0x162($a1)
    ctx->pc = 0x3b1d08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 354)));
    // 0x3b1d0c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B1D0Cu;
    {
        const bool branch_taken_0x3b1d0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b1d0c) {
            ctx->pc = 0x3B1D18u;
            goto label_3b1d18;
        }
    }
    ctx->pc = 0x3B1D14u;
    // 0x3b1d14: 0xa0a40162  sb          $a0, 0x162($a1)
    ctx->pc = 0x3b1d14u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 354), (uint8_t)GPR_U32(ctx, 4));
label_3b1d18:
    // 0x3b1d18: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x3b1d18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3b1d1c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3b1d1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3b1d20: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3B1D20u;
    {
        const bool branch_taken_0x3b1d20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b1d20) {
            ctx->pc = 0x3B1D08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b1d08;
        }
    }
    ctx->pc = 0x3B1D28u;
label_3b1d28:
    // 0x3b1d28: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x3b1d28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x3b1d2c: 0x8c252f90  lw          $a1, 0x2F90($at)
    ctx->pc = 0x3b1d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x912F90u));
    // 0x3b1d30: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3b1d30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3b1d34: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3B1D34u;
    {
        const bool branch_taken_0x3b1d34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1D34u;
        // 0x3b1d38: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1d34) {
            ctx->pc = 0x3B1D60u;
            goto label_3b1d60;
        }
    }
    ctx->pc = 0x3B1D3Cu;
    // 0x3b1d3c: 0x0  nop
    ctx->pc = 0x3b1d3cu;
    // NOP
label_3b1d40:
    // 0x3b1d40: 0x90a30162  lbu         $v1, 0x162($a1)
    ctx->pc = 0x3b1d40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 354)));
    // 0x3b1d44: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B1D44u;
    {
        const bool branch_taken_0x3b1d44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b1d44) {
            ctx->pc = 0x3B1D50u;
            goto label_3b1d50;
        }
    }
    ctx->pc = 0x3B1D4Cu;
    // 0x3b1d4c: 0xa0a40162  sb          $a0, 0x162($a1)
    ctx->pc = 0x3b1d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 354), (uint8_t)GPR_U32(ctx, 4));
label_3b1d50:
    // 0x3b1d50: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x3b1d50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3b1d54: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3b1d54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3b1d58: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3B1D58u;
    {
        const bool branch_taken_0x3b1d58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b1d58) {
            ctx->pc = 0x3B1D40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b1d40;
        }
    }
    ctx->pc = 0x3B1D60u;
label_3b1d60:
    // 0x3b1d60: 0x3e00008  jr          $ra
    ctx->pc = 0x3B1D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B1D68u;
}
