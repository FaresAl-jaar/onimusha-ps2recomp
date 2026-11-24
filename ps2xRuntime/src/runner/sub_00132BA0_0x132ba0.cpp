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

// Function: sub_00132BA0
// Address: 0x132ba0 - 0x1332c0
void sub_00132BA0_0x132ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132BA0_0x132ba0");
#endif

    switch (ctx->pc) {
        case 0x132c00u: goto label_132c00;
        case 0x132c30u: goto label_132c30;
        case 0x132c70u: goto label_132c70;
        case 0x132ca8u: goto label_132ca8;
        case 0x132cd8u: goto label_132cd8;
        case 0x132d0cu: goto label_132d0c;
        case 0x132d24u: goto label_132d24;
        case 0x132dbcu: goto label_132dbc;
        case 0x132dd4u: goto label_132dd4;
        case 0x132e50u: goto label_132e50;
        case 0x132f98u: goto label_132f98;
        case 0x132fc0u: goto label_132fc0;
        case 0x132ffcu: goto label_132ffc;
        case 0x13303cu: goto label_13303c;
        case 0x13306cu: goto label_13306c;
        case 0x133220u: goto label_133220;
        case 0x133274u: goto label_133274;
        default: break;
    }

    ctx->pc = 0x132ba0u;

    // 0x132ba0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x132ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x132ba4: 0x310200f0  andi        $v0, $t0, 0xF0
    ctx->pc = 0x132ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)240);
    // 0x132ba8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x132ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x132bac: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x132bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x132bb0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x132bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x132bb4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x132bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x132bb8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x132bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x132bbc: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x132bbcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132bc0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x132bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x132bc4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x132bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x132bc8: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x132bc8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132bcc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x132bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x132bd0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x132bd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132bd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x132bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x132bd8: 0x26d20010  addiu       $s2, $s6, 0x10
    ctx->pc = 0x132bd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x132bdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x132bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x132be0: 0xafa4010c  sw          $a0, 0x10C($sp)
    ctx->pc = 0x132be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 4));
    // 0x132be4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x132be4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132be8: 0xa3a200d0  sb          $v0, 0xD0($sp)
    ctx->pc = 0x132be8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 208), (uint8_t)GPR_U32(ctx, 2));
    // 0x132bec: 0x90be000b  lbu         $fp, 0xB($a1)
    ctx->pc = 0x132becu;
    SET_GPR_ZE32(ctx, 30, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 11)));
    // 0x132bf0: 0x1e1100  sll         $v0, $fp, 4
    ctx->pc = 0x132bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x132bf4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x132bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132bf8: 0xc04cad8  jal         func_132B60
    ctx->pc = 0x132BF8u;
    SET_GPR_U32(ctx, 31, 0x132C00u);
    ctx->pc = 0x132BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132BF8u;
    // 0x132bfc: 0x2428821  addu        $s1, $s2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132B60u, 0x132BF8u, 0x132C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132C00u;
label_132c00:
    // 0x132c00: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x132c00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x132c04: 0x8fa4010c  lw          $a0, 0x10C($sp)
    ctx->pc = 0x132c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x132c08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x132c08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132c0c: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x132c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x132c10: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x132c10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x132c14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x132c14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132c18: 0x131a3c  dsll32      $v1, $s3, 8
    ctx->pc = 0x132c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 8));
    // 0x132c1c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x132c1cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132c20: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x132c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x132c24: 0x629825  or          $s3, $v1, $v0
    ctx->pc = 0x132c24u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x132c28: 0xc04cd94  jal         func_133650
    ctx->pc = 0x132C28u;
    SET_GPR_U32(ctx, 31, 0x132C30u);
    ctx->pc = 0x132C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132C28u;
    // 0x132c2c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133650u, 0x132C28u, 0x132C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132C30u;
label_132c30:
    // 0x132c30: 0xafa20108  sw          $v0, 0x108($sp)
    ctx->pc = 0x132c30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
    // 0x132c34: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x132c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x132c38: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x132C38u;
    {
        const bool branch_taken_0x132c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x132C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132C38u;
        // 0x132c3c: 0x3283000f  andi        $v1, $s4, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x132c38) {
            ctx->pc = 0x132DB0u;
            goto label_132db0;
        }
    }
    ctx->pc = 0x132C40u;
    // 0x132c40: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x132c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x132c44: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x132C44u;
    {
        const bool branch_taken_0x132c44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x132c44) {
            ctx->pc = 0x132C58u;
            goto label_132c58;
        }
    }
    ctx->pc = 0x132C4Cu;
    // 0x132c4c: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x132c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x132c50: 0x1000018f  b           . + 4 + (0x18F << 2)
    ctx->pc = 0x132C50u;
    {
        const bool branch_taken_0x132c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132C50u;
        // 0x132c54: 0x8c420010  lw          $v0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132c50) {
            ctx->pc = 0x133290u;
            goto label_133290;
        }
    }
    ctx->pc = 0x132C58u;
label_132c58:
    // 0x132c58: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x132c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x132c5c: 0x8c550010  lw          $s5, 0x10($v0)
    ctx->pc = 0x132c5cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x132c60: 0x96b4000e  lhu         $s4, 0xE($s5)
    ctx->pc = 0x132c60u;
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 14)));
    // 0x132c64: 0x33c200ff  andi        $v0, $fp, 0xFF
    ctx->pc = 0x132c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
    // 0x132c68: 0x18400183  blez        $v0, . + 4 + (0x183 << 2)
    ctx->pc = 0x132C68u;
    {
        const bool branch_taken_0x132c68 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x132C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132C68u;
        // 0x132c6c: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132c68) {
            ctx->pc = 0x133278u;
            goto label_133278;
        }
    }
    ctx->pc = 0x132C70u;
label_132c70:
    // 0x132c70: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x132c70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x132c74: 0xa2a2000b  sb          $v0, 0xB($s5)
    ctx->pc = 0x132c74u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 11), (uint8_t)GPR_U32(ctx, 2));
    // 0x132c78: 0x92420009  lbu         $v0, 0x9($s2)
    ctx->pc = 0x132c78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x132c7c: 0xa2a2000c  sb          $v0, 0xC($s5)
    ctx->pc = 0x132c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x132c80: 0x9242000a  lbu         $v0, 0xA($s2)
    ctx->pc = 0x132c80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x132c84: 0xa2a2000a  sb          $v0, 0xA($s5)
    ctx->pc = 0x132c84u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x132c88: 0x93a200d0  lbu         $v0, 0xD0($sp)
    ctx->pc = 0x132c88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x132c8c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x132C8Cu;
    {
        const bool branch_taken_0x132c8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x132c8c) {
            ctx->pc = 0x132D00u;
            goto label_132d00;
        }
    }
    ctx->pc = 0x132C94u;
    // 0x132c94: 0x9242000c  lbu         $v0, 0xC($s2)
    ctx->pc = 0x132c94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x132c98: 0x262082a  slt         $at, $s3, $v0
    ctx->pc = 0x132c98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x132c9c: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x132C9Cu;
    {
        const bool branch_taken_0x132c9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x132c9c) {
            ctx->pc = 0x132D10u;
            goto label_132d10;
        }
    }
    ctx->pc = 0x132CA4u;
    // 0x132ca4: 0x0  nop
    ctx->pc = 0x132ca4u;
    // NOP
label_132ca8:
    // 0x132ca8: 0xa6b4000e  sh          $s4, 0xE($s5)
    ctx->pc = 0x132ca8u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 14), (uint16_t)GPR_U32(ctx, 20));
    // 0x132cac: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x132cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x132cb0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x132cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x132cb4: 0x9245000a  lbu         $a1, 0xA($s2)
    ctx->pc = 0x132cb4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x132cb8: 0x96a6000e  lhu         $a2, 0xE($s5)
    ctx->pc = 0x132cb8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 14)));
    // 0x132cbc: 0x92270009  lbu         $a3, 0x9($s1)
    ctx->pc = 0x132cbcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x132cc0: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x132cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x132cc4: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x132cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x132cc8: 0x2c34021  addu        $t0, $s6, $v1
    ctx->pc = 0x132cc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x132ccc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x132cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x132cd0: 0xc04cf8c  jal         func_133E30
    ctx->pc = 0x132CD0u;
    SET_GPR_U32(ctx, 31, 0x132CD8u);
    ctx->pc = 0x132CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132CD0u;
    // 0x132cd4: 0x24440930  addiu       $a0, $v0, 0x930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133E30u, 0x132CD0u, 0x132CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132CD8u;
label_132cd8:
    // 0x132cd8: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x132cd8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x132cdc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x132cdcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x132ce0: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x132ce0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x132ce4: 0xa2a2000d  sb          $v0, 0xD($s5)
    ctx->pc = 0x132ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 13), (uint8_t)GPR_U32(ctx, 2));
    // 0x132ce8: 0x9242000c  lbu         $v0, 0xC($s2)
    ctx->pc = 0x132ce8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x132cec: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x132cecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x132cf0: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x132CF0u;
    {
        const bool branch_taken_0x132cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x132CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132CF0u;
        // 0x132cf4: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132cf0) {
            ctx->pc = 0x132CA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_132ca8;
        }
    }
    ctx->pc = 0x132CF8u;
    // 0x132cf8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x132CF8u;
    {
        const bool branch_taken_0x132cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132cf8) {
            ctx->pc = 0x132D10u;
            goto label_132d10;
        }
    }
    ctx->pc = 0x132D00u;
label_132d00:
    // 0x132d00: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x132d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132d04: 0xc04d16c  jal         func_1345B0
    ctx->pc = 0x132D04u;
    SET_GPR_U32(ctx, 31, 0x132D0Cu);
    ctx->pc = 0x132D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132D04u;
    // 0x132d08: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1345B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1345B0u, 0x132D04u, 0x132D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132D0Cu;
label_132d0c:
    // 0x132d0c: 0x0  nop
    ctx->pc = 0x132d0cu;
    // NOP
label_132d10:
    // 0x132d10: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x132d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x132d14: 0x96a60008  lhu         $a2, 0x8($s5)
    ctx->pc = 0x132d14u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x132d18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x132d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132d1c: 0xc04d070  jal         func_1341C0
    ctx->pc = 0x132D1Cu;
    SET_GPR_U32(ctx, 31, 0x132D24u);
    ctx->pc = 0x132D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132D1Cu;
    // 0x132d20: 0x2c22821  addu        $a1, $s6, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1341C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1341C0u, 0x132D1Cu, 0x132D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132D24u;
label_132d24:
    // 0x132d24: 0x92aa000b  lbu         $t2, 0xB($s5)
    ctx->pc = 0x132d24u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 11)));
    // 0x132d28: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x132d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x132d2c: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x132d2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x132d30: 0x92a8000a  lbu         $t0, 0xA($s5)
    ctx->pc = 0x132d30u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 10)));
    // 0x132d34: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x132d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x132d38: 0x92a6000c  lbu         $a2, 0xC($s5)
    ctx->pc = 0x132d38u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x132d3c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x132d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x132d40: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x132d40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132d44: 0x70021b89  pcpyld      $v1, $zero, $v0
    ctx->pc = 0x132d44u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x132d48: 0xdea40000  ld          $a0, 0x0($s5)
    ctx->pc = 0x132d48u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x132d4c: 0x96a90008  lhu         $t1, 0x8($s5)
    ctx->pc = 0x132d4cu;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x132d50: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x132d50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x132d54: 0x1471004  sllv        $v0, $a3, $t2
    ctx->pc = 0x132d54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x132d58: 0xa3eb8  dsll        $a3, $t2, 26
    ctx->pc = 0x132d58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) << 26);
    // 0x132d5c: 0x84538  dsll        $t0, $t0, 20
    ctx->pc = 0x132d5cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 20);
    // 0x132d60: 0x25183  sra         $t2, $v0, 6
    ctx->pc = 0x132d60u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 2), 6));
    // 0x132d64: 0x637b8  dsll        $a2, $a2, 30
    ctx->pc = 0x132d64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 30);
    // 0x132d68: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x132d68u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x132d6c: 0x27c2ffff  addiu       $v0, $fp, -0x1
    ctx->pc = 0x132d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x132d70: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x132d70u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x132d74: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x132d74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x132d78: 0xa53b8  dsll        $t2, $t2, 14
    ctx->pc = 0x132d78u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 14);
    // 0x132d7c: 0x305e00ff  andi        $fp, $v0, 0xFF
    ctx->pc = 0x132d7cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x132d80: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x132d80u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x132d84: 0x1092025  or          $a0, $t0, $t1
    ctx->pc = 0x132d84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x132d88: 0xe41025  or          $v0, $a3, $a0
    ctx->pc = 0x132d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x132d8c: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x132d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x132d90: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x132d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x132d94: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x132d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x132d98: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x132d98u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x132d9c: 0x1fc0ffb4  bgtz        $fp, . + 4 + (-0x4C << 2)
    ctx->pc = 0x132D9Cu;
    {
        const bool branch_taken_0x132d9c = (GPR_S64(ctx, 30) > 0);
        ctx->pc = 0x132DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132D9Cu;
        // 0x132da0: 0x26b50018  addiu       $s5, $s5, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132d9c) {
            ctx->pc = 0x132C70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_132c70;
        }
    }
    ctx->pc = 0x132DA4u;
    // 0x132da4: 0x10000134  b           . + 4 + (0x134 << 2)
    ctx->pc = 0x132DA4u;
    {
        const bool branch_taken_0x132da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132da4) {
            ctx->pc = 0x133278u;
            goto label_133278;
        }
    }
    ctx->pc = 0x132DACu;
    // 0x132dac: 0x0  nop
    ctx->pc = 0x132dacu;
    // NOP
label_132db0:
    // 0x132db0: 0x8fa4010c  lw          $a0, 0x10C($sp)
    ctx->pc = 0x132db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x132db4: 0xc04cf14  jal         func_133C50
    ctx->pc = 0x132DB4u;
    SET_GPR_U32(ctx, 31, 0x132DBCu);
    ctx->pc = 0x132DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132DB4u;
    // 0x132db8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133C50u, 0x132DB4u, 0x132DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132DBCu;
label_132dbc:
    // 0x132dbc: 0xafa20108  sw          $v0, 0x108($sp)
    ctx->pc = 0x132dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
    // 0x132dc0: 0x33c500ff  andi        $a1, $fp, 0xFF
    ctx->pc = 0x132dc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
    // 0x132dc4: 0xa4450006  sh          $a1, 0x6($v0)
    ctx->pc = 0x132dc4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 5));
    // 0x132dc8: 0x8fa4010c  lw          $a0, 0x10C($sp)
    ctx->pc = 0x132dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x132dcc: 0xc04cf28  jal         func_133CA0
    ctx->pc = 0x132DCCu;
    SET_GPR_U32(ctx, 31, 0x132DD4u);
    ctx->pc = 0x132DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132DCCu;
    // 0x132dd0: 0xac530000  sw          $s3, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133CA0u, 0x132DCCu, 0x132DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132DD4u;
label_132dd4:
    // 0x132dd4: 0x3283000f  andi        $v1, $s4, 0xF
    ctx->pc = 0x132dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)15);
    // 0x132dd8: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x132dd8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x132ddc: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x132ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x132de0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x132de0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132de4: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x132de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x132de8: 0xac740010  sw          $s4, 0x10($v1)
    ctx->pc = 0x132de8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 20));
    // 0x132dec: 0x1e1840  sll         $v1, $fp, 1
    ctx->pc = 0x132decu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
    // 0x132df0: 0x7e2021  addu        $a0, $v1, $fp
    ctx->pc = 0x132df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x132df4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x132df4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x132df8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x132df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x132dfc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x132dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x132e00: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x132e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
    // 0x132e04: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x132e04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x132e08: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x132e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x132e0c: 0x1043011e  beq         $v0, $v1, . + 4 + (0x11E << 2)
    ctx->pc = 0x132E0Cu;
    {
        const bool branch_taken_0x132e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x132E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132E0Cu;
        // 0x132e10: 0xafb400e0  sw          $s4, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132e0c) {
            ctx->pc = 0x133288u;
            goto label_133288;
        }
    }
    ctx->pc = 0x132E14u;
    // 0x132e14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x132e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132e18: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x132E18u;
    {
        const bool branch_taken_0x132e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x132e18) {
            ctx->pc = 0x132E30u;
            goto label_132e30;
        }
    }
    ctx->pc = 0x132E20u;
    // 0x132e20: 0x10400119  beqz        $v0, . + 4 + (0x119 << 2)
    ctx->pc = 0x132E20u;
    {
        const bool branch_taken_0x132e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132e20) {
            ctx->pc = 0x133288u;
            goto label_133288;
        }
    }
    ctx->pc = 0x132E28u;
    // 0x132e28: 0x10000117  b           . + 4 + (0x117 << 2)
    ctx->pc = 0x132E28u;
    {
        const bool branch_taken_0x132e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132e28) {
            ctx->pc = 0x133288u;
            goto label_133288;
        }
    }
    ctx->pc = 0x132E30u;
label_132e30:
    // 0x132e30: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x132e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x132e34: 0x2c21821  addu        $v1, $s6, $v0
    ctx->pc = 0x132e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x132e38: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x132e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x132e3c: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x132e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x132e40: 0x92c3000e  lbu         $v1, 0xE($s6)
    ctx->pc = 0x132e40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 14)));
    // 0x132e44: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x132e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x132e48: 0x1000010f  b           . + 4 + (0x10F << 2)
    ctx->pc = 0x132E48u;
    {
        const bool branch_taken_0x132e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132E48u;
        // 0x132e4c: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132e48) {
            ctx->pc = 0x133288u;
            goto label_133288;
        }
    }
    ctx->pc = 0x132E50u;
label_132e50:
    // 0x132e50: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x132e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x132e54: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x132e54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x132e58: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x132e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x132e5c: 0x2c412000  sltiu       $at, $v0, 0x2000
    ctx->pc = 0x132e5cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8192) ? 1 : 0);
    // 0x132e60: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x132E60u;
    {
        const bool branch_taken_0x132e60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x132e60) {
            ctx->pc = 0x132ED0u;
            goto label_132ed0;
        }
    }
    ctx->pc = 0x132E68u;
    // 0x132e68: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x132e68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x132e6c: 0x22202  srl         $a0, $v0, 8
    ctx->pc = 0x132e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x132e70: 0x2487ffff  addiu       $a3, $a0, -0x1
    ctx->pc = 0x132e70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x132e74: 0xe01827  not         $v1, $a3
    ctx->pc = 0x132e74u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 7) | GPR_U64(ctx, 0)));
    // 0x132e78: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x132e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x132e7c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x132E7Cu;
    {
        const bool branch_taken_0x132e7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x132E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132E7Cu;
        // 0x132e80: 0x623024  and         $a2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132e7c) {
            ctx->pc = 0x132E98u;
            goto label_132e98;
        }
    }
    ctx->pc = 0x132E84u;
    // 0x132e84: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x132e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x132e88: 0x2c410021  sltiu       $at, $v0, 0x21
    ctx->pc = 0x132e88u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
    // 0x132e8c: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x132E8Cu;
    {
        const bool branch_taken_0x132e8c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x132e8c) {
            ctx->pc = 0x132EB0u;
            goto label_132eb0;
        }
    }
    ctx->pc = 0x132E94u;
    // 0x132e94: 0x0  nop
    ctx->pc = 0x132e94u;
    // NOP
label_132e98:
    // 0x132e98: 0x8e170008  lw          $s7, 0x8($s0)
    ctx->pc = 0x132e98u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x132e9c: 0xae17000c  sw          $s7, 0xC($s0)
    ctx->pc = 0x132e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 23));
    // 0x132ea0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x132ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x132ea4: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x132ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x132ea8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x132EA8u;
    {
        const bool branch_taken_0x132ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132EA8u;
        // 0x132eac: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132ea8) {
            ctx->pc = 0x132EC0u;
            goto label_132ec0;
        }
    }
    ctx->pc = 0x132EB0u;
label_132eb0:
    // 0x132eb0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x132eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x132eb4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x132eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x132eb8: 0x62b824  and         $s7, $v1, $v0
    ctx->pc = 0x132eb8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x132ebc: 0x0  nop
    ctx->pc = 0x132ebcu;
    // NOP
label_132ec0:
    // 0x132ec0: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x132ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x132ec4: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x132ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x132ec8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x132EC8u;
    {
        const bool branch_taken_0x132ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132EC8u;
        // 0x132ecc: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132ec8) {
            ctx->pc = 0x132ED8u;
            goto label_132ed8;
        }
    }
    ctx->pc = 0x132ED0u;
label_132ed0:
    // 0x132ed0: 0x8e170008  lw          $s7, 0x8($s0)
    ctx->pc = 0x132ed0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x132ed4: 0x0  nop
    ctx->pc = 0x132ed4u;
    // NOP
label_132ed8:
    // 0x132ed8: 0x9242000b  lbu         $v0, 0xB($s2)
    ctx->pc = 0x132ed8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11)));
    // 0x132edc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x132EDCu;
    {
        const bool branch_taken_0x132edc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132edc) {
            ctx->pc = 0x132F10u;
            goto label_132f10;
        }
    }
    ctx->pc = 0x132EE4u;
    // 0x132ee4: 0x92830010  lbu         $v1, 0x10($s4)
    ctx->pc = 0x132ee4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x132ee8: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x132ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x132eec: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x132EECu;
    {
        const bool branch_taken_0x132eec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x132EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132EECu;
        // 0x132ef0: 0x34620002  ori         $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x132eec) {
            ctx->pc = 0x132EF8u;
            goto label_132ef8;
        }
    }
    ctx->pc = 0x132EF4u;
    // 0x132ef4: 0xa2820010  sb          $v0, 0x10($s4)
    ctx->pc = 0x132ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 16), (uint8_t)GPR_U32(ctx, 2));
label_132ef8:
    // 0x132ef8: 0x8fb400f0  lw          $s4, 0xF0($sp)
    ctx->pc = 0x132ef8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x132efc: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x132efcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132f00: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x132f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
    // 0x132f04: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x132F04u;
    {
        const bool branch_taken_0x132f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132F04u;
        // 0x132f08: 0xafa200f0  sw          $v0, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132f04) {
            ctx->pc = 0x132F20u;
            goto label_132f20;
        }
    }
    ctx->pc = 0x132F0Cu;
    // 0x132f0c: 0x0  nop
    ctx->pc = 0x132f0cu;
    // NOP
label_132f10:
    // 0x132f10: 0x8fb400e0  lw          $s4, 0xE0($sp)
    ctx->pc = 0x132f10u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x132f14: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x132f14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132f18: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x132f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x132f1c: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x132f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_132f20:
    // 0x132f20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x132f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132f24: 0xa2820010  sb          $v0, 0x10($s4)
    ctx->pc = 0x132f24u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x132f28: 0x9242000b  lbu         $v0, 0xB($s2)
    ctx->pc = 0x132f28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11)));
    // 0x132f2c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x132F2Cu;
    {
        const bool branch_taken_0x132f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132f2c) {
            ctx->pc = 0x132F40u;
            goto label_132f40;
        }
    }
    ctx->pc = 0x132F34u;
    // 0x132f34: 0x92820010  lbu         $v0, 0x10($s4)
    ctx->pc = 0x132f34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x132f38: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x132f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x132f3c: 0xa2820010  sb          $v0, 0x10($s4)
    ctx->pc = 0x132f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 16), (uint8_t)GPR_U32(ctx, 2));
label_132f40:
    // 0x132f40: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x132f40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x132f44: 0xa282000b  sb          $v0, 0xB($s4)
    ctx->pc = 0x132f44u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 11), (uint8_t)GPR_U32(ctx, 2));
    // 0x132f48: 0x92420009  lbu         $v0, 0x9($s2)
    ctx->pc = 0x132f48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x132f4c: 0xa282000c  sb          $v0, 0xC($s4)
    ctx->pc = 0x132f4cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x132f50: 0x9242000a  lbu         $v0, 0xA($s2)
    ctx->pc = 0x132f50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x132f54: 0xa282000a  sb          $v0, 0xA($s4)
    ctx->pc = 0x132f54u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x132f58: 0xa2800011  sb          $zero, 0x11($s4)
    ctx->pc = 0x132f58u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 17), (uint8_t)GPR_U32(ctx, 0));
    // 0x132f5c: 0xa6800012  sh          $zero, 0x12($s4)
    ctx->pc = 0x132f5cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x132f60: 0xa6970008  sh          $s7, 0x8($s4)
    ctx->pc = 0x132f60u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 8), (uint16_t)GPR_U32(ctx, 23));
    // 0x132f64: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x132f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x132f68: 0xae820014  sw          $v0, 0x14($s4)
    ctx->pc = 0x132f68u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
    // 0x132f6c: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x132f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x132f70: 0xa682000e  sh          $v0, 0xE($s4)
    ctx->pc = 0x132f70u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x132f74: 0xa295000d  sb          $s5, 0xD($s4)
    ctx->pc = 0x132f74u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 13), (uint8_t)GPR_U32(ctx, 21));
    // 0x132f78: 0x93a200d0  lbu         $v0, 0xD0($sp)
    ctx->pc = 0x132f78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x132f7c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x132F7Cu;
    {
        const bool branch_taken_0x132f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x132f7c) {
            ctx->pc = 0x132FF0u;
            goto label_132ff0;
        }
    }
    ctx->pc = 0x132F84u;
    // 0x132f84: 0x9242000c  lbu         $v0, 0xC($s2)
    ctx->pc = 0x132f84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x132f88: 0x262082a  slt         $at, $s3, $v0
    ctx->pc = 0x132f88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x132f8c: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x132F8Cu;
    {
        const bool branch_taken_0x132f8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x132f8c) {
            ctx->pc = 0x133000u;
            goto label_133000;
        }
    }
    ctx->pc = 0x132F94u;
    // 0x132f94: 0x0  nop
    ctx->pc = 0x132f94u;
    // NOP
label_132f98:
    // 0x132f98: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x132f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x132f9c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x132f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x132fa0: 0x9245000a  lbu         $a1, 0xA($s2)
    ctx->pc = 0x132fa0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x132fa4: 0x92260009  lbu         $a2, 0x9($s1)
    ctx->pc = 0x132fa4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x132fa8: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x132fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x132fac: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x132facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x132fb0: 0x2c33821  addu        $a3, $s6, $v1
    ctx->pc = 0x132fb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x132fb4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x132fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x132fb8: 0xc04cf48  jal         func_133D20
    ctx->pc = 0x132FB8u;
    SET_GPR_U32(ctx, 31, 0x132FC0u);
    ctx->pc = 0x132FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132FB8u;
    // 0x132fbc: 0x24440930  addiu       $a0, $v0, 0x930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133D20u, 0x132FB8u, 0x132FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132FC0u;
label_132fc0:
    // 0x132fc0: 0xa682000e  sh          $v0, 0xE($s4)
    ctx->pc = 0x132fc0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x132fc4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x132fc4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x132fc8: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x132fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x132fcc: 0x92350009  lbu         $s5, 0x9($s1)
    ctx->pc = 0x132fccu;
    SET_GPR_ZE32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x132fd0: 0xa295000d  sb          $s5, 0xD($s4)
    ctx->pc = 0x132fd0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 13), (uint8_t)GPR_U32(ctx, 21));
    // 0x132fd4: 0x9242000c  lbu         $v0, 0xC($s2)
    ctx->pc = 0x132fd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x132fd8: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x132fd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x132fdc: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x132FDCu;
    {
        const bool branch_taken_0x132fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x132FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132FDCu;
        // 0x132fe0: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132fdc) {
            ctx->pc = 0x132F98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_132f98;
        }
    }
    ctx->pc = 0x132FE4u;
    // 0x132fe4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x132FE4u;
    {
        const bool branch_taken_0x132fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132fe4) {
            ctx->pc = 0x133000u;
            goto label_133000;
        }
    }
    ctx->pc = 0x132FECu;
    // 0x132fec: 0x0  nop
    ctx->pc = 0x132fecu;
    // NOP
label_132ff0:
    // 0x132ff0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x132ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132ff4: 0xc04d16c  jal         func_1345B0
    ctx->pc = 0x132FF4u;
    SET_GPR_U32(ctx, 31, 0x132FFCu);
    ctx->pc = 0x132FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132FF4u;
    // 0x132ff8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1345B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1345B0u, 0x132FF4u, 0x132FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132FFCu;
label_132ffc:
    // 0x132ffc: 0x0  nop
    ctx->pc = 0x132ffcu;
    // NOP
label_133000:
    // 0x133000: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x133000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x133004: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x133004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x133008: 0x10430019  beq         $v0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x133008u;
    {
        const bool branch_taken_0x133008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x13300Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133008u;
        // 0x13300c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133008) {
            ctx->pc = 0x133070u;
            goto label_133070;
        }
    }
    ctx->pc = 0x133010u;
    // 0x133010: 0x1043000d  beq         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x133010u;
    {
        const bool branch_taken_0x133010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x133010) {
            ctx->pc = 0x133048u;
            goto label_133048;
        }
    }
    ctx->pc = 0x133018u;
    // 0x133018: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x133018u;
    {
        const bool branch_taken_0x133018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x133018) {
            ctx->pc = 0x133028u;
            goto label_133028;
        }
    }
    ctx->pc = 0x133020u;
    // 0x133020: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x133020u;
    {
        const bool branch_taken_0x133020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133020) {
            ctx->pc = 0x133070u;
            goto label_133070;
        }
    }
    ctx->pc = 0x133028u;
label_133028:
    // 0x133028: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x133028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13302c: 0x96860008  lhu         $a2, 0x8($s4)
    ctx->pc = 0x13302cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x133030: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x133030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133034: 0xc04d070  jal         func_1341C0
    ctx->pc = 0x133034u;
    SET_GPR_U32(ctx, 31, 0x13303Cu);
    ctx->pc = 0x133038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133034u;
    // 0x133038: 0x2c22821  addu        $a1, $s6, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1341C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1341C0u, 0x133034u, 0x13303Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13303Cu;
label_13303c:
    // 0x13303c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x13303Cu;
    {
        const bool branch_taken_0x13303c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13303c) {
            ctx->pc = 0x133070u;
            goto label_133070;
        }
    }
    ctx->pc = 0x133044u;
    // 0x133044: 0x0  nop
    ctx->pc = 0x133044u;
    // NOP
label_133048:
    // 0x133048: 0x92c2000d  lbu         $v0, 0xD($s6)
    ctx->pc = 0x133048u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 13)));
    // 0x13304c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13304Cu;
    {
        const bool branch_taken_0x13304c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13304c) {
            ctx->pc = 0x133070u;
            goto label_133070;
        }
    }
    ctx->pc = 0x133054u;
    // 0x133054: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x133054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x133058: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x133058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13305c: 0x8fa4010c  lw          $a0, 0x10C($sp)
    ctx->pc = 0x13305cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x133060: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x133060u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133064: 0xc04ce50  jal         func_133940
    ctx->pc = 0x133064u;
    SET_GPR_U32(ctx, 31, 0x13306Cu);
    ctx->pc = 0x133068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133064u;
    // 0x133068: 0x2c23821  addu        $a3, $s6, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133940u, 0x133064u, 0x13306Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13306Cu;
label_13306c:
    // 0x13306c: 0x0  nop
    ctx->pc = 0x13306cu;
    // NOP
label_133070:
    // 0x133070: 0x9243000b  lbu         $v1, 0xB($s2)
    ctx->pc = 0x133070u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11)));
    // 0x133074: 0x1060003e  beqz        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x133074u;
    {
        const bool branch_taken_0x133074 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x133074) {
            ctx->pc = 0x133170u;
            goto label_133170;
        }
    }
    ctx->pc = 0x13307Cu;
    // 0x13307c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x13307cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x133080: 0xa043fff9  sb          $v1, -0x7($v0)
    ctx->pc = 0x133080u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294967289), (uint8_t)GPR_U32(ctx, 3));
    // 0x133084: 0x9243000b  lbu         $v1, 0xB($s2)
    ctx->pc = 0x133084u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11)));
    // 0x133088: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x133088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13308c: 0x1062002c  beq         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x13308Cu;
    {
        const bool branch_taken_0x13308c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x133090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13308Cu;
        // 0x133090: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13308c) {
            ctx->pc = 0x133140u;
            goto label_133140;
        }
    }
    ctx->pc = 0x133094u;
    // 0x133094: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x133094u;
    {
        const bool branch_taken_0x133094 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x133098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133094u;
        // 0x133098: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133094) {
            ctx->pc = 0x133110u;
            goto label_133110;
        }
    }
    ctx->pc = 0x13309Cu;
    // 0x13309c: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13309Cu;
    {
        const bool branch_taken_0x13309c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x13309c) {
            ctx->pc = 0x1330B0u;
            goto label_1330b0;
        }
    }
    ctx->pc = 0x1330A4u;
    // 0x1330a4: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x1330A4u;
    {
        const bool branch_taken_0x1330a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1330a4) {
            ctx->pc = 0x1331E0u;
            goto label_1331e0;
        }
    }
    ctx->pc = 0x1330ACu;
    // 0x1330ac: 0x0  nop
    ctx->pc = 0x1330acu;
    // NOP
label_1330b0:
    // 0x1330b0: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x1330b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1330b4: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1330b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1330b8: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x1330b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
    // 0x1330bc: 0x2831823  subu        $v1, $s4, $v1
    ctx->pc = 0x1330bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1330c0: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x1330c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x1330c4: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x1330c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1330c8: 0x0  nop
    ctx->pc = 0x1330c8u;
    // NOP
    // 0x1330cc: 0x0  nop
    ctx->pc = 0x1330ccu;
    // NOP
    // 0x1330d0: 0x1010  mfhi        $v0
    ctx->pc = 0x1330d0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1330d4: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x1330d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1330d8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1330d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1330dc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1330dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1330e0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1330e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1330e4: 0xa443fffa  sh          $v1, -0x6($v0)
    ctx->pc = 0x1330e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967290), (uint16_t)GPR_U32(ctx, 3));
    // 0x1330e8: 0x9283000b  lbu         $v1, 0xB($s4)
    ctx->pc = 0x1330e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 11)));
    // 0x1330ec: 0x96820008  lhu         $v0, 0x8($s4)
    ctx->pc = 0x1330ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1330f0: 0x641804  sllv        $v1, $a0, $v1
    ctx->pc = 0x1330f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x1330f4: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x1330f4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
    // 0x1330f8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1330f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1330fc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1330fcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x133100: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x133100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x133104: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x133104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x133108: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x133108u;
    {
        const bool branch_taken_0x133108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13310Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133108u;
        // 0x13310c: 0xfe820000  sd          $v0, 0x0($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133108) {
            ctx->pc = 0x1331E0u;
            goto label_1331e0;
        }
    }
    ctx->pc = 0x133110u;
label_133110:
    // 0x133110: 0x9284000b  lbu         $a0, 0xB($s4)
    ctx->pc = 0x133110u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 11)));
    // 0x133114: 0x96820008  lhu         $v0, 0x8($s4)
    ctx->pc = 0x133114u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x133118: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x133118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13311c: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x13311cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x133120: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x133120u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
    // 0x133124: 0x21538  dsll        $v0, $v0, 20
    ctx->pc = 0x133124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
    // 0x133128: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x133128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x13312c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x13312cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x133130: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x133130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x133134: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x133134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x133138: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x133138u;
    {
        const bool branch_taken_0x133138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13313Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133138u;
        // 0x13313c: 0xfe820000  sd          $v0, 0x0($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133138) {
            ctx->pc = 0x1331E0u;
            goto label_1331e0;
        }
    }
    ctx->pc = 0x133140u;
label_133140:
    // 0x133140: 0x9284000b  lbu         $a0, 0xB($s4)
    ctx->pc = 0x133140u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 11)));
    // 0x133144: 0x96820008  lhu         $v0, 0x8($s4)
    ctx->pc = 0x133144u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x133148: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x133148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13314c: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x13314cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x133150: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x133150u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
    // 0x133154: 0x2123c  dsll32      $v0, $v0, 8
    ctx->pc = 0x133154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 8));
    // 0x133158: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x133158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x13315c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x13315cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x133160: 0x31dbc  dsll32      $v1, $v1, 22
    ctx->pc = 0x133160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 22));
    // 0x133164: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x133164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x133168: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x133168u;
    {
        const bool branch_taken_0x133168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13316Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133168u;
        // 0x13316c: 0xfe820000  sd          $v0, 0x0($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133168) {
            ctx->pc = 0x1331E0u;
            goto label_1331e0;
        }
    }
    ctx->pc = 0x133170u;
label_133170:
    // 0x133170: 0x928a000b  lbu         $t2, 0xB($s4)
    ctx->pc = 0x133170u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 11)));
    // 0x133174: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x133174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x133178: 0x9287000a  lbu         $a3, 0xA($s4)
    ctx->pc = 0x133178u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 10)));
    // 0x13317c: 0x9285000c  lbu         $a1, 0xC($s4)
    ctx->pc = 0x13317cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x133180: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x133180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x133184: 0x9683000e  lhu         $v1, 0xE($s4)
    ctx->pc = 0x133184u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
    // 0x133188: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x133188u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13318c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x13318cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x133190: 0x96880008  lhu         $t0, 0x8($s4)
    ctx->pc = 0x133190u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x133194: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x133194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x133198: 0x1464804  sllv        $t1, $a2, $t2
    ctx->pc = 0x133198u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 10) & 0x1F));
    // 0x13319c: 0x94983  sra         $t1, $t1, 6
    ctx->pc = 0x13319cu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 6));
    // 0x1331a0: 0x73d38  dsll        $a3, $a3, 20
    ctx->pc = 0x1331a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 20);
    // 0x1331a4: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x1331a4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x1331a8: 0xa36b8  dsll        $a2, $t2, 26
    ctx->pc = 0x1331a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) << 26);
    // 0x1331ac: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x1331acu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x1331b0: 0x52fb8  dsll        $a1, $a1, 30
    ctx->pc = 0x1331b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 30);
    // 0x1331b4: 0x94bb8  dsll        $t1, $t1, 14
    ctx->pc = 0x1331b4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 14);
    // 0x1331b8: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1331b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1331bc: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x1331bcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x1331c0: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x1331c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x1331c4: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1331c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1331c8: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1331c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x1331cc: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x1331ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1331d0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1331d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1331d4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1331d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1331d8: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x1331d8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x1331dc: 0x0  nop
    ctx->pc = 0x1331dcu;
    // NOP
label_1331e0:
    // 0x1331e0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1331e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1331e4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x1331e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1331e8: 0x2e2b821  addu        $s7, $s7, $v0
    ctx->pc = 0x1331e8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1331ec: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1331ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1331f0: 0x2c412000  sltiu       $at, $v0, 0x2000
    ctx->pc = 0x1331f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8192) ? 1 : 0);
    // 0x1331f4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1331F4u;
    {
        const bool branch_taken_0x1331f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1331f4) {
            ctx->pc = 0x133208u;
            goto label_133208;
        }
    }
    ctx->pc = 0x1331FCu;
    // 0x1331fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1331FCu;
    {
        const bool branch_taken_0x1331fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1331FCu;
        // 0x133200: 0xae17000c  sw          $s7, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1331fc) {
            ctx->pc = 0x133210u;
            goto label_133210;
        }
    }
    ctx->pc = 0x133204u;
    // 0x133204: 0x0  nop
    ctx->pc = 0x133204u;
    // NOP
label_133208:
    // 0x133208: 0xae170008  sw          $s7, 0x8($s0)
    ctx->pc = 0x133208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 23));
    // 0x13320c: 0x0  nop
    ctx->pc = 0x13320cu;
    // NOP
label_133210:
    // 0x133210: 0x27c2ffff  addiu       $v0, $fp, -0x1
    ctx->pc = 0x133210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x133214: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x133214u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x133218: 0x305e00ff  andi        $fp, $v0, 0xFF
    ctx->pc = 0x133218u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13321c: 0x0  nop
    ctx->pc = 0x13321cu;
    // NOP
label_133220:
    // 0x133220: 0x33c200ff  andi        $v0, $fp, 0xFF
    ctx->pc = 0x133220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
    // 0x133224: 0x1c40ff0a  bgtz        $v0, . + 4 + (-0xF6 << 2)
    ctx->pc = 0x133224u;
    {
        const bool branch_taken_0x133224 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x133224) {
            ctx->pc = 0x132E50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_132e50;
        }
    }
    ctx->pc = 0x13322Cu;
    // 0x13322c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x13322cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x133230: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x133230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x133234: 0x10430010  beq         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x133234u;
    {
        const bool branch_taken_0x133234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x133238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133234u;
        // 0x133238: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133234) {
            ctx->pc = 0x133278u;
            goto label_133278;
        }
    }
    ctx->pc = 0x13323Cu;
    // 0x13323c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13323Cu;
    {
        const bool branch_taken_0x13323c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x13323c) {
            ctx->pc = 0x133258u;
            goto label_133258;
        }
    }
    ctx->pc = 0x133244u;
    // 0x133244: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x133244u;
    {
        const bool branch_taken_0x133244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x133244) {
            ctx->pc = 0x133278u;
            goto label_133278;
        }
    }
    ctx->pc = 0x13324Cu;
    // 0x13324c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x13324Cu;
    {
        const bool branch_taken_0x13324c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13324c) {
            ctx->pc = 0x133278u;
            goto label_133278;
        }
    }
    ctx->pc = 0x133254u;
    // 0x133254: 0x0  nop
    ctx->pc = 0x133254u;
    // NOP
label_133258:
    // 0x133258: 0x92c2000d  lbu         $v0, 0xD($s6)
    ctx->pc = 0x133258u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 13)));
    // 0x13325c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13325Cu;
    {
        const bool branch_taken_0x13325c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13325c) {
            ctx->pc = 0x133278u;
            goto label_133278;
        }
    }
    ctx->pc = 0x133264u;
    // 0x133264: 0x8fa4010c  lw          $a0, 0x10C($sp)
    ctx->pc = 0x133264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x133268: 0x8fa60108  lw          $a2, 0x108($sp)
    ctx->pc = 0x133268u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x13326c: 0xc04cdd0  jal         func_133740
    ctx->pc = 0x13326Cu;
    SET_GPR_U32(ctx, 31, 0x133274u);
    ctx->pc = 0x133270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13326Cu;
    // 0x133270: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133740u, 0x13326Cu, 0x133274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133274u;
label_133274:
    // 0x133274: 0x0  nop
    ctx->pc = 0x133274u;
    // NOP
label_133278:
    // 0x133278: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x133278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x13327c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13327Cu;
    {
        const bool branch_taken_0x13327c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13327Cu;
        // 0x133280: 0x8c420010  lw          $v0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13327c) {
            ctx->pc = 0x133290u;
            goto label_133290;
        }
    }
    ctx->pc = 0x133284u;
    // 0x133284: 0x0  nop
    ctx->pc = 0x133284u;
    // NOP
label_133288:
    // 0x133288: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
    ctx->pc = 0x133288u;
    {
        const bool branch_taken_0x133288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133288) {
            ctx->pc = 0x133220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_133220;
        }
    }
    ctx->pc = 0x133290u;
label_133290:
    // 0x133290: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x133290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x133294: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x133294u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x133298: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x133298u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13329c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x13329cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1332a0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1332a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1332a4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1332a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1332a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1332a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1332ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1332acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1332b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1332b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1332b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1332b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1332b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1332B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1332BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1332B8u;
        // 0x1332bc: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1332B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1332C0u;
}
