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

// Function: sub_001F5D38
// Address: 0x1f5d38 - 0x1f6510
void sub_001F5D38_0x1f5d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5D38_0x1f5d38");
#endif

    switch (ctx->pc) {
        case 0x1f5dacu: goto label_1f5dac;
        case 0x1f6370u: goto label_1f6370;
        case 0x1f6420u: goto label_1f6420;
        case 0x1f644cu: goto label_1f644c;
        case 0x1f6454u: goto label_1f6454;
        default: break;
    }

    ctx->pc = 0x1f5d38u;

    // 0x1f5d38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f5d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f5d3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f5d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5d40: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f5d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f5d44: 0x24920160  addiu       $s2, $a0, 0x160
    ctx->pc = 0x1f5d44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 352));
    // 0x1f5d48: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f5d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f5d4c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1f5d4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5d50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f5d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f5d54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f5d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f5d58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f5d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f5d5c: 0xae430420  sw          $v1, 0x420($s2)
    ctx->pc = 0x1f5d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1056), GPR_U32(ctx, 3));
    // 0x1f5d60: 0x8e42042c  lw          $v0, 0x42C($s2)
    ctx->pc = 0x1f5d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1068)));
    // 0x1f5d64: 0x8e440308  lw          $a0, 0x308($s2)
    ctx->pc = 0x1f5d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 776)));
    // 0x1f5d68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f5d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f5d6c: 0xae4004a4  sw          $zero, 0x4A4($s2)
    ctx->pc = 0x1f5d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1188), GPR_U32(ctx, 0));
    // 0x1f5d70: 0xae42042c  sw          $v0, 0x42C($s2)
    ctx->pc = 0x1f5d70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1068), GPR_U32(ctx, 2));
    // 0x1f5d74: 0xae4004a8  sw          $zero, 0x4A8($s2)
    ctx->pc = 0x1f5d74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1192), GPR_U32(ctx, 0));
    // 0x1f5d78: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F5D78u;
    {
        const bool branch_taken_0x1f5d78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D78u;
        // 0x1f5d7c: 0xae4004ac  sw          $zero, 0x4AC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5d78) {
            ctx->pc = 0x1F5D8Cu;
            goto label_1f5d8c;
        }
    }
    ctx->pc = 0x1F5D80u;
    // 0x1f5d80: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1f5d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1f5d84: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F5D84u;
    {
        const bool branch_taken_0x1f5d84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f5d84) {
            ctx->pc = 0x1F5D88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5D84u;
            // 0x1f5d88: 0x8e420494  lw          $v0, 0x494($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5D9Cu;
            goto label_1f5d9c;
        }
    }
    ctx->pc = 0x1F5D8Cu;
label_1f5d8c:
    // 0x1f5d8c: 0x8e42030c  lw          $v0, 0x30C($s2)
    ctx->pc = 0x1f5d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 780)));
    // 0x1f5d90: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F5D90u;
    {
        const bool branch_taken_0x1f5d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5d90) {
            ctx->pc = 0x1F5DA4u;
            goto label_1f5da4;
        }
    }
    ctx->pc = 0x1F5D98u;
    // 0x1f5d98: 0x8e420494  lw          $v0, 0x494($s2)
    ctx->pc = 0x1f5d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1172)));
label_1f5d9c:
    // 0x1f5d9c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f5d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f5da0: 0xae420494  sw          $v0, 0x494($s2)
    ctx->pc = 0x1f5da0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1172), GPR_U32(ctx, 2));
label_1f5da4:
    // 0x1f5da4: 0xc07d6ee  jal         func_1F5BB8
    ctx->pc = 0x1F5DA4u;
    SET_GPR_U32(ctx, 31, 0x1F5DACu);
    ctx->pc = 0x1F5DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5DA4u;
    // 0x1f5da8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5BB8u, 0x1F5DA4u, 0x1F5DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5DACu;
label_1f5dac:
    // 0x1f5dac: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x1f5dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1f5db0: 0x2628024  and         $s0, $s3, $v0
    ctx->pc = 0x1f5db0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x1f5db4: 0x2701823  subu        $v1, $s3, $s0
    ctx->pc = 0x1f5db4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1f5db8: 0x82080000  lb          $t0, 0x0($s0)
    ctx->pc = 0x1f5db8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f5dbc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f5dbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f5dc0: 0x388c0  sll         $s1, $v1, 3
    ctx->pc = 0x1f5dc0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1f5dc4: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x1f5dc4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f5dc8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f5dc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f5dcc: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x1f5dccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f5dd0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f5dd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f5dd4: 0x92060000  lbu         $a2, 0x0($s0)
    ctx->pc = 0x1f5dd4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f5dd8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f5dd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f5ddc: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x1f5ddcu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f5de0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f5de0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f5de4: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1f5de4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f5de8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f5de8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f5dec: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1f5decu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1f5df0: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f5df0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f5df4: 0x1044025  or          $t0, $t0, $a0
    ctx->pc = 0x1f5df4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x1f5df8: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1f5df8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1f5dfc: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1f5dfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f5e00: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f5e00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f5e04: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1f5e04u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1f5e08: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f5e08u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f5e0c: 0x1054025  or          $t0, $t0, $a1
    ctx->pc = 0x1f5e0cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 5));
    // 0x1f5e10: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1f5e10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f5e14: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1f5e14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1f5e18: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1f5e18u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1f5e1c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f5e1cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f5e20: 0x1064025  or          $t0, $t0, $a2
    ctx->pc = 0x1f5e20u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    // 0x1f5e24: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f5e24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f5e28: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1f5e28u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1f5e2c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F5E2Cu;
    {
        const bool branch_taken_0x1f5e2c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5E2Cu;
        // 0x1f5e30: 0x2284004  sllv        $t0, $t0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 17) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5e2c) {
            ctx->pc = 0x1F5E50u;
            goto label_1f5e50;
        }
    }
    ctx->pc = 0x1F5E34u;
    // 0x1f5e34: 0x111023  negu        $v0, $s1
    ctx->pc = 0x1f5e34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x1f5e38: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1f5e38u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f5e3c: 0x1021025  or          $v0, $t0, $v0
    ctx->pc = 0x1f5e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1f5e40: 0x2274004  sllv        $t0, $a3, $s1
    ctx->pc = 0x1f5e40u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 17) & 0x1F));
    // 0x1f5e44: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F5E44u;
    {
        const bool branch_taken_0x1f5e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5E44u;
        // 0x1f5e48: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5e44) {
            ctx->pc = 0x1F5E58u;
            goto label_1f5e58;
        }
    }
    ctx->pc = 0x1F5E4Cu;
    // 0x1f5e4c: 0x0  nop
    ctx->pc = 0x1f5e4cu;
    // NOP
label_1f5e50:
    // 0x1f5e50: 0xae480000  sw          $t0, 0x0($s2)
    ctx->pc = 0x1f5e50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 8));
    // 0x1f5e54: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1f5e54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1f5e58:
    // 0x1f5e58: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x1f5e58u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f5e5c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f5e5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f5e60: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1f5e60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f5e64: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f5e64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f5e68: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f5e68u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f5e6c: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1f5e6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f5e70: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1f5e70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1f5e74: 0x2a220014  slti        $v0, $s1, 0x14
    ctx->pc = 0x1f5e74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x1f5e78: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f5e78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f5e7c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f5e7cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f5e80: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x1f5e80u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f5e84: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f5e84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f5e88: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1f5e88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1f5e8c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f5e8cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f5e90: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F5E90u;
    {
        const bool branch_taken_0x1f5e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5E90u;
        // 0x1f5e94: 0xe43825  or          $a3, $a3, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5e90) {
            ctx->pc = 0x1F5F08u;
            goto label_1f5f08;
        }
    }
    ctx->pc = 0x1F5E98u;
    // 0x1f5e98: 0x2631ffec  addiu       $s1, $s1, -0x14
    ctx->pc = 0x1f5e98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967276));
    // 0x1f5e9c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F5E9Cu;
    {
        const bool branch_taken_0x1f5e9c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5E9Cu;
        // 0x1f5ea0: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5e9c) {
            ctx->pc = 0x1F5EC0u;
            goto label_1f5ec0;
        }
    }
    ctx->pc = 0x1F5EA4u;
    // 0x1f5ea4: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1f5ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1f5ea8: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1f5ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f5eac: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1f5eacu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1f5eb0: 0x81d02  srl         $v1, $t0, 20
    ctx->pc = 0x1f5eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 20));
    // 0x1f5eb4: 0x2274004  sllv        $t0, $a3, $s1
    ctx->pc = 0x1f5eb4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 17) & 0x1F));
    // 0x1f5eb8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F5EB8u;
    {
        const bool branch_taken_0x1f5eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5EB8u;
        // 0x1f5ebc: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5eb8) {
            ctx->pc = 0x1F5ECCu;
            goto label_1f5ecc;
        }
    }
    ctx->pc = 0x1F5EC0u;
label_1f5ec0:
    // 0x1f5ec0: 0x81502  srl         $v0, $t0, 20
    ctx->pc = 0x1f5ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 20));
    // 0x1f5ec4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1f5ec4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5ec8: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1f5ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_1f5ecc:
    // 0x1f5ecc: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x1f5eccu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f5ed0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f5ed0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f5ed4: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1f5ed4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f5ed8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f5ed8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f5edc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f5edcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f5ee0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1f5ee0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f5ee4: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1f5ee4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1f5ee8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f5ee8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f5eec: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f5eecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f5ef0: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1f5ef0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f5ef4: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1f5ef4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1f5ef8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f5ef8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f5efc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f5efcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f5f00: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F5F00u;
    {
        const bool branch_taken_0x1f5f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5F00u;
        // 0x1f5f04: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5f00) {
            ctx->pc = 0x1F5F18u;
            goto label_1f5f18;
        }
    }
    ctx->pc = 0x1F5F08u;
label_1f5f08:
    // 0x1f5f08: 0x81502  srl         $v0, $t0, 20
    ctx->pc = 0x1f5f08u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 20));
    // 0x1f5f0c: 0x84300  sll         $t0, $t0, 12
    ctx->pc = 0x1f5f0cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 12));
    // 0x1f5f10: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1f5f10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x1f5f14: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x1f5f14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_1f5f18:
    // 0x1f5f18: 0x2a220014  slti        $v0, $s1, 0x14
    ctx->pc = 0x1f5f18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x1f5f1c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1F5F1Cu;
    {
        const bool branch_taken_0x1f5f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5F1Cu;
        // 0x1f5f20: 0x81502  srl         $v0, $t0, 20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5f1c) {
            ctx->pc = 0x1F5F98u;
            goto label_1f5f98;
        }
    }
    ctx->pc = 0x1F5F24u;
    // 0x1f5f24: 0x2631ffec  addiu       $s1, $s1, -0x14
    ctx->pc = 0x1f5f24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967276));
    // 0x1f5f28: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F5F28u;
    {
        const bool branch_taken_0x1f5f28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5F28u;
        // 0x1f5f2c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5f28) {
            ctx->pc = 0x1F5F50u;
            goto label_1f5f50;
        }
    }
    ctx->pc = 0x1F5F30u;
    // 0x1f5f30: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1f5f30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1f5f34: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1f5f34u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f5f38: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1f5f38u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1f5f3c: 0x81d02  srl         $v1, $t0, 20
    ctx->pc = 0x1f5f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 20));
    // 0x1f5f40: 0x2274004  sllv        $t0, $a3, $s1
    ctx->pc = 0x1f5f40u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 17) & 0x1F));
    // 0x1f5f44: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F5F44u;
    {
        const bool branch_taken_0x1f5f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5F44u;
        // 0x1f5f48: 0xae430008  sw          $v1, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5f44) {
            ctx->pc = 0x1F5F5Cu;
            goto label_1f5f5c;
        }
    }
    ctx->pc = 0x1F5F4Cu;
    // 0x1f5f4c: 0x0  nop
    ctx->pc = 0x1f5f4cu;
    // NOP
label_1f5f50:
    // 0x1f5f50: 0x81502  srl         $v0, $t0, 20
    ctx->pc = 0x1f5f50u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 20));
    // 0x1f5f54: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1f5f54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5f58: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1f5f58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_1f5f5c:
    // 0x1f5f5c: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x1f5f5cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f5f60: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f5f60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f5f64: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1f5f64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f5f68: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f5f68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f5f6c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f5f6cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f5f70: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1f5f70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f5f74: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1f5f74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1f5f78: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f5f78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f5f7c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f5f7cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f5f80: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1f5f80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f5f84: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1f5f84u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1f5f88: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f5f88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f5f8c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f5f8cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f5f90: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F5F90u;
    {
        const bool branch_taken_0x1f5f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5F90u;
        // 0x1f5f94: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5f90) {
            ctx->pc = 0x1F5FA4u;
            goto label_1f5fa4;
        }
    }
    ctx->pc = 0x1F5F98u;
label_1f5f98:
    // 0x1f5f98: 0x84300  sll         $t0, $t0, 12
    ctx->pc = 0x1f5f98u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 12));
    // 0x1f5f9c: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1f5f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1f5fa0: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x1f5fa0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_1f5fa4:
    // 0x1f5fa4: 0x2a22001c  slti        $v0, $s1, 0x1C
    ctx->pc = 0x1f5fa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x1f5fa8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F5FA8u;
    {
        const bool branch_taken_0x1f5fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5FA8u;
        // 0x1f5fac: 0x81702  srl         $v0, $t0, 28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5fa8) {
            ctx->pc = 0x1F6020u;
            goto label_1f6020;
        }
    }
    ctx->pc = 0x1F5FB0u;
    // 0x1f5fb0: 0x2631ffe4  addiu       $s1, $s1, -0x1C
    ctx->pc = 0x1f5fb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967268));
    // 0x1f5fb4: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F5FB4u;
    {
        const bool branch_taken_0x1f5fb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5FB4u;
        // 0x1f5fb8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5fb4) {
            ctx->pc = 0x1F5FD8u;
            goto label_1f5fd8;
        }
    }
    ctx->pc = 0x1F5FBCu;
    // 0x1f5fbc: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1f5fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1f5fc0: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1f5fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f5fc4: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1f5fc4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1f5fc8: 0x81f02  srl         $v1, $t0, 28
    ctx->pc = 0x1f5fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 28));
    // 0x1f5fcc: 0x2274004  sllv        $t0, $a3, $s1
    ctx->pc = 0x1f5fccu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 17) & 0x1F));
    // 0x1f5fd0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F5FD0u;
    {
        const bool branch_taken_0x1f5fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5FD0u;
        // 0x1f5fd4: 0xae43000c  sw          $v1, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5fd0) {
            ctx->pc = 0x1F5FE4u;
            goto label_1f5fe4;
        }
    }
    ctx->pc = 0x1F5FD8u;
label_1f5fd8:
    // 0x1f5fd8: 0x81702  srl         $v0, $t0, 28
    ctx->pc = 0x1f5fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 28));
    // 0x1f5fdc: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1f5fdcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5fe0: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x1f5fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_1f5fe4:
    // 0x1f5fe4: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x1f5fe4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f5fe8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f5fe8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f5fec: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1f5fecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f5ff0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f5ff0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f5ff4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f5ff4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f5ff8: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1f5ff8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f5ffc: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1f5ffcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1f6000: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f6000u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f6004: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f6004u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f6008: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1f6008u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f600c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1f600cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1f6010: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f6010u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f6014: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f6014u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f6018: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F6018u;
    {
        const bool branch_taken_0x1f6018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F601Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6018u;
        // 0x1f601c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6018) {
            ctx->pc = 0x1F602Cu;
            goto label_1f602c;
        }
    }
    ctx->pc = 0x1F6020u;
label_1f6020:
    // 0x1f6020: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x1f6020u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x1f6024: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x1f6024u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x1f6028: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1f6028u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1f602c:
    // 0x1f602c: 0x2a22001c  slti        $v0, $s1, 0x1C
    ctx->pc = 0x1f602cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x1f6030: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F6030u;
    {
        const bool branch_taken_0x1f6030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6030u;
        // 0x1f6034: 0x81702  srl         $v0, $t0, 28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6030) {
            ctx->pc = 0x1F60A8u;
            goto label_1f60a8;
        }
    }
    ctx->pc = 0x1F6038u;
    // 0x1f6038: 0x2631ffe4  addiu       $s1, $s1, -0x1C
    ctx->pc = 0x1f6038u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967268));
    // 0x1f603c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F603Cu;
    {
        const bool branch_taken_0x1f603c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F603Cu;
        // 0x1f6040: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f603c) {
            ctx->pc = 0x1F6060u;
            goto label_1f6060;
        }
    }
    ctx->pc = 0x1F6044u;
    // 0x1f6044: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1f6044u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1f6048: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1f6048u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f604c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1f604cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1f6050: 0x81f02  srl         $v1, $t0, 28
    ctx->pc = 0x1f6050u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 28));
    // 0x1f6054: 0x2274004  sllv        $t0, $a3, $s1
    ctx->pc = 0x1f6054u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 17) & 0x1F));
    // 0x1f6058: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F6058u;
    {
        const bool branch_taken_0x1f6058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F605Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6058u;
        // 0x1f605c: 0xae430010  sw          $v1, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6058) {
            ctx->pc = 0x1F606Cu;
            goto label_1f606c;
        }
    }
    ctx->pc = 0x1F6060u;
label_1f6060:
    // 0x1f6060: 0x81702  srl         $v0, $t0, 28
    ctx->pc = 0x1f6060u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 28));
    // 0x1f6064: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1f6064u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6068: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x1f6068u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_1f606c:
    // 0x1f606c: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x1f606cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f6070: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f6070u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f6074: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1f6074u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f6078: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f6078u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f607c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f607cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f6080: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1f6080u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f6084: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1f6084u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1f6088: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f6088u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f608c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f608cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f6090: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1f6090u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f6094: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1f6094u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1f6098: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f6098u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f609c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f609cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f60a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F60A0u;
    {
        const bool branch_taken_0x1f60a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F60A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F60A0u;
        // 0x1f60a4: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f60a0) {
            ctx->pc = 0x1F60B4u;
            goto label_1f60b4;
        }
    }
    ctx->pc = 0x1F60A8u;
label_1f60a8:
    // 0x1f60a8: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x1f60a8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x1f60ac: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x1f60acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x1f60b0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1f60b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1f60b4:
    // 0x1f60b4: 0x2a22000e  slti        $v0, $s1, 0xE
    ctx->pc = 0x1f60b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x1f60b8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F60B8u;
    {
        const bool branch_taken_0x1f60b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F60BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F60B8u;
        // 0x1f60bc: 0x81382  srl         $v0, $t0, 14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f60b8) {
            ctx->pc = 0x1F6130u;
            goto label_1f6130;
        }
    }
    ctx->pc = 0x1F60C0u;
    // 0x1f60c0: 0x2631fff2  addiu       $s1, $s1, -0xE
    ctx->pc = 0x1f60c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967282));
    // 0x1f60c4: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F60C4u;
    {
        const bool branch_taken_0x1f60c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F60C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F60C4u;
        // 0x1f60c8: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f60c4) {
            ctx->pc = 0x1F60E8u;
            goto label_1f60e8;
        }
    }
    ctx->pc = 0x1F60CCu;
    // 0x1f60cc: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1f60ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1f60d0: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1f60d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f60d4: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1f60d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1f60d8: 0x81b82  srl         $v1, $t0, 14
    ctx->pc = 0x1f60d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 14));
    // 0x1f60dc: 0x2274004  sllv        $t0, $a3, $s1
    ctx->pc = 0x1f60dcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 17) & 0x1F));
    // 0x1f60e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F60E0u;
    {
        const bool branch_taken_0x1f60e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F60E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F60E0u;
        // 0x1f60e4: 0xae430014  sw          $v1, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f60e0) {
            ctx->pc = 0x1F60F4u;
            goto label_1f60f4;
        }
    }
    ctx->pc = 0x1F60E8u;
label_1f60e8:
    // 0x1f60e8: 0x81382  srl         $v0, $t0, 14
    ctx->pc = 0x1f60e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 14));
    // 0x1f60ec: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1f60ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f60f0: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x1f60f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_1f60f4:
    // 0x1f60f4: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x1f60f4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f60f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f60f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f60fc: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1f60fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f6100: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f6100u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f6104: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f6104u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f6108: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1f6108u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f610c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1f610cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1f6110: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f6110u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f6114: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f6114u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f6118: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1f6118u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f611c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1f611cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1f6120: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f6120u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f6124: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f6124u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f6128: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F6128u;
    {
        const bool branch_taken_0x1f6128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F612Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6128u;
        // 0x1f612c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6128) {
            ctx->pc = 0x1F613Cu;
            goto label_1f613c;
        }
    }
    ctx->pc = 0x1F6130u;
label_1f6130:
    // 0x1f6130: 0x84480  sll         $t0, $t0, 18
    ctx->pc = 0x1f6130u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 18));
    // 0x1f6134: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x1f6134u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
    // 0x1f6138: 0x26310012  addiu       $s1, $s1, 0x12
    ctx->pc = 0x1f6138u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 18));
label_1f613c:
    // 0x1f613c: 0x2a22001f  slti        $v0, $s1, 0x1F
    ctx->pc = 0x1f613cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1f6140: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F6140u;
    {
        const bool branch_taken_0x1f6140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6140u;
        // 0x1f6144: 0x817c2  srl         $v0, $t0, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6140) {
            ctx->pc = 0x1F61B8u;
            goto label_1f61b8;
        }
    }
    ctx->pc = 0x1F6148u;
    // 0x1f6148: 0x2631ffe1  addiu       $s1, $s1, -0x1F
    ctx->pc = 0x1f6148u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967265));
    // 0x1f614c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F614Cu;
    {
        const bool branch_taken_0x1f614c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F614Cu;
        // 0x1f6150: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f614c) {
            ctx->pc = 0x1F6170u;
            goto label_1f6170;
        }
    }
    ctx->pc = 0x1F6154u;
    // 0x1f6154: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1f6154u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1f6158: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1f6158u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f615c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1f615cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1f6160: 0x81fc2  srl         $v1, $t0, 31
    ctx->pc = 0x1f6160u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x1f6164: 0x2274004  sllv        $t0, $a3, $s1
    ctx->pc = 0x1f6164u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 17) & 0x1F));
    // 0x1f6168: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F6168u;
    {
        const bool branch_taken_0x1f6168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F616Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6168u;
        // 0x1f616c: 0xae430018  sw          $v1, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6168) {
            ctx->pc = 0x1F617Cu;
            goto label_1f617c;
        }
    }
    ctx->pc = 0x1F6170u;
label_1f6170:
    // 0x1f6170: 0x817c2  srl         $v0, $t0, 31
    ctx->pc = 0x1f6170u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x1f6174: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1f6174u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6178: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x1f6178u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
label_1f617c:
    // 0x1f617c: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x1f617cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f6180: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f6180u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f6184: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1f6184u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f6188: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f6188u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f618c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f618cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f6190: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1f6190u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f6194: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1f6194u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1f6198: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f6198u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f619c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f619cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f61a0: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1f61a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f61a4: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1f61a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1f61a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f61a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f61ac: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f61acu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f61b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F61B0u;
    {
        const bool branch_taken_0x1f61b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F61B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F61B0u;
        // 0x1f61b4: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f61b0) {
            ctx->pc = 0x1F61C4u;
            goto label_1f61c4;
        }
    }
    ctx->pc = 0x1F61B8u;
label_1f61b8:
    // 0x1f61b8: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x1f61b8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x1f61bc: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x1f61bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
    // 0x1f61c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f61c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1f61c4:
    // 0x1f61c4: 0x2a220016  slti        $v0, $s1, 0x16
    ctx->pc = 0x1f61c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x1f61c8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F61C8u;
    {
        const bool branch_taken_0x1f61c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F61CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F61C8u;
        // 0x1f61cc: 0x81582  srl         $v0, $t0, 22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f61c8) {
            ctx->pc = 0x1F6240u;
            goto label_1f6240;
        }
    }
    ctx->pc = 0x1F61D0u;
    // 0x1f61d0: 0x2631ffea  addiu       $s1, $s1, -0x16
    ctx->pc = 0x1f61d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967274));
    // 0x1f61d4: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F61D4u;
    {
        const bool branch_taken_0x1f61d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F61D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F61D4u;
        // 0x1f61d8: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f61d4) {
            ctx->pc = 0x1F61F8u;
            goto label_1f61f8;
        }
    }
    ctx->pc = 0x1F61DCu;
    // 0x1f61dc: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1f61dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1f61e0: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1f61e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f61e4: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1f61e4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1f61e8: 0x81d82  srl         $v1, $t0, 22
    ctx->pc = 0x1f61e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 22));
    // 0x1f61ec: 0x2274004  sllv        $t0, $a3, $s1
    ctx->pc = 0x1f61ecu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 17) & 0x1F));
    // 0x1f61f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F61F0u;
    {
        const bool branch_taken_0x1f61f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F61F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F61F0u;
        // 0x1f61f4: 0xae43001c  sw          $v1, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f61f0) {
            ctx->pc = 0x1F6204u;
            goto label_1f6204;
        }
    }
    ctx->pc = 0x1F61F8u;
label_1f61f8:
    // 0x1f61f8: 0x81582  srl         $v0, $t0, 22
    ctx->pc = 0x1f61f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 22));
    // 0x1f61fc: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1f61fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6200: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x1f6200u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
label_1f6204:
    // 0x1f6204: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x1f6204u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f6208: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f6208u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f620c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1f620cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f6210: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f6210u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f6214: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f6214u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f6218: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1f6218u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f621c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1f621cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1f6220: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f6220u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f6224: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f6224u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f6228: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1f6228u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f622c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1f622cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1f6230: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f6230u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f6234: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f6234u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f6238: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F6238u;
    {
        const bool branch_taken_0x1f6238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F623Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6238u;
        // 0x1f623c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6238) {
            ctx->pc = 0x1F624Cu;
            goto label_1f624c;
        }
    }
    ctx->pc = 0x1F6240u;
label_1f6240:
    // 0x1f6240: 0x84280  sll         $t0, $t0, 10
    ctx->pc = 0x1f6240u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 10));
    // 0x1f6244: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x1f6244u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
    // 0x1f6248: 0x2631000a  addiu       $s1, $s1, 0xA
    ctx->pc = 0x1f6248u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 10));
label_1f624c:
    // 0x1f624c: 0x2a22001f  slti        $v0, $s1, 0x1F
    ctx->pc = 0x1f624cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1f6250: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F6250u;
    {
        const bool branch_taken_0x1f6250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6250u;
        // 0x1f6254: 0x817c2  srl         $v0, $t0, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6250) {
            ctx->pc = 0x1F62C8u;
            goto label_1f62c8;
        }
    }
    ctx->pc = 0x1F6258u;
    // 0x1f6258: 0x2631ffe1  addiu       $s1, $s1, -0x1F
    ctx->pc = 0x1f6258u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967265));
    // 0x1f625c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F625Cu;
    {
        const bool branch_taken_0x1f625c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F625Cu;
        // 0x1f6260: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f625c) {
            ctx->pc = 0x1F6280u;
            goto label_1f6280;
        }
    }
    ctx->pc = 0x1F6264u;
    // 0x1f6264: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1f6264u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1f6268: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1f6268u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f626c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1f626cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1f6270: 0x81fc2  srl         $v1, $t0, 31
    ctx->pc = 0x1f6270u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x1f6274: 0x2274004  sllv        $t0, $a3, $s1
    ctx->pc = 0x1f6274u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 17) & 0x1F));
    // 0x1f6278: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F6278u;
    {
        const bool branch_taken_0x1f6278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F627Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6278u;
        // 0x1f627c: 0xae430020  sw          $v1, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6278) {
            ctx->pc = 0x1F628Cu;
            goto label_1f628c;
        }
    }
    ctx->pc = 0x1F6280u;
label_1f6280:
    // 0x1f6280: 0x817c2  srl         $v0, $t0, 31
    ctx->pc = 0x1f6280u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x1f6284: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1f6284u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6288: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x1f6288u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
label_1f628c:
    // 0x1f628c: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x1f628cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f6290: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f6290u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f6294: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1f6294u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f6298: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f6298u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f629c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f629cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f62a0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1f62a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f62a4: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1f62a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1f62a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f62a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f62ac: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f62acu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f62b0: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1f62b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f62b4: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1f62b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1f62b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f62b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f62bc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f62bcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f62c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F62C0u;
    {
        const bool branch_taken_0x1f62c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F62C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F62C0u;
        // 0x1f62c4: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f62c0) {
            ctx->pc = 0x1F62D4u;
            goto label_1f62d4;
        }
    }
    ctx->pc = 0x1F62C8u;
label_1f62c8:
    // 0x1f62c8: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x1f62c8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x1f62cc: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x1f62ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x1f62d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f62d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1f62d4:
    // 0x1f62d4: 0x2a22001f  slti        $v0, $s1, 0x1F
    ctx->pc = 0x1f62d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1f62d8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F62D8u;
    {
        const bool branch_taken_0x1f62d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F62DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F62D8u;
        // 0x1f62dc: 0x817c2  srl         $v0, $t0, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f62d8) {
            ctx->pc = 0x1F6350u;
            goto label_1f6350;
        }
    }
    ctx->pc = 0x1F62E0u;
    // 0x1f62e0: 0x2631ffe1  addiu       $s1, $s1, -0x1F
    ctx->pc = 0x1f62e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967265));
    // 0x1f62e4: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F62E4u;
    {
        const bool branch_taken_0x1f62e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F62E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F62E4u;
        // 0x1f62e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f62e4) {
            ctx->pc = 0x1F6308u;
            goto label_1f6308;
        }
    }
    ctx->pc = 0x1F62ECu;
    // 0x1f62ec: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1f62ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1f62f0: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1f62f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f62f4: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1f62f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1f62f8: 0x81fc2  srl         $v1, $t0, 31
    ctx->pc = 0x1f62f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x1f62fc: 0x2274004  sllv        $t0, $a3, $s1
    ctx->pc = 0x1f62fcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 17) & 0x1F));
    // 0x1f6300: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F6300u;
    {
        const bool branch_taken_0x1f6300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6300u;
        // 0x1f6304: 0xae430024  sw          $v1, 0x24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6300) {
            ctx->pc = 0x1F6314u;
            goto label_1f6314;
        }
    }
    ctx->pc = 0x1F6308u;
label_1f6308:
    // 0x1f6308: 0x817c2  srl         $v0, $t0, 31
    ctx->pc = 0x1f6308u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x1f630c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1f630cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6310: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x1f6310u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
label_1f6314:
    // 0x1f6314: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x1f6314u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f6318: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f6318u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f631c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1f631cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f6320: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f6320u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f6324: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f6324u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f6328: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1f6328u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f632c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1f632cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1f6330: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f6330u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f6334: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f6334u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f6338: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1f6338u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f633c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1f633cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1f6340: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f6340u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f6344: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f6344u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f6348: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F6348u;
    {
        const bool branch_taken_0x1f6348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F634Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6348u;
        // 0x1f634c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6348) {
            ctx->pc = 0x1F635Cu;
            goto label_1f635c;
        }
    }
    ctx->pc = 0x1F6350u;
label_1f6350:
    // 0x1f6350: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x1f6350u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x1f6354: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x1f6354u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
    // 0x1f6358: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f6358u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1f635c:
    // 0x1f635c: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1f635cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1f6360: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1F6360u;
    {
        const bool branch_taken_0x1f6360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6360u;
        // 0x1f6364: 0x2a22001f  slti        $v0, $s1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6360) {
            ctx->pc = 0x1F63CCu;
            goto label_1f63cc;
        }
    }
    ctx->pc = 0x1F6368u;
    // 0x1f6368: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x1f6368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1f636c: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x1f636cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_1f6370:
    // 0x1f6370: 0x2a220020  slti        $v0, $s1, 0x20
    ctx->pc = 0x1f6370u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1f6374: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F6374u;
    {
        const bool branch_taken_0x1f6374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f6374) {
            ctx->pc = 0x1F6378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6374u;
            // 0x1f6378: 0x84200  sll         $t0, $t0, 8 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F63BCu;
            goto label_1f63bc;
        }
    }
    ctx->pc = 0x1F637Cu;
    // 0x1f637c: 0x2631ffe0  addiu       $s1, $s1, -0x20
    ctx->pc = 0x1f637cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
    // 0x1f6380: 0x2274004  sllv        $t0, $a3, $s1
    ctx->pc = 0x1f6380u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 17) & 0x1F));
    // 0x1f6384: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x1f6384u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f6388: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f6388u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f638c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1f638cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f6390: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f6390u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f6394: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f6394u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f6398: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1f6398u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f639c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1f639cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1f63a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f63a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f63a4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f63a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f63a8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1f63a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f63ac: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1f63acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1f63b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f63b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f63b4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f63b4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f63b8: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1f63b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1f63bc:
    // 0x1f63bc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1f63bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1f63c0: 0x483ffeb  bgezl       $a0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1F63C0u;
    {
        const bool branch_taken_0x1f63c0 = (GPR_S64(ctx, 4) >= 0);
        if (branch_taken_0x1f63c0) {
            ctx->pc = 0x1F63C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F63C0u;
            // 0x1f63c4: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6370;
        }
    }
    ctx->pc = 0x1F63C8u;
    // 0x1f63c8: 0x2a22001f  slti        $v0, $s1, 0x1F
    ctx->pc = 0x1f63c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)31) ? 1 : 0);
label_1f63cc:
    // 0x1f63cc: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1F63CCu;
    {
        const bool branch_taken_0x1f63cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F63D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F63CCu;
        // 0x1f63d0: 0x817c2  srl         $v0, $t0, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f63cc) {
            ctx->pc = 0x1F6408u;
            goto label_1f6408;
        }
    }
    ctx->pc = 0x1F63D4u;
    // 0x1f63d4: 0x2631ffe1  addiu       $s1, $s1, -0x1F
    ctx->pc = 0x1f63d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967265));
    // 0x1f63d8: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F63D8u;
    {
        const bool branch_taken_0x1f63d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F63DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F63D8u;
        // 0x1f63dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f63d8) {
            ctx->pc = 0x1F63F8u;
            goto label_1f63f8;
        }
    }
    ctx->pc = 0x1F63E0u;
    // 0x1f63e0: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1f63e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1f63e4: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1f63e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f63e8: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1f63e8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1f63ec: 0x81fc2  srl         $v1, $t0, 31
    ctx->pc = 0x1f63ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x1f63f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F63F0u;
    {
        const bool branch_taken_0x1f63f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F63F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F63F0u;
        // 0x1f63f4: 0xae430028  sw          $v1, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f63f0) {
            ctx->pc = 0x1F6400u;
            goto label_1f6400;
        }
    }
    ctx->pc = 0x1F63F8u;
label_1f63f8:
    // 0x1f63f8: 0x817c2  srl         $v0, $t0, 31
    ctx->pc = 0x1f63f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x1f63fc: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x1f63fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
label_1f6400:
    // 0x1f6400: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F6400u;
    {
        const bool branch_taken_0x1f6400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6400u;
        // 0x1f6404: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6400) {
            ctx->pc = 0x1F6410u;
            goto label_1f6410;
        }
    }
    ctx->pc = 0x1F6408u;
label_1f6408:
    // 0x1f6408: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f6408u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f640c: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x1f640cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
label_1f6410:
    // 0x1f6410: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x1f6410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x1f6414: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F6414u;
    {
        const bool branch_taken_0x1f6414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6414u;
        // 0x1f6418: 0x2403003f  addiu       $v1, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6414) {
            ctx->pc = 0x1F6444u;
            goto label_1f6444;
        }
    }
    ctx->pc = 0x1F641Cu;
    // 0x1f641c: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x1f641cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_1f6420:
    // 0x1f6420: 0x2a220020  slti        $v0, $s1, 0x20
    ctx->pc = 0x1f6420u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1f6424: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F6424u;
    {
        const bool branch_taken_0x1f6424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6424u;
        // 0x1f6428: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6424) {
            ctx->pc = 0x1F6434u;
            goto label_1f6434;
        }
    }
    ctx->pc = 0x1F642Cu;
    // 0x1f642c: 0x2631ffe0  addiu       $s1, $s1, -0x20
    ctx->pc = 0x1f642cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
    // 0x1f6430: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1f6430u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1f6434:
    // 0x1f6434: 0x0  nop
    ctx->pc = 0x1f6434u;
    // NOP
    // 0x1f6438: 0x0  nop
    ctx->pc = 0x1f6438u;
    // NOP
    // 0x1f643c: 0x463fff8  bgezl       $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F643Cu;
    {
        const bool branch_taken_0x1f643c = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x1f643c) {
            ctx->pc = 0x1F6440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F643Cu;
            // 0x1f6440: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6420;
        }
    }
    ctx->pc = 0x1F6444u;
label_1f6444:
    // 0x1f6444: 0xc07d6f0  jal         func_1F5BC0
    ctx->pc = 0x1F6444u;
    SET_GPR_U32(ctx, 31, 0x1F644Cu);
    ctx->pc = 0x1F6448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6444u;
    // 0x1f6448: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5BC0u, 0x1F6444u, 0x1F644Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F644Cu;
label_1f644c:
    // 0x1f644c: 0xc07d74c  jal         func_1F5D30
    ctx->pc = 0x1F644Cu;
    SET_GPR_U32(ctx, 31, 0x1F6454u);
    ctx->pc = 0x1F6450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F644Cu;
    // 0x1f6450: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5D30u, 0x1F644Cu, 0x1F6454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6454u;
label_1f6454:
    // 0x1f6454: 0x8e4202c4  lw          $v0, 0x2C4($s2)
    ctx->pc = 0x1f6454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 708)));
    // 0x1f6458: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F6458u;
    {
        const bool branch_taken_0x1f6458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f6458) {
            ctx->pc = 0x1F645Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6458u;
            // 0x1f645c: 0x8e4202c8  lw          $v0, 0x2C8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 712)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6470u;
            goto label_1f6470;
        }
    }
    ctx->pc = 0x1F6460u;
    // 0x1f6460: 0x8e420494  lw          $v0, 0x494($s2)
    ctx->pc = 0x1f6460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1172)));
    // 0x1f6464: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f6464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f6468: 0xae420494  sw          $v0, 0x494($s2)
    ctx->pc = 0x1f6468u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1172), GPR_U32(ctx, 2));
    // 0x1f646c: 0x8e4202c8  lw          $v0, 0x2C8($s2)
    ctx->pc = 0x1f646cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 712)));
label_1f6470:
    // 0x1f6470: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F6470u;
    {
        const bool branch_taken_0x1f6470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f6470) {
            ctx->pc = 0x1F6474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6470u;
            // 0x1f6474: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6488u;
            goto label_1f6488;
        }
    }
    ctx->pc = 0x1F6478u;
    // 0x1f6478: 0x8e420494  lw          $v0, 0x494($s2)
    ctx->pc = 0x1f6478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1172)));
    // 0x1f647c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f647cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f6480: 0xae420494  sw          $v0, 0x494($s2)
    ctx->pc = 0x1f6480u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1172), GPR_U32(ctx, 2));
    // 0x1f6484: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1f6484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1f6488:
    // 0x1f6488: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f6488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f648c: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x1f648cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1f6490: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F6490u;
    {
        const bool branch_taken_0x1f6490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f6490) {
            ctx->pc = 0x1F6494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6490u;
            // 0x1f6494: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F64A8u;
            goto label_1f64a8;
        }
    }
    ctx->pc = 0x1F6498u;
    // 0x1f6498: 0x8e420494  lw          $v0, 0x494($s2)
    ctx->pc = 0x1f6498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1172)));
    // 0x1f649c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f649cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f64a0: 0xae420494  sw          $v0, 0x494($s2)
    ctx->pc = 0x1f64a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1172), GPR_U32(ctx, 2));
    // 0x1f64a4: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1f64a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1f64a8:
    // 0x1f64a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f64a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f64ac: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x1f64acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1f64b0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F64B0u;
    {
        const bool branch_taken_0x1f64b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F64B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F64B0u;
        // 0x1f64b4: 0x2131823  subu        $v1, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f64b0) {
            ctx->pc = 0x1F64C4u;
            goto label_1f64c4;
        }
    }
    ctx->pc = 0x1F64B8u;
    // 0x1f64b8: 0x8e420494  lw          $v0, 0x494($s2)
    ctx->pc = 0x1f64b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1172)));
    // 0x1f64bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f64bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f64c0: 0xae420494  sw          $v0, 0x494($s2)
    ctx->pc = 0x1f64c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1172), GPR_U32(ctx, 2));
label_1f64c4:
    // 0x1f64c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f64c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f64c8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1f64c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1f64cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f64ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f64d0: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1f64d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1f64d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f64d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f64d8: 0xae42030c  sw          $v0, 0x30C($s2)
    ctx->pc = 0x1f64d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 780), GPR_U32(ctx, 2));
    // 0x1f64dc: 0x2462ffc7  addiu       $v0, $v1, -0x39
    ctx->pc = 0x1f64dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967239));
    // 0x1f64e0: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x1f64e0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1f64e4: 0x2463ffce  addiu       $v1, $v1, -0x32
    ctx->pc = 0x1f64e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967246));
    // 0x1f64e8: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x1f64e8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1f64ec: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1f64ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1f64f0: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1f64f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x1f64f4: 0xae450308  sw          $a1, 0x308($s2)
    ctx->pc = 0x1f64f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 776), GPR_U32(ctx, 5));
    // 0x1f64f8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1f64f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1f64fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f64fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f6500: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f6500u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f6504: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f6504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f6508: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F650Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6508u;
        // 0x1f650c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6510u;
}
