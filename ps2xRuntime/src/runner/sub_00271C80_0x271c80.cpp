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

// Function: sub_00271C80
// Address: 0x271c80 - 0x272108
void sub_00271C80_0x271c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271C80_0x271c80");
#endif

    switch (ctx->pc) {
        case 0x271cf0u: goto label_271cf0;
        case 0x271f20u: goto label_271f20;
        case 0x271f30u: goto label_271f30;
        case 0x272034u: goto label_272034;
        case 0x272054u: goto label_272054;
        case 0x2720d0u: goto label_2720d0;
        default: break;
    }

    ctx->pc = 0x271c80u;

    // 0x271c80: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x271c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x271c84: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x271c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x271c88: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x271c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x271c8c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x271c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x271c90: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x271c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x271c94: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x271c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x271c98: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x271c98u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271c9c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x271c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x271ca0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x271ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x271ca4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x271ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x271ca8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x271ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x271cac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x271cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x271cb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x271cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x271cb4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x271cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x271cb8: 0xafa600d4  sw          $a2, 0xD4($sp)
    ctx->pc = 0x271cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 6));
    // 0x271cbc: 0xafa800c0  sw          $t0, 0xC0($sp)
    ctx->pc = 0x271cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 8));
    // 0x271cc0: 0xafa900b0  sw          $t1, 0xB0($sp)
    ctx->pc = 0x271cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 9));
    // 0x271cc4: 0xafaa00ac  sw          $t2, 0xAC($sp)
    ctx->pc = 0x271cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 10));
    // 0x271cc8: 0xafa400dc  sw          $a0, 0xDC($sp)
    ctx->pc = 0x271cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 4));
    // 0x271ccc: 0xafa500d8  sw          $a1, 0xD8($sp)
    ctx->pc = 0x271cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 5));
    // 0x271cd0: 0x9084000c  lbu         $a0, 0xC($a0)
    ctx->pc = 0x271cd0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x271cd4: 0x44180a  movz        $v1, $v0, $a0
    ctx->pc = 0x271cd4u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x271cd8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x271cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x271cdc: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x271cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x271ce0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x271ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x271ce4: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x271ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x271ce8: 0xc05e360  jal         func_178D80
    ctx->pc = 0x271CE8u;
    SET_GPR_U32(ctx, 31, 0x271CF0u);
    ctx->pc = 0x271CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271CE8u;
    // 0x271cec: 0x22900  sll         $a1, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x271CE8u, 0x271CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271CF0u;
label_271cf0:
    // 0x271cf0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x271cf0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271cf4: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x271CF4u;
    {
        const bool branch_taken_0x271cf4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x271cf4) {
            ctx->pc = 0x271D08u;
            goto label_271d08;
        }
    }
    ctx->pc = 0x271CFCu;
    // 0x271cfc: 0x100000f6  b           . + 4 + (0xF6 << 2)
    ctx->pc = 0x271CFCu;
    {
        const bool branch_taken_0x271cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271CFCu;
        // 0x271d00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271cfc) {
            ctx->pc = 0x2720D8u;
            goto label_2720d8;
        }
    }
    ctx->pc = 0x271D04u;
    // 0x271d04: 0x0  nop
    ctx->pc = 0x271d04u;
    // NOP
label_271d08:
    // 0x271d08: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x271d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x271d0c: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x271d0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x271d10: 0x8c570000  lw          $s7, 0x0($v0)
    ctx->pc = 0x271d10u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x271d14: 0x8445000a  lh          $a1, 0xA($v0)
    ctx->pc = 0x271d14u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x271d18: 0x84430006  lh          $v1, 0x6($v0)
    ctx->pc = 0x271d18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x271d1c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x271d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x271d20: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x271d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x271d24: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x271d24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x271d28: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x271d28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x271d2c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x271d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x271d30: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x271d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x271d34: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x271d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x271d38: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x271d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x271d3c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x271d3cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x271d40: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x271d40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x271d44: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x271D44u;
    {
        const bool branch_taken_0x271d44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x271D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271D44u;
        // 0x271d48: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271d44) {
            ctx->pc = 0x271D54u;
            goto label_271d54;
        }
    }
    ctx->pc = 0x271D4Cu;
    // 0x271d4c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x271D4Cu;
    {
        const bool branch_taken_0x271d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271D4Cu;
        // 0x271d50: 0x8fa200b0  lw          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271d4c) {
            ctx->pc = 0x271D5Cu;
            goto label_271d5c;
        }
    }
    ctx->pc = 0x271D54u;
label_271d54:
    // 0x271d54: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x271d54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x271d58: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x271d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_271d5c:
    // 0x271d5c: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x271d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x271d60: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x271d60u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x271d64: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x271d64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x271d68: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x271D68u;
    {
        const bool branch_taken_0x271d68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x271d68) {
            ctx->pc = 0x271D78u;
            goto label_271d78;
        }
    }
    ctx->pc = 0x271D70u;
    // 0x271d70: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x271D70u;
    {
        const bool branch_taken_0x271d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271D70u;
        // 0x271d74: 0x8fa200d8  lw          $v0, 0xD8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271d70) {
            ctx->pc = 0x271D80u;
            goto label_271d80;
        }
    }
    ctx->pc = 0x271D78u;
label_271d78:
    // 0x271d78: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x271d78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x271d7c: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x271d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_271d80:
    // 0x271d80: 0x27a900fe  addiu       $t1, $sp, 0xFE
    ctx->pc = 0x271d80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 254));
    // 0x271d84: 0x27a800f6  addiu       $t0, $sp, 0xF6
    ctx->pc = 0x271d84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 246));
    // 0x271d88: 0x27a700ee  addiu       $a3, $sp, 0xEE
    ctx->pc = 0x271d88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 238));
    // 0x271d8c: 0x27a600e6  addiu       $a2, $sp, 0xE6
    ctx->pc = 0x271d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 230));
    // 0x271d90: 0x27a500ea  addiu       $a1, $sp, 0xEA
    ctx->pc = 0x271d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 234));
    // 0x271d94: 0x27a400e2  addiu       $a0, $sp, 0xE2
    ctx->pc = 0x271d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 226));
    // 0x271d98: 0x27a300ec  addiu       $v1, $sp, 0xEC
    ctx->pc = 0x271d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x271d9c: 0x27b500e0  addiu       $s5, $sp, 0xE0
    ctx->pc = 0x271d9cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x271da0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x271da0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271da4: 0x27b200f0  addiu       $s2, $sp, 0xF0
    ctx->pc = 0x271da4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x271da8: 0xa7a200f8  sh          $v0, 0xF8($sp)
    ctx->pc = 0x271da8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 248), (uint16_t)GPR_U32(ctx, 2));
    // 0x271dac: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x271dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x271db0: 0x87ab00f8  lh          $t3, 0xF8($sp)
    ctx->pc = 0x271db0u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x271db4: 0xa7a200f0  sh          $v0, 0xF0($sp)
    ctx->pc = 0x271db4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 240), (uint16_t)GPR_U32(ctx, 2));
    // 0x271db8: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x271db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x271dbc: 0x87ac00f0  lh          $t4, 0xF0($sp)
    ctx->pc = 0x271dbcu;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x271dc0: 0x844a0004  lh          $t2, 0x4($v0)
    ctx->pc = 0x271dc0u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x271dc4: 0x16a6821  addu        $t5, $t3, $t2
    ctx->pc = 0x271dc4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x271dc8: 0x27a200e4  addiu       $v0, $sp, 0xE4
    ctx->pc = 0x271dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x271dcc: 0x8faa00c0  lw          $t2, 0xC0($sp)
    ctx->pc = 0x271dccu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x271dd0: 0xa7ad00fa  sh          $t5, 0xFA($sp)
    ctx->pc = 0x271dd0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 250), (uint16_t)GPR_U32(ctx, 13));
    // 0x271dd4: 0x16a5821  addu        $t3, $t3, $t2
    ctx->pc = 0x271dd4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x271dd8: 0x8faa00dc  lw          $t2, 0xDC($sp)
    ctx->pc = 0x271dd8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x271ddc: 0x854a0008  lh          $t2, 0x8($t2)
    ctx->pc = 0x271ddcu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x271de0: 0x18a5021  addu        $t2, $t4, $t2
    ctx->pc = 0x271de0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
    // 0x271de4: 0xa7aa00f2  sh          $t2, 0xF2($sp)
    ctx->pc = 0x271de4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 242), (uint16_t)GPR_U32(ctx, 10));
    // 0x271de8: 0xa52b0000  sh          $t3, 0x0($t1)
    ctx->pc = 0x271de8u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x271dec: 0x87ab00f0  lh          $t3, 0xF0($sp)
    ctx->pc = 0x271decu;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x271df0: 0x8faa00b0  lw          $t2, 0xB0($sp)
    ctx->pc = 0x271df0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x271df4: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x271df4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x271df8: 0xa50a0000  sh          $t2, 0x0($t0)
    ctx->pc = 0x271df8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x271dfc: 0x852a0000  lh          $t2, 0x0($t1)
    ctx->pc = 0x271dfcu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x271e00: 0x8fa900dc  lw          $t1, 0xDC($sp)
    ctx->pc = 0x271e00u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x271e04: 0x85290006  lh          $t1, 0x6($t1)
    ctx->pc = 0x271e04u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 6)));
    // 0x271e08: 0x1494823  subu        $t1, $t2, $t1
    ctx->pc = 0x271e08u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x271e0c: 0xa7a900fc  sh          $t1, 0xFC($sp)
    ctx->pc = 0x271e0cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 252), (uint16_t)GPR_U32(ctx, 9));
    // 0x271e10: 0x85090000  lh          $t1, 0x0($t0)
    ctx->pc = 0x271e10u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x271e14: 0x8fa800dc  lw          $t0, 0xDC($sp)
    ctx->pc = 0x271e14u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x271e18: 0x8508000a  lh          $t0, 0xA($t0)
    ctx->pc = 0x271e18u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 10)));
    // 0x271e1c: 0x1284023  subu        $t0, $t1, $t0
    ctx->pc = 0x271e1cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x271e20: 0xa7a800f4  sh          $t0, 0xF4($sp)
    ctx->pc = 0x271e20u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 244), (uint16_t)GPR_U32(ctx, 8));
    // 0x271e24: 0x86e80004  lh          $t0, 0x4($s7)
    ctx->pc = 0x271e24u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x271e28: 0xa7a800e8  sh          $t0, 0xE8($sp)
    ctx->pc = 0x271e28u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 232), (uint16_t)GPR_U32(ctx, 8));
    // 0x271e2c: 0x86e80006  lh          $t0, 0x6($s7)
    ctx->pc = 0x271e2cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 6)));
    // 0x271e30: 0x87aa00e8  lh          $t2, 0xE8($sp)
    ctx->pc = 0x271e30u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x271e34: 0xa7a800e0  sh          $t0, 0xE0($sp)
    ctx->pc = 0x271e34u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 224), (uint16_t)GPR_U32(ctx, 8));
    // 0x271e38: 0x8fa800dc  lw          $t0, 0xDC($sp)
    ctx->pc = 0x271e38u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x271e3c: 0x87a900e0  lh          $t1, 0xE0($sp)
    ctx->pc = 0x271e3cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x271e40: 0x85080004  lh          $t0, 0x4($t0)
    ctx->pc = 0x271e40u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x271e44: 0x1484021  addu        $t0, $t2, $t0
    ctx->pc = 0x271e44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x271e48: 0xa7a800ea  sh          $t0, 0xEA($sp)
    ctx->pc = 0x271e48u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 234), (uint16_t)GPR_U32(ctx, 8));
    // 0x271e4c: 0x8fa800dc  lw          $t0, 0xDC($sp)
    ctx->pc = 0x271e4cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x271e50: 0x85080008  lh          $t0, 0x8($t0)
    ctx->pc = 0x271e50u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x271e54: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x271e54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x271e58: 0xa7a800e2  sh          $t0, 0xE2($sp)
    ctx->pc = 0x271e58u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 226), (uint16_t)GPR_U32(ctx, 8));
    // 0x271e5c: 0x86e80008  lh          $t0, 0x8($s7)
    ctx->pc = 0x271e5cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x271e60: 0x1484021  addu        $t0, $t2, $t0
    ctx->pc = 0x271e60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x271e64: 0xa4e80000  sh          $t0, 0x0($a3)
    ctx->pc = 0x271e64u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x271e68: 0x86e9000a  lh          $t1, 0xA($s7)
    ctx->pc = 0x271e68u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 10)));
    // 0x271e6c: 0x87a800e0  lh          $t0, 0xE0($sp)
    ctx->pc = 0x271e6cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x271e70: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x271e70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x271e74: 0xa4c80000  sh          $t0, 0x0($a2)
    ctx->pc = 0x271e74u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x271e78: 0x8fa800dc  lw          $t0, 0xDC($sp)
    ctx->pc = 0x271e78u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x271e7c: 0x87a900e8  lh          $t1, 0xE8($sp)
    ctx->pc = 0x271e7cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x271e80: 0x84eb0000  lh          $t3, 0x0($a3)
    ctx->pc = 0x271e80u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x271e84: 0x850a0006  lh          $t2, 0x6($t0)
    ctx->pc = 0x271e84u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
    // 0x271e88: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x271e88u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x271e8c: 0x87a800e0  lh          $t0, 0xE0($sp)
    ctx->pc = 0x271e8cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x271e90: 0x16a5023  subu        $t2, $t3, $t2
    ctx->pc = 0x271e90u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x271e94: 0xa7aa00ec  sh          $t2, 0xEC($sp)
    ctx->pc = 0x271e94u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 236), (uint16_t)GPR_U32(ctx, 10));
    // 0x271e98: 0x252a0008  addiu       $t2, $t1, 0x8
    ctx->pc = 0x271e98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x271e9c: 0x84cb0000  lh          $t3, 0x0($a2)
    ctx->pc = 0x271e9cu;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x271ea0: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x271ea0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x271ea4: 0x25090008  addiu       $t1, $t0, 0x8
    ctx->pc = 0x271ea4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x271ea8: 0x8fa800dc  lw          $t0, 0xDC($sp)
    ctx->pc = 0x271ea8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x271eac: 0x8508000a  lh          $t0, 0xA($t0)
    ctx->pc = 0x271eacu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 10)));
    // 0x271eb0: 0x1684023  subu        $t0, $t3, $t0
    ctx->pc = 0x271eb0u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
    // 0x271eb4: 0xa7aa00e8  sh          $t2, 0xE8($sp)
    ctx->pc = 0x271eb4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 232), (uint16_t)GPR_U32(ctx, 10));
    // 0x271eb8: 0xa7a800e4  sh          $t0, 0xE4($sp)
    ctx->pc = 0x271eb8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 228), (uint16_t)GPR_U32(ctx, 8));
    // 0x271ebc: 0xa7a900e0  sh          $t1, 0xE0($sp)
    ctx->pc = 0x271ebcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 224), (uint16_t)GPR_U32(ctx, 9));
    // 0x271ec0: 0x84a80000  lh          $t0, 0x0($a1)
    ctx->pc = 0x271ec0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x271ec4: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x271ec4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x271ec8: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x271ec8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x271ecc: 0xa4a80000  sh          $t0, 0x0($a1)
    ctx->pc = 0x271eccu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x271ed0: 0x84850000  lh          $a1, 0x0($a0)
    ctx->pc = 0x271ed0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x271ed4: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x271ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x271ed8: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x271ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x271edc: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x271edcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x271ee0: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x271ee0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x271ee4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x271ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x271ee8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x271ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x271eec: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x271eecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x271ef0: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x271ef0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x271ef4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x271ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x271ef8: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x271ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x271efc: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x271efcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x271f00: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x271f00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x271f04: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x271f04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x271f08: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x271f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x271f0c: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x271f0cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x271f10: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x271f10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x271f14: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x271f14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x271f18: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x271f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x271f1c: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x271f1cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
label_271f20:
    // 0x271f20: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x271f20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271f24: 0x27b100f8  addiu       $s1, $sp, 0xF8
    ctx->pc = 0x271f24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x271f28: 0x27b000e8  addiu       $s0, $sp, 0xE8
    ctx->pc = 0x271f28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x271f2c: 0x0  nop
    ctx->pc = 0x271f2cu;
    // NOP
label_271f30:
    // 0x271f30: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x271f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x271f34: 0x9042000c  lbu         $v0, 0xC($v0)
    ctx->pc = 0x271f34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x271f38: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x271F38u;
    {
        const bool branch_taken_0x271f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271F38u;
        // 0x271f3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271f38) {
            ctx->pc = 0x271F50u;
            goto label_271f50;
        }
    }
    ctx->pc = 0x271F40u;
    // 0x271f40: 0x16620003  bne         $s3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x271F40u;
    {
        const bool branch_taken_0x271f40 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x271f40) {
            ctx->pc = 0x271F50u;
            goto label_271f50;
        }
    }
    ctx->pc = 0x271F48u;
    // 0x271f48: 0x12c20045  beq         $s6, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x271F48u;
    {
        const bool branch_taken_0x271f48 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        if (branch_taken_0x271f48) {
            ctx->pc = 0x272060u;
            goto label_272060;
        }
    }
    ctx->pc = 0x271F50u;
label_271f50:
    // 0x271f50: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x271f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x271f54: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x271f54u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x271f58: 0x3c022028  lui         $v0, 0x2028
    ctx->pc = 0x271f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8232 << 16));
    // 0x271f5c: 0x34430156  ori         $v1, $v0, 0x156
    ctx->pc = 0x271f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)342);
    // 0x271f60: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x271f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x271f64: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x271f64u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    // 0x271f68: 0x34432000  ori         $v1, $v0, 0x2000
    ctx->pc = 0x271f68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x271f6c: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x271f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x271f70: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x271f70u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
    // 0x271f74: 0x8f84811c  lw          $a0, -0x7EE4($gp)
    ctx->pc = 0x271f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934812)));
    // 0x271f78: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x271f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x271f7c: 0xae840010  sw          $a0, 0x10($s4)
    ctx->pc = 0x271f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 4));
    // 0x271f80: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x271f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x271f84: 0xa6840014  sh          $a0, 0x14($s4)
    ctx->pc = 0x271f84u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 20), (uint16_t)GPR_U32(ctx, 4));
    // 0x271f88: 0xa6800016  sh          $zero, 0x16($s4)
    ctx->pc = 0x271f88u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x271f8c: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x271f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x271f90: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x271f90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x271f94: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x271f94u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    // 0x271f98: 0xa282000f  sb          $v0, 0xF($s4)
    ctx->pc = 0x271f98u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x271f9c: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x271f9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x271fa0: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x271fa0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x271fa4: 0x24630700  addiu       $v1, $v1, 0x700
    ctx->pc = 0x271fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1792));
    // 0x271fa8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x271fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x271fac: 0x24420f20  addiu       $v0, $v0, 0xF20
    ctx->pc = 0x271facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3872));
    // 0x271fb0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x271fb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x271fb4: 0x214c0  sll         $v0, $v0, 19
    ctx->pc = 0x271fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 19));
    // 0x271fb8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x271fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x271fbc: 0xae820020  sw          $v0, 0x20($s4)
    ctx->pc = 0x271fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
    // 0x271fc0: 0xae9e0024  sw          $fp, 0x24($s4)
    ctx->pc = 0x271fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 30));
    // 0x271fc4: 0x86250002  lh          $a1, 0x2($s1)
    ctx->pc = 0x271fc4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x271fc8: 0x86240000  lh          $a0, 0x0($s1)
    ctx->pc = 0x271fc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x271fcc: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x271fccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x271fd0: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x271fd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x271fd4: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x271fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x271fd8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x271fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x271fdc: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x271fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x271fe0: 0x21500  sll         $v0, $v0, 20
    ctx->pc = 0x271fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x271fe4: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x271fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x271fe8: 0xae820028  sw          $v0, 0x28($s4)
    ctx->pc = 0x271fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
    // 0x271fec: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x271fecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x271ff0: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x271ff0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x271ff4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x271ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x271ff8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x271ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x271ffc: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x271ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
    // 0x272000: 0x86a20002  lh          $v0, 0x2($s5)
    ctx->pc = 0x272000u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x272004: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x272004u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x272008: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x272008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x27200c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x27200cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x272010: 0xae82001c  sw          $v0, 0x1C($s4)
    ctx->pc = 0x272010u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 2));
    // 0x272014: 0x8f828898  lw          $v0, -0x7768($gp)
    ctx->pc = 0x272014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936728)));
    // 0x272018: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x272018u;
    {
        const bool branch_taken_0x272018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x272018) {
            ctx->pc = 0x272040u;
            goto label_272040;
        }
    }
    ctx->pc = 0x272020u;
    // 0x272020: 0x8f868118  lw          $a2, -0x7EE8($gp)
    ctx->pc = 0x272020u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934808)));
    // 0x272024: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x272024u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x272028: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x272028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x27202c: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x27202Cu;
    SET_GPR_U32(ctx, 31, 0x272034u);
    ctx->pc = 0x272030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27202Cu;
    // 0x272030: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x27202Cu, 0x272034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272034u;
label_272034:
    // 0x272034: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x272034u;
    {
        const bool branch_taken_0x272034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272034) {
            ctx->pc = 0x272058u;
            goto label_272058;
        }
    }
    ctx->pc = 0x27203Cu;
    // 0x27203c: 0x0  nop
    ctx->pc = 0x27203cu;
    // NOP
label_272040:
    // 0x272040: 0x8f868118  lw          $a2, -0x7EE8($gp)
    ctx->pc = 0x272040u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934808)));
    // 0x272044: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x272044u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x272048: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x272048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27204c: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x27204Cu;
    SET_GPR_U32(ctx, 31, 0x272054u);
    ctx->pc = 0x272050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27204Cu;
    // 0x272050: 0x2484cc40  addiu       $a0, $a0, -0x33C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x27204Cu, 0x272054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272054u;
label_272054:
    // 0x272054: 0x0  nop
    ctx->pc = 0x272054u;
    // NOP
label_272058:
    // 0x272058: 0x26940030  addiu       $s4, $s4, 0x30
    ctx->pc = 0x272058u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x27205c: 0x0  nop
    ctx->pc = 0x27205cu;
    // NOP
label_272060:
    // 0x272060: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x272060u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x272064: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x272064u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x272068: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x272068u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x27206c: 0x1440ffb0  bnez        $v0, . + 4 + (-0x50 << 2)
    ctx->pc = 0x27206Cu;
    {
        const bool branch_taken_0x27206c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27206Cu;
        // 0x272070: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27206c) {
            ctx->pc = 0x271F30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_271f30;
        }
    }
    ctx->pc = 0x272074u;
    // 0x272074: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x272074u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x272078: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x272078u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x27207c: 0x2ac20003  slti        $v0, $s6, 0x3
    ctx->pc = 0x27207cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x272080: 0x1440ffa7  bnez        $v0, . + 4 + (-0x59 << 2)
    ctx->pc = 0x272080u;
    {
        const bool branch_taken_0x272080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272080u;
        // 0x272084: 0x26b50002  addiu       $s5, $s5, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272080) {
            ctx->pc = 0x271F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_271f20;
        }
    }
    ctx->pc = 0x272088u;
    // 0x272088: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x272088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x27208c: 0x9042000d  lbu         $v0, 0xD($v0)
    ctx->pc = 0x27208cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13)));
    // 0x272090: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x272090u;
    {
        const bool branch_taken_0x272090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x272090) {
            ctx->pc = 0x2720D0u;
            goto label_2720d0;
        }
    }
    ctx->pc = 0x272098u;
    // 0x272098: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x272098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x27209c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x27209cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2720a0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2720a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2720a4: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x2720a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2720a8: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x2720a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x2720ac: 0x2487ffff  addiu       $a3, $a0, -0x1
    ctx->pc = 0x2720acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2720b0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2720b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2720b4: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x2720b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2720b8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2720b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2720bc: 0x2448ffff  addiu       $t0, $v0, -0x1
    ctx->pc = 0x2720bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2720c0: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x2720c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2720c4: 0x8c490010  lw          $t1, 0x10($v0)
    ctx->pc = 0x2720c4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2720c8: 0xc09c4e8  jal         func_2713A0
    ctx->pc = 0x2720C8u;
    SET_GPR_U32(ctx, 31, 0x2720D0u);
    ctx->pc = 0x2720CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2720C8u;
    // 0x2720cc: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2713A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2713A0u, 0x2720C8u, 0x2720D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2720D0u;
label_2720d0:
    // 0x2720d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2720d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2720d4: 0x0  nop
    ctx->pc = 0x2720d4u;
    // NOP
label_2720d8:
    // 0x2720d8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2720d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2720dc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2720dcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2720e0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2720e0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2720e4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2720e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2720e8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2720e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2720ec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2720ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2720f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2720f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2720f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2720f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2720f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2720f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2720fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2720fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x272100: 0x3e00008  jr          $ra
    ctx->pc = 0x272100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272100u;
        // 0x272104: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x272108u;
}
