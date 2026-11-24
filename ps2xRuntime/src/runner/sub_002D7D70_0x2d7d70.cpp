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

// Function: sub_002D7D70
// Address: 0x2d7d70 - 0x2d8224
void sub_002D7D70_0x2d7d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7D70_0x2d7d70");
#endif

    switch (ctx->pc) {
        case 0x2d7db0u: goto label_2d7db0;
        case 0x2d7decu: goto label_2d7dec;
        case 0x2d7e00u: goto label_2d7e00;
        case 0x2d7ebcu: goto label_2d7ebc;
        case 0x2d8014u: goto label_2d8014;
        case 0x2d80c0u: goto label_2d80c0;
        case 0x2d813cu: goto label_2d813c;
        case 0x2d81b8u: goto label_2d81b8;
        case 0x2d81c8u: goto label_2d81c8;
        case 0x2d81e8u: goto label_2d81e8;
        case 0x2d81f0u: goto label_2d81f0;
        default: break;
    }

    ctx->pc = 0x2d7d70u;

    // 0x2d7d70: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2d7d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2d7d74: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2d7d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2d7d78: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d7d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d7d7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d7d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d7d80: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2d7d80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7d84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d7d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d7d88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d7d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d7d8c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2d7d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2d7d90: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x2d7d90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2d7d94: 0x1460011c  bnez        $v1, . + 4 + (0x11C << 2)
    ctx->pc = 0x2D7D94u;
    {
        const bool branch_taken_0x2d7d94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7D94u;
        // 0x2d7d98: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7d94) {
            ctx->pc = 0x2D8208u;
            goto label_2d8208;
        }
    }
    ctx->pc = 0x2D7D9Cu;
    // 0x2d7d9c: 0x9243002c  lbu         $v1, 0x2C($s2)
    ctx->pc = 0x2d7d9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x2d7da0: 0x10600119  beqz        $v1, . + 4 + (0x119 << 2)
    ctx->pc = 0x2D7DA0u;
    {
        const bool branch_taken_0x2d7da0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7DA0u;
        // 0x2d7da4: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7da0) {
            ctx->pc = 0x2D8208u;
            goto label_2d8208;
        }
    }
    ctx->pc = 0x2D7DA8u;
    // 0x2d7da8: 0xc04d748  jal         func_135D20
    ctx->pc = 0x2D7DA8u;
    SET_GPR_U32(ctx, 31, 0x2D7DB0u);
    ctx->pc = 0x2D7DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7DA8u;
    // 0x2d7dac: 0x27a6006c  addiu       $a2, $sp, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135D20u, 0x2D7DA8u, 0x2D7DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7DB0u;
label_2d7db0:
    // 0x2d7db0: 0x10400115  beqz        $v0, . + 4 + (0x115 << 2)
    ctx->pc = 0x2D7DB0u;
    {
        const bool branch_taken_0x2d7db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7db0) {
            ctx->pc = 0x2D8208u;
            goto label_2d8208;
        }
    }
    ctx->pc = 0x2D7DB8u;
    // 0x2d7db8: 0xae600040  sw          $zero, 0x40($s3)
    ctx->pc = 0x2d7db8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 0));
    // 0x2d7dbc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2d7dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2d7dc0: 0xae62003c  sw          $v0, 0x3C($s3)
    ctx->pc = 0x2d7dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
    // 0x2d7dc4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2d7dc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2d7dc8: 0xa6600034  sh          $zero, 0x34($s3)
    ctx->pc = 0x2d7dc8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d7dcc: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x2d7dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2d7dd0: 0xa6600036  sh          $zero, 0x36($s3)
    ctx->pc = 0x2d7dd0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 54), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d7dd4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d7dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7dd8: 0x8c23fc90  lw          $v1, -0x370($at)
    ctx->pc = 0x2d7dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81FC90u));
    // 0x2d7ddc: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x2d7ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x2d7de0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2d7de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2d7de4: 0xc0b522c  jal         func_2D48B0
    ctx->pc = 0x2D7DE4u;
    SET_GPR_U32(ctx, 31, 0x2D7DECu);
    ctx->pc = 0x2D7DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7DE4u;
    // 0x2d7de8: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D48B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D48B0u, 0x2D7DE4u, 0x2D7DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7DECu;
label_2d7dec:
    // 0x2d7dec: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x2d7decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x2d7df0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d7df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7df4: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x2d7df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x2d7df8: 0xc0b5054  jal         func_2D4150
    ctx->pc = 0x2D7DF8u;
    SET_GPR_U32(ctx, 31, 0x2D7E00u);
    ctx->pc = 0x2D7DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7DF8u;
    // 0x2d7dfc: 0x344617fd  ori         $a2, $v0, 0x17FD (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6141);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4150u, 0x2D7DF8u, 0x2D7E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7E00u;
label_2d7e00:
    // 0x2d7e00: 0x27b00054  addiu       $s0, $sp, 0x54
    ctx->pc = 0x2d7e00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x2d7e04: 0x9248002f  lbu         $t0, 0x2F($s2)
    ctx->pc = 0x2d7e04u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 47)));
    // 0x2d7e08: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d7e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d7e0c: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x2d7e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x2d7e10: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x2d7e10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d7e14: 0x24c66120  addiu       $a2, $a2, 0x6120
    ctx->pc = 0x2d7e14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24864));
    // 0x2d7e18: 0x9243002d  lbu         $v1, 0x2D($s2)
    ctx->pc = 0x2d7e18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 45)));
    // 0x2d7e1c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d7e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d7e20: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x2d7e20u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x2d7e24: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x2d7e24u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x2d7e28: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x2d7e28u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2d7e2c: 0x52903  sra         $a1, $a1, 4
    ctx->pc = 0x2d7e2cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
    // 0x2d7e30: 0x2484f870  addiu       $a0, $a0, -0x790
    ctx->pc = 0x2d7e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965360));
    // 0x2d7e34: 0x24a5f900  addiu       $a1, $a1, -0x700
    ctx->pc = 0x2d7e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965504));
    // 0x2d7e38: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2d7e38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2d7e3c: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x2d7e3cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2d7e40: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x2d7e40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2d7e44: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x2d7e44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x2d7e48: 0xc78821  addu        $s1, $a2, $a3
    ctx->pc = 0x2d7e48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2d7e4c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x2d7e4cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x2d7e50: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D7E50u;
    {
        const bool branch_taken_0x2d7e50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D7E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7E50u;
        // 0x2d7e54: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7e50) {
            ctx->pc = 0x2D7E78u;
            goto label_2d7e78;
        }
    }
    ctx->pc = 0x2D7E58u;
    // 0x2d7e58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d7e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d7e5c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D7E5Cu;
    {
        const bool branch_taken_0x2d7e5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d7e5c) {
            ctx->pc = 0x2D7E78u;
            goto label_2d7e78;
        }
    }
    ctx->pc = 0x2D7E64u;
    // 0x2d7e64: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D7E64u;
    {
        const bool branch_taken_0x2d7e64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7e64) {
            ctx->pc = 0x2D7E78u;
            goto label_2d7e78;
        }
    }
    ctx->pc = 0x2D7E6Cu;
    // 0x2d7e6c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2D7E6Cu;
    {
        const bool branch_taken_0x2d7e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7e6c) {
            ctx->pc = 0x2D7EC0u;
            goto label_2d7ec0;
        }
    }
    ctx->pc = 0x2D7E74u;
    // 0x2d7e74: 0x0  nop
    ctx->pc = 0x2d7e74u;
    // NOP
label_2d7e78:
    // 0x2d7e78: 0x86270008  lh          $a3, 0x8($s1)
    ctx->pc = 0x2d7e78u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2d7e7c: 0x8623000a  lh          $v1, 0xA($s1)
    ctx->pc = 0x2d7e7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x2d7e80: 0x5343c  dsll32      $a2, $a1, 16
    ctx->pc = 0x2d7e80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2d7e84: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x2d7e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x2d7e88: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d7e88u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d7e8c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d7e8cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2d7e90: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d7e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7e94: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d7e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7e98: 0x73883  sra         $a3, $a3, 2
    ctx->pc = 0x2d7e98u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 2));
    // 0x2d7e9c: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x2d7e9cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2d7ea0: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2d7ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2d7ea4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2d7ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d7ea8: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x2d7ea8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x2d7eac: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2d7eacu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d7eb0: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d7eb0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d7eb4: 0xc0b5860  jal         func_2D6180
    ctx->pc = 0x2D7EB4u;
    SET_GPR_U32(ctx, 31, 0x2D7EBCu);
    ctx->pc = 0x2D7EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7EB4u;
    // 0x2d7eb8: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6180u, 0x2D7EB4u, 0x2D7EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7EBCu;
label_2d7ebc:
    // 0x2d7ebc: 0x0  nop
    ctx->pc = 0x2d7ebcu;
    // NOP
label_2d7ec0:
    // 0x2d7ec0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2d7ec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2d7ec4: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x2d7ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x2d7ec8: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x2d7ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x2d7ecc: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x2D7ECCu;
    {
        const bool branch_taken_0x2d7ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7ecc) {
            ctx->pc = 0x2D8018u;
            goto label_2d8018;
        }
    }
    ctx->pc = 0x2D7ED4u;
    // 0x2d7ed4: 0x92440031  lbu         $a0, 0x31($s2)
    ctx->pc = 0x2d7ed4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 49)));
    // 0x2d7ed8: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D7ED8u;
    {
        const bool branch_taken_0x2d7ed8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7ED8u;
        // 0x2d7edc: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7ed8) {
            ctx->pc = 0x2D7F00u;
            goto label_2d7f00;
        }
    }
    ctx->pc = 0x2D7EE0u;
    // 0x2d7ee0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d7ee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d7ee4: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x2d7ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2d7ee8: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x2d7ee8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2d7eec: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2d7eecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2d7ef0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d7ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d7ef4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d7ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d7ef8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2D7EF8u;
    {
        const bool branch_taken_0x2d7ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7EF8u;
        // 0x2d7efc: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7ef8) {
            ctx->pc = 0x2D7F14u;
            goto label_2d7f14;
        }
    }
    ctx->pc = 0x2D7F00u;
label_2d7f00:
    // 0x2d7f00: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x2d7f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2d7f04: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x2d7f04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
    // 0x2d7f08: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d7f08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d7f0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d7f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d7f10: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d7f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2d7f14:
    // 0x2d7f14: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x2d7f14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2d7f18: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x2d7f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2d7f1c: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2D7F1Cu;
    {
        const bool branch_taken_0x2d7f1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D7F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7F1Cu;
        // 0x2d7f20: 0x64050005  daddiu      $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)5);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7f1c) {
            ctx->pc = 0x2D7F78u;
            goto label_2d7f78;
        }
    }
    ctx->pc = 0x2D7F24u;
    // 0x2d7f24: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x2d7f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2d7f28: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D7F28u;
    {
        const bool branch_taken_0x2d7f28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D7F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7F28u;
        // 0x2d7f2c: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7f28) {
            ctx->pc = 0x2D7F70u;
            goto label_2d7f70;
        }
    }
    ctx->pc = 0x2D7F30u;
    // 0x2d7f30: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D7F30u;
    {
        const bool branch_taken_0x2d7f30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d7f30) {
            ctx->pc = 0x2D7F68u;
            goto label_2d7f68;
        }
    }
    ctx->pc = 0x2D7F38u;
    // 0x2d7f38: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x2d7f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2d7f3c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D7F3Cu;
    {
        const bool branch_taken_0x2d7f3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D7F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7F3Cu;
        // 0x2d7f40: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7f3c) {
            ctx->pc = 0x2D7F60u;
            goto label_2d7f60;
        }
    }
    ctx->pc = 0x2D7F44u;
    // 0x2d7f44: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D7F44u;
    {
        const bool branch_taken_0x2d7f44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d7f44) {
            ctx->pc = 0x2D7F58u;
            goto label_2d7f58;
        }
    }
    ctx->pc = 0x2D7F4Cu;
    // 0x2d7f4c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2D7F4Cu;
    {
        const bool branch_taken_0x2d7f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7f4c) {
            ctx->pc = 0x2D7F80u;
            goto label_2d7f80;
        }
    }
    ctx->pc = 0x2D7F54u;
    // 0x2d7f54: 0x0  nop
    ctx->pc = 0x2d7f54u;
    // NOP
label_2d7f58:
    // 0x2d7f58: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2D7F58u;
    {
        const bool branch_taken_0x2d7f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7F58u;
        // 0x2d7f5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7f58) {
            ctx->pc = 0x2D7F80u;
            goto label_2d7f80;
        }
    }
    ctx->pc = 0x2D7F60u;
label_2d7f60:
    // 0x2d7f60: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D7F60u;
    {
        const bool branch_taken_0x2d7f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7F60u;
        // 0x2d7f64: 0x64050001  daddiu      $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7f60) {
            ctx->pc = 0x2D7F80u;
            goto label_2d7f80;
        }
    }
    ctx->pc = 0x2D7F68u;
label_2d7f68:
    // 0x2d7f68: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D7F68u;
    {
        const bool branch_taken_0x2d7f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7F68u;
        // 0x2d7f6c: 0x64050002  daddiu      $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7f68) {
            ctx->pc = 0x2D7F80u;
            goto label_2d7f80;
        }
    }
    ctx->pc = 0x2D7F70u;
label_2d7f70:
    // 0x2d7f70: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D7F70u;
    {
        const bool branch_taken_0x2d7f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7F70u;
        // 0x2d7f74: 0x64050003  daddiu      $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7f70) {
            ctx->pc = 0x2D7F80u;
            goto label_2d7f80;
        }
    }
    ctx->pc = 0x2D7F78u;
label_2d7f78:
    // 0x2d7f78: 0x64050004  daddiu      $a1, $zero, 0x4
    ctx->pc = 0x2d7f78u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x2d7f7c: 0x0  nop
    ctx->pc = 0x2d7f7cu;
    // NOP
label_2d7f80:
    // 0x2d7f80: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2d7f80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2d7f84: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2d7f84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2d7f88: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x2d7f88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d7f8c: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x2d7f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d7f90: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x2d7f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2d7f94: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2d7f94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d7f98: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2d7f98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d7f9c: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2d7f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2d7fa0: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x2d7fa0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d7fa4: 0x24426470  addiu       $v0, $v0, 0x6470
    ctx->pc = 0x2d7fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25712));
    // 0x2d7fa8: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x2d7fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2d7fac: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2d7facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2d7fb0: 0x63103  sra         $a2, $a2, 4
    ctx->pc = 0x2d7fb0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 4));
    // 0x2d7fb4: 0x24426600  addiu       $v0, $v0, 0x6600
    ctx->pc = 0x2d7fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26112));
    // 0x2d7fb8: 0x24c6f900  addiu       $a2, $a2, -0x700
    ctx->pc = 0x2d7fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965504));
    // 0x2d7fbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d7fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d7fc0: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x2d7fc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x2d7fc4: 0x8c4a0000  lw          $t2, 0x0($v0)
    ctx->pc = 0x2d7fc4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d7fc8: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d7fc8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d7fcc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d7fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d7fd0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d7fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7fd4: 0x84a70004  lh          $a3, 0x4($a1)
    ctx->pc = 0x2d7fd4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2d7fd8: 0x84a80008  lh          $t0, 0x8($a1)
    ctx->pc = 0x2d7fd8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2d7fdc: 0x84a9000a  lh          $t1, 0xA($a1)
    ctx->pc = 0x2d7fdcu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x2d7fe0: 0x84a20006  lh          $v0, 0x6($a1)
    ctx->pc = 0x2d7fe0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x2d7fe4: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x2d7fe4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2d7fe8: 0x2463f870  addiu       $v1, $v1, -0x790
    ctx->pc = 0x2d7fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965360));
    // 0x2d7fec: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x2d7fecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x2d7ff0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2d7ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2d7ff4: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x2d7ff4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x2d7ff8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2d7ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d7ffc: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d7ffcu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d8000: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2d8000u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2d8004: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d8004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d8008: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2d8008u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d800c: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D800Cu;
    SET_GPR_U32(ctx, 31, 0x2D8014u);
    ctx->pc = 0x2D8010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D800Cu;
    // 0x2d8010: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D800Cu, 0x2D8014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8014u;
label_2d8014:
    // 0x2d8014: 0x0  nop
    ctx->pc = 0x2d8014u;
    // NOP
label_2d8018:
    // 0x2d8018: 0x9243002d  lbu         $v1, 0x2D($s2)
    ctx->pc = 0x2d8018u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 45)));
    // 0x2d801c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2d801cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d8020: 0x1062004b  beq         $v1, $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x2D8020u;
    {
        const bool branch_taken_0x2d8020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D8024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8020u;
        // 0x2d8024: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8020) {
            ctx->pc = 0x2D8150u;
            goto label_2d8150;
        }
    }
    ctx->pc = 0x2D8028u;
    // 0x2d8028: 0x10620049  beq         $v1, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x2D8028u;
    {
        const bool branch_taken_0x2d8028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d8028) {
            ctx->pc = 0x2D8150u;
            goto label_2d8150;
        }
    }
    ctx->pc = 0x2D8030u;
    // 0x2d8030: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d8030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8034: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2D8034u;
    {
        const bool branch_taken_0x2d8034 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D8038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8034u;
        // 0x2d8038: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8034) {
            ctx->pc = 0x2D80C8u;
            goto label_2d80c8;
        }
    }
    ctx->pc = 0x2D803Cu;
    // 0x2d803c: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2D803Cu;
    {
        const bool branch_taken_0x2d803c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d803c) {
            ctx->pc = 0x2D80C8u;
            goto label_2d80c8;
        }
    }
    ctx->pc = 0x2D8044u;
    // 0x2d8044: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D8044u;
    {
        const bool branch_taken_0x2d8044 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8044) {
            ctx->pc = 0x2D8058u;
            goto label_2d8058;
        }
    }
    ctx->pc = 0x2D804Cu;
    // 0x2d804c: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2D804Cu;
    {
        const bool branch_taken_0x2d804c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d804c) {
            ctx->pc = 0x2D81B8u;
            goto label_2d81b8;
        }
    }
    ctx->pc = 0x2D8054u;
    // 0x2d8054: 0x0  nop
    ctx->pc = 0x2d8054u;
    // NOP
label_2d8058:
    // 0x2d8058: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d8058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d805c: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x2d805cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d8060: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d8060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8064: 0x86220006  lh          $v0, 0x6($s1)
    ctx->pc = 0x2d8064u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x2d8068: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d8068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d806c: 0x862c0004  lh          $t4, 0x4($s1)
    ctx->pc = 0x2d806cu;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2d8070: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x2d8070u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d8074: 0x8e4a0014  lw          $t2, 0x14($s2)
    ctx->pc = 0x2d8074u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2d8078: 0x86280008  lh          $t0, 0x8($s1)
    ctx->pc = 0x2d8078u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2d807c: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x2d807cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2d8080: 0x8629000a  lh          $t1, 0xA($s1)
    ctx->pc = 0x2d8080u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x2d8084: 0x2463f870  addiu       $v1, $v1, -0x790
    ctx->pc = 0x2d8084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965360));
    // 0x2d8088: 0x63103  sra         $a2, $a2, 4
    ctx->pc = 0x2d8088u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 4));
    // 0x2d808c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2d808cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2d8090: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2d8090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d8094: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2d8094u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2d8098: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d8098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d809c: 0x24c3f900  addiu       $v1, $a2, -0x700
    ctx->pc = 0x2d809cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965504));
    // 0x2d80a0: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2d80a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d80a4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2d80a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d80a8: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x2d80a8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x2d80ac: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2d80acu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2d80b0: 0x1831021  addu        $v0, $t4, $v1
    ctx->pc = 0x2d80b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x2d80b4: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x2d80b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d80b8: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D80B8u;
    SET_GPR_U32(ctx, 31, 0x2D80C0u);
    ctx->pc = 0x2D80BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D80B8u;
    // 0x2d80bc: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D80B8u, 0x2D80C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D80C0u;
label_2d80c0:
    // 0x2d80c0: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x2D80C0u;
    {
        const bool branch_taken_0x2d80c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d80c0) {
            ctx->pc = 0x2D81B8u;
            goto label_2d81b8;
        }
    }
    ctx->pc = 0x2D80C8u;
label_2d80c8:
    // 0x2d80c8: 0x8e620038  lw          $v0, 0x38($s3)
    ctx->pc = 0x2d80c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x2d80cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d80ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d80d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d80d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d80d4: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x2d80d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d80d8: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2d80d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2d80dc: 0xae620038  sw          $v0, 0x38($s3)
    ctx->pc = 0x2d80dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 2));
    // 0x2d80e0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d80e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d80e4: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x2d80e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d80e8: 0x86220006  lh          $v0, 0x6($s1)
    ctx->pc = 0x2d80e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x2d80ec: 0x862c0004  lh          $t4, 0x4($s1)
    ctx->pc = 0x2d80ecu;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2d80f0: 0x8e4a0014  lw          $t2, 0x14($s2)
    ctx->pc = 0x2d80f0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2d80f4: 0x86280008  lh          $t0, 0x8($s1)
    ctx->pc = 0x2d80f4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2d80f8: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x2d80f8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2d80fc: 0x8629000a  lh          $t1, 0xA($s1)
    ctx->pc = 0x2d80fcu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x2d8100: 0x2463f870  addiu       $v1, $v1, -0x790
    ctx->pc = 0x2d8100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965360));
    // 0x2d8104: 0x63103  sra         $a2, $a2, 4
    ctx->pc = 0x2d8104u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 4));
    // 0x2d8108: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2d8108u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2d810c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2d810cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d8110: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2d8110u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2d8114: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d8114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d8118: 0x24c3f900  addiu       $v1, $a2, -0x700
    ctx->pc = 0x2d8118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965504));
    // 0x2d811c: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2d811cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d8120: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2d8120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d8124: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x2d8124u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x2d8128: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2d8128u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2d812c: 0x1831021  addu        $v0, $t4, $v1
    ctx->pc = 0x2d812cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x2d8130: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x2d8130u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d8134: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D8134u;
    SET_GPR_U32(ctx, 31, 0x2D813Cu);
    ctx->pc = 0x2D8138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8134u;
    // 0x2d8138: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D8134u, 0x2D813Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D813Cu;
label_2d813c:
    // 0x2d813c: 0x8e630038  lw          $v1, 0x38($s3)
    ctx->pc = 0x2d813cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x2d8140: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x2d8140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2d8144: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2d8144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2d8148: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2D8148u;
    {
        const bool branch_taken_0x2d8148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D814Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8148u;
        // 0x2d814c: 0xae620038  sw          $v0, 0x38($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8148) {
            ctx->pc = 0x2D81B8u;
            goto label_2d81b8;
        }
    }
    ctx->pc = 0x2D8150u;
label_2d8150:
    // 0x2d8150: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d8150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d8154: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x2d8154u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d8158: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d8158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d815c: 0x86220006  lh          $v0, 0x6($s1)
    ctx->pc = 0x2d815cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x2d8160: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d8160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8164: 0x86270004  lh          $a3, 0x4($s1)
    ctx->pc = 0x2d8164u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2d8168: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x2d8168u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d816c: 0x86280008  lh          $t0, 0x8($s1)
    ctx->pc = 0x2d816cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2d8170: 0x8629000a  lh          $t1, 0xA($s1)
    ctx->pc = 0x2d8170u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x2d8174: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x2d8174u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2d8178: 0x8e2a0000  lw          $t2, 0x0($s1)
    ctx->pc = 0x2d8178u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d817c: 0x2463f870  addiu       $v1, $v1, -0x790
    ctx->pc = 0x2d817cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965360));
    // 0x2d8180: 0x63103  sra         $a2, $a2, 4
    ctx->pc = 0x2d8180u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 4));
    // 0x2d8184: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2d8184u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2d8188: 0x24c6f900  addiu       $a2, $a2, -0x700
    ctx->pc = 0x2d8188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965504));
    // 0x2d818c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2d818cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d8190: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2d8190u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2d8194: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d8194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d8198: 0x61c3c  dsll32      $v1, $a2, 16
    ctx->pc = 0x2d8198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 16));
    // 0x2d819c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2d819cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2d81a0: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x2d81a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2d81a4: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2d81a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d81a8: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x2d81a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d81ac: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x2d81acu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x2d81b0: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D81B0u;
    SET_GPR_U32(ctx, 31, 0x2D81B8u);
    ctx->pc = 0x2D81B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D81B0u;
    // 0x2d81b4: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D81B0u, 0x2D81B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D81B8u;
label_2d81b8:
    // 0x2d81b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d81b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d81bc: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x2d81bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x2d81c0: 0xc0b5054  jal         func_2D4150
    ctx->pc = 0x2D81C0u;
    SET_GPR_U32(ctx, 31, 0x2D81C8u);
    ctx->pc = 0x2D81C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D81C0u;
    // 0x2d81c4: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4150u, 0x2D81C0u, 0x2D81C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D81C8u;
label_2d81c8:
    // 0x2d81c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d81c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d81cc: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x2d81ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x2d81d0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2d81d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2d81d4: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x2d81d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x2d81d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d81d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d81dc: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x2d81dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x2d81e0: 0xc0b5054  jal         func_2D4150
    ctx->pc = 0x2D81E0u;
    SET_GPR_U32(ctx, 31, 0x2D81E8u);
    ctx->pc = 0x2D81E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D81E0u;
    // 0x2d81e4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4150u, 0x2D81E0u, 0x2D81E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D81E8u;
label_2d81e8:
    // 0x2d81e8: 0xc0b5204  jal         func_2D4810
    ctx->pc = 0x2D81E8u;
    SET_GPR_U32(ctx, 31, 0x2D81F0u);
    ctx->pc = 0x2D81ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D81E8u;
    // 0x2d81ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4810u, 0x2D81E8u, 0x2D81F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D81F0u;
label_2d81f0:
    // 0x2d81f0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2d81f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d81f4: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x2d81f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2d81f8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2d81f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2d81fc: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x2d81fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x2d8200: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d8200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d8204: 0xac23fc90  sw          $v1, -0x370($at)
    ctx->pc = 0x2d8204u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 3));
label_2d8208:
    // 0x2d8208: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2d8208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d820c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d820cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d8210: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d8210u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d8214: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d8214u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d8218: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d8218u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d821c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D821Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D821Cu;
        // 0x2d8220: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D821Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8224u;
}
