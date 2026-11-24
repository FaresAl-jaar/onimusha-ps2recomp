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

// Function: sub_00254CC0
// Address: 0x254cc0 - 0x255048
void sub_00254CC0_0x254cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254CC0_0x254cc0");
#endif

    switch (ctx->pc) {
        case 0x254dd0u: goto label_254dd0;
        case 0x254e48u: goto label_254e48;
        case 0x254fd4u: goto label_254fd4;
        case 0x254fe8u: goto label_254fe8;
        case 0x254ffcu: goto label_254ffc;
        default: break;
    }

    ctx->pc = 0x254cc0u;

    // 0x254cc0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x254cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x254cc4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x254cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x254cc8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x254cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x254ccc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x254cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x254cd0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x254cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x254cd4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x254cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x254cd8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x254cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x254cdc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x254cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x254ce0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x254ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x254ce4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x254ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x254ce8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x254ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x254cec: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x254cecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
    // 0x254cf0: 0xafa600bc  sw          $a2, 0xBC($sp)
    ctx->pc = 0x254cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 6));
    // 0x254cf4: 0xafa400dc  sw          $a0, 0xDC($sp)
    ctx->pc = 0x254cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 4));
    // 0x254cf8: 0x90e20001  lbu         $v0, 0x1($a3)
    ctx->pc = 0x254cf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x254cfc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x254cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x254d00: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x254d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x254d04: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x254d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x254d08: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x254d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x254d0c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x254d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x254d10: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x254D10u;
    {
        const bool branch_taken_0x254d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254D10u;
        // 0x254d14: 0xe0a82d  daddu       $s5, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254d10) {
            ctx->pc = 0x254D20u;
            goto label_254d20;
        }
    }
    ctx->pc = 0x254D18u;
    // 0x254d18: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x254D18u;
    {
        const bool branch_taken_0x254d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254D18u;
        // 0x254d1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254d18) {
            ctx->pc = 0x255018u;
            goto label_255018;
        }
    }
    ctx->pc = 0x254D20u;
label_254d20:
    // 0x254d20: 0x96b00012  lhu         $s0, 0x12($s5)
    ctx->pc = 0x254d20u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 18)));
    // 0x254d24: 0x96b10010  lhu         $s1, 0x10($s5)
    ctx->pc = 0x254d24u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x254d28: 0x96b60014  lhu         $s6, 0x14($s5)
    ctx->pc = 0x254d28u;
    SET_GPR_ZE32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x254d2c: 0x96b70016  lhu         $s7, 0x16($s5)
    ctx->pc = 0x254d2cu;
    SET_GPR_ZE32(ctx, 23, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 22)));
    // 0x254d30: 0x2301025  or          $v0, $s1, $s0
    ctx->pc = 0x254d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 16));
    // 0x254d34: 0x2c21025  or          $v0, $s6, $v0
    ctx->pc = 0x254d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) | GPR_U64(ctx, 2));
    // 0x254d38: 0x2e21025  or          $v0, $s7, $v0
    ctx->pc = 0x254d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) | GPR_U64(ctx, 2));
    // 0x254d3c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x254D3Cu;
    {
        const bool branch_taken_0x254d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x254d3c) {
            ctx->pc = 0x254D58u;
            goto label_254d58;
        }
    }
    ctx->pc = 0x254D44u;
    // 0x254d44: 0x96b3000a  lhu         $s3, 0xA($s5)
    ctx->pc = 0x254d44u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 10)));
    // 0x254d48: 0x96b2000c  lhu         $s2, 0xC($s5)
    ctx->pc = 0x254d48u;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x254d4c: 0x96be000e  lhu         $fp, 0xE($s5)
    ctx->pc = 0x254d4cu;
    SET_GPR_ZE32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 14)));
    // 0x254d50: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x254D50u;
    {
        const bool branch_taken_0x254d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254D50u;
        // 0x254d54: 0x96b40008  lhu         $s4, 0x8($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254d50) {
            ctx->pc = 0x254D78u;
            goto label_254d78;
        }
    }
    ctx->pc = 0x254D58u;
label_254d58:
    // 0x254d58: 0x96b40008  lhu         $s4, 0x8($s5)
    ctx->pc = 0x254d58u;
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x254d5c: 0x96b3000a  lhu         $s3, 0xA($s5)
    ctx->pc = 0x254d5cu;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 10)));
    // 0x254d60: 0x96b2000c  lhu         $s2, 0xC($s5)
    ctx->pc = 0x254d60u;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x254d64: 0x96b0000e  lhu         $s0, 0xE($s5)
    ctx->pc = 0x254d64u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 14)));
    // 0x254d68: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x254d68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254d6c: 0x260f02d  daddu       $fp, $s3, $zero
    ctx->pc = 0x254d6cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254d70: 0x240b02d  daddu       $s6, $s2, $zero
    ctx->pc = 0x254d70u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254d74: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x254d74u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_254d78:
    // 0x254d78: 0x3104ffff  andi        $a0, $t0, 0xFFFF
    ctx->pc = 0x254d78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x254d7c: 0x2841021  addu        $v0, $s4, $a0
    ctx->pc = 0x254d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x254d80: 0x3123ffff  andi        $v1, $t1, 0xFFFF
    ctx->pc = 0x254d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x254d84: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x254d84u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x254d88: 0x24050168  addiu       $a1, $zero, 0x168
    ctx->pc = 0x254d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x254d8c: 0x2631021  addu        $v0, $s3, $v1
    ctx->pc = 0x254d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x254d90: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x254d90u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x254d94: 0x2441021  addu        $v0, $s2, $a0
    ctx->pc = 0x254d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x254d98: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x254d98u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x254d9c: 0x3c31021  addu        $v0, $fp, $v1
    ctx->pc = 0x254d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x254da0: 0x305effff  andi        $fp, $v0, 0xFFFF
    ctx->pc = 0x254da0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x254da4: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x254da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x254da8: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x254da8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x254dac: 0x2c41021  addu        $v0, $s6, $a0
    ctx->pc = 0x254dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x254db0: 0x3056ffff  andi        $s6, $v0, 0xFFFF
    ctx->pc = 0x254db0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x254db4: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x254db4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x254db8: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x254db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x254dbc: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x254dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x254dc0: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x254dc0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x254dc4: 0x2e31021  addu        $v0, $s7, $v1
    ctx->pc = 0x254dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x254dc8: 0xc05e360  jal         func_178D80
    ctx->pc = 0x254DC8u;
    SET_GPR_U32(ctx, 31, 0x254DD0u);
    ctx->pc = 0x254DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254DC8u;
    // 0x254dcc: 0x3057ffff  andi        $s7, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x254DC8u, 0x254DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254DD0u;
label_254dd0:
    // 0x254dd0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x254DD0u;
    {
        const bool branch_taken_0x254dd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x254dd0) {
            ctx->pc = 0x254DE0u;
            goto label_254de0;
        }
    }
    ctx->pc = 0x254DD8u;
    // 0x254dd8: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x254DD8u;
    {
        const bool branch_taken_0x254dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254DD8u;
        // 0x254ddc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254dd8) {
            ctx->pc = 0x255018u;
            goto label_255018;
        }
    }
    ctx->pc = 0x254DE0u;
label_254de0:
    // 0x254de0: 0x96a40006  lhu         $a0, 0x6($s5)
    ctx->pc = 0x254de0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x254de4: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x254de4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x254de8: 0x3229ffff  andi        $t1, $s1, 0xFFFF
    ctx->pc = 0x254de8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x254dec: 0x326effff  andi        $t6, $s3, 0xFFFF
    ctx->pc = 0x254decu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x254df0: 0x324bffff  andi        $t3, $s2, 0xFFFF
    ctx->pc = 0x254df0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x254df4: 0x3c11004e  lui         $s1, 0x4E
    ctx->pc = 0x254df4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)78 << 16));
    // 0x254df8: 0x24630960  addiu       $v1, $v1, 0x960
    ctx->pc = 0x254df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2400));
    // 0x254dfc: 0x320affff  andi        $t2, $s0, 0xFFFF
    ctx->pc = 0x254dfcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x254e00: 0x8faf00bc  lw          $t7, 0xBC($sp)
    ctx->pc = 0x254e00u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x254e04: 0x328dffff  andi        $t5, $s4, 0xFFFF
    ctx->pc = 0x254e04u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x254e08: 0x33ccffff  andi        $t4, $fp, 0xFFFF
    ctx->pc = 0x254e08u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
    // 0x254e0c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x254e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x254e10: 0x32e8ffff  andi        $t0, $s7, 0xFFFF
    ctx->pc = 0x254e10u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
    // 0x254e14: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x254e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x254e18: 0x32c7ffff  andi        $a3, $s6, 0xFFFF
    ctx->pc = 0x254e18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
    // 0x254e1c: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x254e1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x254e20: 0x263107e0  addiu       $s1, $s1, 0x7E0
    ctx->pc = 0x254e20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2016));
    // 0x254e24: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x254e24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254e28: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x254e28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254e2c: 0x3c034438  lui         $v1, 0x4438
    ctx->pc = 0x254e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17464 << 16));
    // 0x254e30: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x254e30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x254e34: 0x34650354  ori         $a1, $v1, 0x354
    ctx->pc = 0x254e34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)852);
    // 0x254e38: 0x3c165014  lui         $s6, 0x5014
    ctx->pc = 0x254e38u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)20500 << 16));
    // 0x254e3c: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x254e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x254e40: 0x34642000  ori         $a0, $v1, 0x2000
    ctx->pc = 0x254e40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x254e44: 0x0  nop
    ctx->pc = 0x254e44u;
    // NOP
label_254e48:
    // 0x254e48: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x254e48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
    // 0x254e4c: 0xae450004  sw          $a1, 0x4($s2)
    ctx->pc = 0x254e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 5));
    // 0x254e50: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x254e50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x254e54: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x254e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x254e58: 0x2e740005  sltiu       $s4, $s3, 0x5
    ctx->pc = 0x254e58u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x254e5c: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x254e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
    // 0x254e60: 0x92a30002  lbu         $v1, 0x2($s5)
    ctx->pc = 0x254e60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x254e64: 0xa6430014  sh          $v1, 0x14($s2)
    ctx->pc = 0x254e64u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x254e68: 0x92a30003  lbu         $v1, 0x3($s5)
    ctx->pc = 0x254e68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 3)));
    // 0x254e6c: 0xa6430016  sh          $v1, 0x16($s2)
    ctx->pc = 0x254e6cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 22), (uint16_t)GPR_U32(ctx, 3));
    // 0x254e70: 0xae500008  sw          $s0, 0x8($s2)
    ctx->pc = 0x254e70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 16));
    // 0x254e74: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x254e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x254e78: 0x36d01414  ori         $s0, $s6, 0x1414
    ctx->pc = 0x254e78u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)5140);
    // 0x254e7c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x254e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x254e80: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x254e80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x254e84: 0x96a30004  lhu         $v1, 0x4($s5)
    ctx->pc = 0x254e84u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x254e88: 0xa243000f  sb          $v1, 0xF($s2)
    ctx->pc = 0x254e88u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 15), (uint8_t)GPR_U32(ctx, 3));
    // 0x254e8c: 0x86370000  lh          $s7, 0x0($s1)
    ctx->pc = 0x254e8cu;
    SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x254e90: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x254e90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x254e94: 0x1b7b821  addu        $s7, $t5, $s7
    ctx->pc = 0x254e94u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 23)));
    // 0x254e98: 0x26f70700  addiu       $s7, $s7, 0x700
    ctx->pc = 0x254e98u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1792));
    // 0x254e9c: 0x1c31821  addu        $v1, $t6, $v1
    ctx->pc = 0x254e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
    // 0x254ea0: 0x17b900  sll         $s7, $s7, 4
    ctx->pc = 0x254ea0u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x254ea4: 0x24630f20  addiu       $v1, $v1, 0xF20
    ctx->pc = 0x254ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3872));
    // 0x254ea8: 0x32f7ffff  andi        $s7, $s7, 0xFFFF
    ctx->pc = 0x254ea8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
    // 0x254eac: 0x31cc0  sll         $v1, $v1, 19
    ctx->pc = 0x254eacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 19));
    // 0x254eb0: 0x2e31825  or          $v1, $s7, $v1
    ctx->pc = 0x254eb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) | GPR_U64(ctx, 3));
    // 0x254eb4: 0xae430020  sw          $v1, 0x20($s2)
    ctx->pc = 0x254eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
    // 0x254eb8: 0xae4f0024  sw          $t7, 0x24($s2)
    ctx->pc = 0x254eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 15));
    // 0x254ebc: 0x86370004  lh          $s7, 0x4($s1)
    ctx->pc = 0x254ebcu;
    SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x254ec0: 0x86230006  lh          $v1, 0x6($s1)
    ctx->pc = 0x254ec0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x254ec4: 0x177b821  addu        $s7, $t3, $s7
    ctx->pc = 0x254ec4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 23)));
    // 0x254ec8: 0x26f70700  addiu       $s7, $s7, 0x700
    ctx->pc = 0x254ec8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1792));
    // 0x254ecc: 0x1831821  addu        $v1, $t4, $v1
    ctx->pc = 0x254eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x254ed0: 0x17b900  sll         $s7, $s7, 4
    ctx->pc = 0x254ed0u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x254ed4: 0x24630f20  addiu       $v1, $v1, 0xF20
    ctx->pc = 0x254ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3872));
    // 0x254ed8: 0x32f7ffff  andi        $s7, $s7, 0xFFFF
    ctx->pc = 0x254ed8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
    // 0x254edc: 0x31cc0  sll         $v1, $v1, 19
    ctx->pc = 0x254edcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 19));
    // 0x254ee0: 0x2e31825  or          $v1, $s7, $v1
    ctx->pc = 0x254ee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) | GPR_U64(ctx, 3));
    // 0x254ee4: 0xae430028  sw          $v1, 0x28($s2)
    ctx->pc = 0x254ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
    // 0x254ee8: 0xae4f002c  sw          $t7, 0x2C($s2)
    ctx->pc = 0x254ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 15));
    // 0x254eec: 0x86370008  lh          $s7, 0x8($s1)
    ctx->pc = 0x254eecu;
    SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x254ef0: 0x8623000a  lh          $v1, 0xA($s1)
    ctx->pc = 0x254ef0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x254ef4: 0x137b821  addu        $s7, $t1, $s7
    ctx->pc = 0x254ef4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 23)));
    // 0x254ef8: 0x26f70700  addiu       $s7, $s7, 0x700
    ctx->pc = 0x254ef8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1792));
    // 0x254efc: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x254efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x254f00: 0x17b900  sll         $s7, $s7, 4
    ctx->pc = 0x254f00u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x254f04: 0x24630f20  addiu       $v1, $v1, 0xF20
    ctx->pc = 0x254f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3872));
    // 0x254f08: 0x32f7ffff  andi        $s7, $s7, 0xFFFF
    ctx->pc = 0x254f08u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
    // 0x254f0c: 0x31cc0  sll         $v1, $v1, 19
    ctx->pc = 0x254f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 19));
    // 0x254f10: 0x2e31825  or          $v1, $s7, $v1
    ctx->pc = 0x254f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) | GPR_U64(ctx, 3));
    // 0x254f14: 0xae430038  sw          $v1, 0x38($s2)
    ctx->pc = 0x254f14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 3));
    // 0x254f18: 0xae4f003c  sw          $t7, 0x3C($s2)
    ctx->pc = 0x254f18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 15));
    // 0x254f1c: 0x8637000c  lh          $s7, 0xC($s1)
    ctx->pc = 0x254f1cu;
    SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x254f20: 0x8623000e  lh          $v1, 0xE($s1)
    ctx->pc = 0x254f20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x254f24: 0xf7b821  addu        $s7, $a3, $s7
    ctx->pc = 0x254f24u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 23)));
    // 0x254f28: 0x26f70700  addiu       $s7, $s7, 0x700
    ctx->pc = 0x254f28u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1792));
    // 0x254f2c: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x254f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x254f30: 0x17b900  sll         $s7, $s7, 4
    ctx->pc = 0x254f30u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x254f34: 0x24630f20  addiu       $v1, $v1, 0xF20
    ctx->pc = 0x254f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3872));
    // 0x254f38: 0x32f7ffff  andi        $s7, $s7, 0xFFFF
    ctx->pc = 0x254f38u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
    // 0x254f3c: 0x31cc0  sll         $v1, $v1, 19
    ctx->pc = 0x254f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 19));
    // 0x254f40: 0x2e31825  or          $v1, $s7, $v1
    ctx->pc = 0x254f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) | GPR_U64(ctx, 3));
    // 0x254f44: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x254f44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x254f48: 0xae430040  sw          $v1, 0x40($s2)
    ctx->pc = 0x254f48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 3));
    // 0x254f4c: 0xae4f0044  sw          $t7, 0x44($s2)
    ctx->pc = 0x254f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 15));
    // 0x254f50: 0x96b7001a  lhu         $s7, 0x1A($s5)
    ctx->pc = 0x254f50u;
    SET_GPR_ZE32(ctx, 23, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 26)));
    // 0x254f54: 0x96a30018  lhu         $v1, 0x18($s5)
    ctx->pc = 0x254f54u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x254f58: 0x8faf00bc  lw          $t7, 0xBC($sp)
    ctx->pc = 0x254f58u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x254f5c: 0x17bc00  sll         $s7, $s7, 16
    ctx->pc = 0x254f5cu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 23), 16));
    // 0x254f60: 0x771825  or          $v1, $v1, $s7
    ctx->pc = 0x254f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 23));
    // 0x254f64: 0xae430018  sw          $v1, 0x18($s2)
    ctx->pc = 0x254f64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 3));
    // 0x254f68: 0x25efffff  addiu       $t7, $t7, -0x1
    ctx->pc = 0x254f68u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x254f6c: 0x96a3001a  lhu         $v1, 0x1A($s5)
    ctx->pc = 0x254f6cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 26)));
    // 0x254f70: 0x96b7001c  lhu         $s7, 0x1C($s5)
    ctx->pc = 0x254f70u;
    SET_GPR_ZE32(ctx, 23, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x254f74: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x254f74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x254f78: 0x2e31825  or          $v1, $s7, $v1
    ctx->pc = 0x254f78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) | GPR_U64(ctx, 3));
    // 0x254f7c: 0xae43001c  sw          $v1, 0x1C($s2)
    ctx->pc = 0x254f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
    // 0x254f80: 0x96a3001e  lhu         $v1, 0x1E($s5)
    ctx->pc = 0x254f80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 30)));
    // 0x254f84: 0x96b70018  lhu         $s7, 0x18($s5)
    ctx->pc = 0x254f84u;
    SET_GPR_ZE32(ctx, 23, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x254f88: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x254f88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x254f8c: 0x2e31825  or          $v1, $s7, $v1
    ctx->pc = 0x254f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) | GPR_U64(ctx, 3));
    // 0x254f90: 0xae430030  sw          $v1, 0x30($s2)
    ctx->pc = 0x254f90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 3));
    // 0x254f94: 0x96a3001e  lhu         $v1, 0x1E($s5)
    ctx->pc = 0x254f94u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 30)));
    // 0x254f98: 0x96b7001c  lhu         $s7, 0x1C($s5)
    ctx->pc = 0x254f98u;
    SET_GPR_ZE32(ctx, 23, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x254f9c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x254f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x254fa0: 0x2e31825  or          $v1, $s7, $v1
    ctx->pc = 0x254fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) | GPR_U64(ctx, 3));
    // 0x254fa4: 0xae430034  sw          $v1, 0x34($s2)
    ctx->pc = 0x254fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 3));
    // 0x254fa8: 0x1680ffa7  bnez        $s4, . + 4 + (-0x59 << 2)
    ctx->pc = 0x254FA8u;
    {
        const bool branch_taken_0x254fa8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x254FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254FA8u;
        // 0x254fac: 0x26520048  addiu       $s2, $s2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254fa8) {
            ctx->pc = 0x254E48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_254e48;
        }
    }
    ctx->pc = 0x254FB0u;
    // 0x254fb0: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x254fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x254fb4: 0x90631110  lbu         $v1, 0x1110($v1)
    ctx->pc = 0x254fb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4368)));
    // 0x254fb8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x254FB8u;
    {
        const bool branch_taken_0x254fb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x254fb8) {
            ctx->pc = 0x254FE0u;
            goto label_254fe0;
        }
    }
    ctx->pc = 0x254FC0u;
    // 0x254fc0: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x254fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x254fc4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x254fc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254fc8: 0x8fa700c0  lw          $a3, 0xC0($sp)
    ctx->pc = 0x254fc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x254fcc: 0xc0954bc  jal         func_2552F0
    ctx->pc = 0x254FCCu;
    SET_GPR_U32(ctx, 31, 0x254FD4u);
    ctx->pc = 0x254FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254FCCu;
    // 0x254fd0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2552F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2552F0u, 0x254FCCu, 0x254FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254FD4u;
label_254fd4:
    // 0x254fd4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x254FD4u;
    {
        const bool branch_taken_0x254fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x254fd4) {
            ctx->pc = 0x255010u;
            goto label_255010;
        }
    }
    ctx->pc = 0x254FDCu;
    // 0x254fdc: 0x0  nop
    ctx->pc = 0x254fdcu;
    // NOP
label_254fe0:
    // 0x254fe0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x254fe0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254fe4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x254fe4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_254fe8:
    // 0x254fe8: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x254fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x254fec: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x254fecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x254ff0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x254ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254ff4: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x254FF4u;
    SET_GPR_U32(ctx, 31, 0x254FFCu);
    ctx->pc = 0x254FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254FF4u;
    // 0x254ff8: 0x2484cc60  addiu       $a0, $a0, -0x33A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x254FF4u, 0x254FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254FFCu;
label_254ffc:
    // 0x254ffc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x254ffcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x255000: 0x2e020005  sltiu       $v0, $s0, 0x5
    ctx->pc = 0x255000u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x255004: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x255004u;
    {
        const bool branch_taken_0x255004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x255008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255004u;
        // 0x255008: 0x26310048  addiu       $s1, $s1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255004) {
            ctx->pc = 0x254FE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_254fe8;
        }
    }
    ctx->pc = 0x25500Cu;
    // 0x25500c: 0x0  nop
    ctx->pc = 0x25500cu;
    // NOP
label_255010:
    // 0x255010: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x255010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x255014: 0x0  nop
    ctx->pc = 0x255014u;
    // NOP
label_255018:
    // 0x255018: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x255018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25501c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x25501cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x255020: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x255020u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x255024: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x255024u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x255028: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x255028u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25502c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x25502cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x255030: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x255030u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x255034: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x255034u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x255038: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x255038u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25503c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25503cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x255040: 0x3e00008  jr          $ra
    ctx->pc = 0x255040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255040u;
        // 0x255044: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x255048u;
}
