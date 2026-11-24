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

// Function: sub_00115C10
// Address: 0x115c10 - 0x115eb8
void sub_00115C10_0x115c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115C10_0x115c10");
#endif

    switch (ctx->pc) {
        case 0x115c5cu: goto label_115c5c;
        case 0x115c7cu: goto label_115c7c;
        case 0x115c98u: goto label_115c98;
        case 0x115d00u: goto label_115d00;
        case 0x115d18u: goto label_115d18;
        case 0x115d40u: goto label_115d40;
        case 0x115d9cu: goto label_115d9c;
        case 0x115de0u: goto label_115de0;
        case 0x115e04u: goto label_115e04;
        case 0x115e30u: goto label_115e30;
        case 0x115e40u: goto label_115e40;
        case 0x115e48u: goto label_115e48;
        case 0x115e5cu: goto label_115e5c;
        case 0x115e6cu: goto label_115e6c;
        case 0x115e7cu: goto label_115e7c;
        case 0x115e84u: goto label_115e84;
        default: break;
    }

    ctx->pc = 0x115c10u;

    // 0x115c10: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x115c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x115c14: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x115c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x115c18: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x115c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x115c1c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x115c1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115c20: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x115c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x115c24: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x115c24u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115c28: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x115c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x115c2c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x115c2cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115c30: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x115c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x115c34: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x115c34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115c38: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x115c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x115c3c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x115c3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115c40: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x115c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x115c44: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x115c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x115c48: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x115c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x115c4c: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x115c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x115c50: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x115c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x115c54: 0xc044b50  jal         func_112D40
    ctx->pc = 0x115C54u;
    SET_GPR_U32(ctx, 31, 0x115C5Cu);
    ctx->pc = 0x115C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115C54u;
    // 0x115c58: 0xafa80034  sw          $t0, 0x34($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D40u, 0x115C54u, 0x115C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115C5Cu;
label_115c5c:
    // 0x115c5c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x115c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x115c60: 0x2451ec80  addiu       $s1, $v0, -0x1380
    ctx->pc = 0x115c60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962304));
    // 0x115c64: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x115c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x115c68: 0x8c432b3c  lw          $v1, 0x2B3C($v0)
    ctx->pc = 0x115c68u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x402B3Cu));
    // 0x115c6c: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x115C6Cu;
    {
        const bool branch_taken_0x115c6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x115c6c) {
            ctx->pc = 0x115C70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115C6Cu;
            // 0x115c70: 0x92620000  lbu         $v0, 0x0($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115C80u;
            goto label_115c80;
        }
    }
    ctx->pc = 0x115C74u;
    // 0x115c74: 0xc044b9a  jal         func_112E68
    ctx->pc = 0x115C74u;
    SET_GPR_U32(ctx, 31, 0x115C7Cu);
    ctx->pc = 0x112E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112E68u, 0x115C74u, 0x115C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115C7Cu;
label_115c7c:
    // 0x115c7c: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x115c7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_115c80:
    // 0x115c80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x115c80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115c84: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x115c84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x115c88: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x115C88u;
    {
        const bool branch_taken_0x115c88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x115C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115C88u;
        // 0x115c8c: 0xa222000c  sb          $v0, 0xC($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115c88) {
            ctx->pc = 0x115CC4u;
            goto label_115cc4;
        }
    }
    ctx->pc = 0x115C90u;
    // 0x115c90: 0x2e060401  sltiu       $a2, $s0, 0x401
    ctx->pc = 0x115c90u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
    // 0x115c94: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x115c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_115c98:
    // 0x115c98: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x115c98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x115c9c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x115C9Cu;
    {
        const bool branch_taken_0x115c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115C9Cu;
        // 0x115ca0: 0x2651021  addu        $v0, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115c9c) {
            ctx->pc = 0x115CC8u;
            goto label_115cc8;
        }
    }
    ctx->pc = 0x115CA4u;
    // 0x115ca4: 0x2252021  addu        $a0, $s1, $a1
    ctx->pc = 0x115ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x115ca8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x115ca8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x115cac: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x115cacu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x115cb0: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x115cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x115cb4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x115CB4u;
    {
        const bool branch_taken_0x115cb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x115cb4) {
            ctx->pc = 0x115CB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115CB4u;
            // 0x115cb8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115C98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115c98;
        }
    }
    ctx->pc = 0x115CBCu;
    // 0x115cbc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x115CBCu;
    {
        const bool branch_taken_0x115cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115CBCu;
        // 0x115cc0: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115cbc) {
            ctx->pc = 0x115CCCu;
            goto label_115ccc;
        }
    }
    ctx->pc = 0x115CC4u;
label_115cc4:
    // 0x115cc4: 0x2e060401  sltiu       $a2, $s0, 0x401
    ctx->pc = 0x115cc4u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
label_115cc8:
    // 0x115cc8: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x115cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_115ccc:
    // 0x115ccc: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x115CCCu;
    {
        const bool branch_taken_0x115ccc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x115ccc) {
            ctx->pc = 0x115CD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115CCCu;
            // 0x115cd0: 0xa220040b  sb          $zero, 0x40B($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 1035), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115CD4u;
            goto label_115cd4;
        }
    }
    ctx->pc = 0x115CD4u;
label_115cd4:
    // 0x115cd4: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x115CD4u;
    {
        const bool branch_taken_0x115cd4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x115CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115CD4u;
        // 0x115cd8: 0x2fc20401  sltiu       $v0, $fp, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x115cd4) {
            ctx->pc = 0x115D10u;
            goto label_115d10;
        }
    }
    ctx->pc = 0x115CDCu;
    // 0x115cdc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x115CDCu;
    {
        const bool branch_taken_0x115cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115CDCu;
        // 0x115ce0: 0x24024601  addiu       $v0, $zero, 0x4601 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17921));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115cdc) {
            ctx->pc = 0x115D10u;
            goto label_115d10;
        }
    }
    ctx->pc = 0x115CE4u;
    // 0x115ce4: 0x16a2000e  bne         $s5, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x115CE4u;
    {
        const bool branch_taken_0x115ce4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x115ce4) {
            ctx->pc = 0x115D20u;
            goto label_115d20;
        }
    }
    ctx->pc = 0x115CECu;
    // 0x115cec: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x115cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x115cf0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x115CF0u;
    {
        const bool branch_taken_0x115cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x115cf0) {
            ctx->pc = 0x115CF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115CF0u;
            // 0x115cf4: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115D08u;
            goto label_115d08;
        }
    }
    ctx->pc = 0x115CF8u;
    // 0x115cf8: 0xc044b5c  jal         func_112D70
    ctx->pc = 0x115CF8u;
    SET_GPR_U32(ctx, 31, 0x115D00u);
    ctx->pc = 0x112D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D70u, 0x115CF8u, 0x115D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115D00u;
label_115d00:
    // 0x115d00: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x115D00u;
    {
        const bool branch_taken_0x115d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115D00u;
        // 0x115d04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115d00) {
            ctx->pc = 0x115E88u;
            goto label_115e88;
        }
    }
    ctx->pc = 0x115D08u;
label_115d08:
    // 0x115d08: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x115D08u;
    {
        const bool branch_taken_0x115d08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x115d08) {
            ctx->pc = 0x115D20u;
            goto label_115d20;
        }
    }
    ctx->pc = 0x115D10u;
label_115d10:
    // 0x115d10: 0xc044b5c  jal         func_112D70
    ctx->pc = 0x115D10u;
    SET_GPR_U32(ctx, 31, 0x115D18u);
    ctx->pc = 0x112D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D70u, 0x115D10u, 0x115D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115D18u;
label_115d18:
    // 0x115d18: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x115D18u;
    {
        const bool branch_taken_0x115d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115D18u;
        // 0x115d1c: 0x2402ffea  addiu       $v0, $zero, -0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115d18) {
            ctx->pc = 0x115E88u;
            goto label_115e88;
        }
    }
    ctx->pc = 0x115D20u;
label_115d20:
    // 0x115d20: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x115D20u;
    {
        const bool branch_taken_0x115d20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x115D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115D20u;
        // 0x115d24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115d20) {
            ctx->pc = 0x115D68u;
            goto label_115d68;
        }
    }
    ctx->pc = 0x115D28u;
    // 0x115d28: 0x2626040c  addiu       $a2, $s1, 0x40C
    ctx->pc = 0x115d28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1036));
    // 0x115d2c: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x115d2cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x115d30: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x115d30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x115d34: 0x3c170069  lui         $s7, 0x69
    ctx->pc = 0x115d34u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)105 << 16));
    // 0x115d38: 0x3c160069  lui         $s6, 0x69
    ctx->pc = 0x115d38u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)105 << 16));
    // 0x115d3c: 0x0  nop
    ctx->pc = 0x115d3cu;
    // NOP
label_115d40:
    // 0x115d40: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x115d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x115d44: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x115d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x115d48: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x115d48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x115d4c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x115d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x115d50: 0xb0102b  sltu        $v0, $a1, $s0
    ctx->pc = 0x115d50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x115d54: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x115d54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x115d58: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x115D58u;
    {
        const bool branch_taken_0x115d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x115d58) {
            ctx->pc = 0x115D40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115d40;
        }
    }
    ctx->pc = 0x115D60u;
    // 0x115d60: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x115D60u;
    {
        const bool branch_taken_0x115d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115D60u;
        // 0x115d64: 0xae300810  sw          $s0, 0x810($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2064), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115d60) {
            ctx->pc = 0x115D7Cu;
            goto label_115d7c;
        }
    }
    ctx->pc = 0x115D68u;
label_115d68:
    // 0x115d68: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x115d68u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x115d6c: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x115d6cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x115d70: 0x3c170069  lui         $s7, 0x69
    ctx->pc = 0x115d70u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)105 << 16));
    // 0x115d74: 0x3c160069  lui         $s6, 0x69
    ctx->pc = 0x115d74u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)105 << 16));
    // 0x115d78: 0xae300810  sw          $s0, 0x810($s1)
    ctx->pc = 0x115d78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2064), GPR_U32(ctx, 16));
label_115d7c:
    // 0x115d7c: 0x24e328e8  addiu       $v1, $a3, 0x28E8
    ctx->pc = 0x115d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 10472));
    // 0x115d80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x115d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x115d84: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x115d84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x115d88: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x115d88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x115d8c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x115d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x115d90: 0xae35080c  sw          $s5, 0x80C($s1)
    ctx->pc = 0x115d90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2060), GPR_U32(ctx, 21));
    // 0x115d94: 0xc0437f8  jal         func_10DFE0
    ctx->pc = 0x115D94u;
    SET_GPR_U32(ctx, 31, 0x115D9Cu);
    ctx->pc = 0x115D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115D94u;
    // 0x115d98: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFE0u, 0x115D94u, 0x115D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115D9Cu;
label_115d9c:
    // 0x115d9c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x115d9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115da0: 0xae3e0818  sw          $fp, 0x818($s1)
    ctx->pc = 0x115da0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2072), GPR_U32(ctx, 30));
    // 0x115da4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x115da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x115da8: 0xae330004  sw          $s3, 0x4($s1)
    ctx->pc = 0x115da8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
    // 0x115dac: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x115dacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x115db0: 0x24034601  addiu       $v1, $zero, 0x4601
    ctx->pc = 0x115db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17921));
    // 0x115db4: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x115db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x115db8: 0xae340000  sw          $s4, 0x0($s1)
    ctx->pc = 0x115db8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 20));
    // 0x115dbc: 0x16a3000a  bne         $s5, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x115DBCu;
    {
        const bool branch_taken_0x115dbc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        ctx->pc = 0x115DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115DBCu;
        // 0x115dc0: 0xae220814  sw          $v0, 0x814($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2068), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115dbc) {
            ctx->pc = 0x115DE8u;
            goto label_115de8;
        }
    }
    ctx->pc = 0x115DC4u;
    // 0x115dc4: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x115dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x115dc8: 0x2411001c  addiu       $s1, $zero, 0x1C
    ctx->pc = 0x115dc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x115dcc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x115dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x115dd0: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x115dd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x115dd4: 0x2812  mflo        $a1
    ctx->pc = 0x115dd4u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x115dd8: 0xc04453c  jal         func_1114F0
    ctx->pc = 0x115DD8u;
    SET_GPR_U32(ctx, 31, 0x115DE0u);
    ctx->pc = 0x115DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115DD8u;
    // 0x115ddc: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1114F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1114F0u, 0x115DD8u, 0x115DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115DE0u;
label_115de0:
    // 0x115de0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x115DE0u;
    {
        const bool branch_taken_0x115de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115DE0u;
        // 0x115de4: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115de0) {
            ctx->pc = 0x115DF0u;
            goto label_115df0;
        }
    }
    ctx->pc = 0x115DE8u;
label_115de8:
    // 0x115de8: 0x24110017  addiu       $s1, $zero, 0x17
    ctx->pc = 0x115de8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x115dec: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x115decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
label_115df0:
    // 0x115df0: 0x2405081c  addiu       $a1, $zero, 0x81C
    ctx->pc = 0x115df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2076));
    // 0x115df4: 0x2450ec80  addiu       $s0, $v0, -0x1380
    ctx->pc = 0x115df4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962304));
    // 0x115df8: 0x26d2f8c0  addiu       $s2, $s6, -0x740
    ctx->pc = 0x115df8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 4294965440));
    // 0x115dfc: 0xc04453c  jal         func_1114F0
    ctx->pc = 0x115DFCu;
    SET_GPR_U32(ctx, 31, 0x115E04u);
    ctx->pc = 0x115E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115DFCu;
    // 0x115e00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1114F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1114F0u, 0x115DFCu, 0x115E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115E04u;
label_115e04:
    // 0x115e04: 0x26e40380  addiu       $a0, $s7, 0x380
    ctx->pc = 0x115e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 896));
    // 0x115e08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x115e08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115e0c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x115e0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115e10: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x115e10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x115e14: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x115e14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x115e18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x115e18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115e1c: 0x2408081c  addiu       $t0, $zero, 0x81C
    ctx->pc = 0x115e1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2076));
    // 0x115e20: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x115e20u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115e24: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x115e24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x115e28: 0xc0449f4  jal         func_1127D0
    ctx->pc = 0x115E28u;
    SET_GPR_U32(ctx, 31, 0x115E30u);
    ctx->pc = 0x115E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115E28u;
    // 0x115e2c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1127D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1127D0u, 0x115E28u, 0x115E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115E30u;
label_115e30:
    // 0x115e30: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x115E30u;
    {
        const bool branch_taken_0x115e30 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x115E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115E30u;
        // 0x115e34: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115e30) {
            ctx->pc = 0x115E50u;
            goto label_115e50;
        }
    }
    ctx->pc = 0x115E38u;
    // 0x115e38: 0xc0437fc  jal         func_10DFF0
    ctx->pc = 0x115E38u;
    SET_GPR_U32(ctx, 31, 0x115E40u);
    ctx->pc = 0x115E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115E38u;
    // 0x115e3c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFF0u, 0x115E38u, 0x115E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115E40u;
label_115e40:
    // 0x115e40: 0xc044b5c  jal         func_112D70
    ctx->pc = 0x115E40u;
    SET_GPR_U32(ctx, 31, 0x115E48u);
    ctx->pc = 0x112D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D70u, 0x115E40u, 0x115E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115E48u;
label_115e48:
    // 0x115e48: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x115E48u;
    {
        const bool branch_taken_0x115e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115E48u;
        // 0x115e4c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115e48) {
            ctx->pc = 0x115E88u;
            goto label_115e88;
        }
    }
    ctx->pc = 0x115E50u;
label_115e50:
    // 0x115e50: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x115e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x115e54: 0xc044b5c  jal         func_112D70
    ctx->pc = 0x115E54u;
    SET_GPR_U32(ctx, 31, 0x115E5Cu);
    ctx->pc = 0x115E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115E54u;
    // 0x115e58: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D70u, 0x115E54u, 0x115E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115E5Cu;
label_115e5c:
    // 0x115e5c: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x115E5Cu;
    {
        const bool branch_taken_0x115e5c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x115e5c) {
            ctx->pc = 0x115E74u;
            goto label_115e74;
        }
    }
    ctx->pc = 0x115E64u;
    // 0x115e64: 0xc0437fc  jal         func_10DFF0
    ctx->pc = 0x115E64u;
    SET_GPR_U32(ctx, 31, 0x115E6Cu);
    ctx->pc = 0x115E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115E64u;
    // 0x115e68: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFF0u, 0x115E64u, 0x115E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115E6Cu;
label_115e6c:
    // 0x115e6c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x115E6Cu;
    {
        const bool branch_taken_0x115e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115E6Cu;
        // 0x115e70: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115e6c) {
            ctx->pc = 0x115E88u;
            goto label_115e88;
        }
    }
    ctx->pc = 0x115E74u;
label_115e74:
    // 0x115e74: 0xc043808  jal         func_10E020
    ctx->pc = 0x115E74u;
    SET_GPR_U32(ctx, 31, 0x115E7Cu);
    ctx->pc = 0x115E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115E74u;
    // 0x115e78: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E020u, 0x115E74u, 0x115E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115E7Cu;
label_115e7c:
    // 0x115e7c: 0xc0437fc  jal         func_10DFF0
    ctx->pc = 0x115E7Cu;
    SET_GPR_U32(ctx, 31, 0x115E84u);
    ctx->pc = 0x115E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115E7Cu;
    // 0x115e80: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFF0u, 0x115E7Cu, 0x115E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115E84u;
label_115e84:
    // 0x115e84: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x115e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_115e88:
    // 0x115e88: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x115e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x115e8c: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x115e8cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x115e90: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x115e90u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x115e94: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x115e94u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x115e98: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x115e98u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x115e9c: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x115e9cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x115ea0: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x115ea0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x115ea4: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x115ea4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x115ea8: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x115ea8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x115eac: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x115eacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x115eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x115EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115EB0u;
        // 0x115eb4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115EB8u;
}
