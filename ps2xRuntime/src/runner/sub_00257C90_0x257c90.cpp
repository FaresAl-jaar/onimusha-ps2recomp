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

// Function: sub_00257C90
// Address: 0x257c90 - 0x257e00
void sub_00257C90_0x257c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257C90_0x257c90");
#endif

    switch (ctx->pc) {
        case 0x257d2cu: goto label_257d2c;
        case 0x257dc0u: goto label_257dc0;
        default: break;
    }

    ctx->pc = 0x257c90u;

    // 0x257c90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x257c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x257c94: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x257c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x257c98: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x257c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x257c9c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x257c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x257ca0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x257ca0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257ca4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x257ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x257ca8: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x257ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x257cac: 0x84470014  lh          $a3, 0x14($v0)
    ctx->pc = 0x257cacu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x257cb0: 0x28e30100  slti        $v1, $a3, 0x100
    ctx->pc = 0x257cb0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x257cb4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x257CB4u;
    {
        const bool branch_taken_0x257cb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x257CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257CB4u;
        // 0x257cb8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257cb4) {
            ctx->pc = 0x257CC8u;
            goto label_257cc8;
        }
    }
    ctx->pc = 0x257CBCu;
    // 0x257cbc: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x257CBCu;
    {
        const bool branch_taken_0x257cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257CBCu;
        // 0x257cc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257cbc) {
            ctx->pc = 0x257DE8u;
            goto label_257de8;
        }
    }
    ctx->pc = 0x257CC4u;
    // 0x257cc4: 0x0  nop
    ctx->pc = 0x257cc4u;
    // NOP
label_257cc8:
    // 0x257cc8: 0x71940  sll         $v1, $a3, 5
    ctx->pc = 0x257cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x257ccc: 0x8c470010  lw          $a3, 0x10($v0)
    ctx->pc = 0x257cccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x257cd0: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x257cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x257cd4: 0x24711140  addiu       $s1, $v1, 0x1140
    ctx->pc = 0x257cd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4416));
    // 0x257cd8: 0x240300f7  addiu       $v1, $zero, 0xF7
    ctx->pc = 0x257cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 247));
    // 0x257cdc: 0x90e80001  lbu         $t0, 0x1($a3)
    ctx->pc = 0x257cdcu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x257ce0: 0x90e70000  lbu         $a3, 0x0($a3)
    ctx->pc = 0x257ce0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x257ce4: 0x10e3002a  beq         $a3, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x257CE4u;
    {
        const bool branch_taken_0x257ce4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x257CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257CE4u;
        // 0x257ce8: 0x310300ff  andi        $v1, $t0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x257ce4) {
            ctx->pc = 0x257D90u;
            goto label_257d90;
        }
    }
    ctx->pc = 0x257CECu;
    // 0x257cec: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x257cecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x257cf0: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x257cf0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x257cf4: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x257cf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x257cf8: 0xffa60000  sd          $a2, 0x0($sp)
    ctx->pc = 0x257cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 6));
    // 0x257cfc: 0x30ab00ff  andi        $t3, $a1, 0xFF
    ctx->pc = 0x257cfcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x257d00: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x257d00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x257d04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x257d04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257d08: 0x904300a0  lbu         $v1, 0xA0($v0)
    ctx->pc = 0x257d08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x257d0c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x257d0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x257d10: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x257d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x257d14: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x257d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x257d18: 0x9047002f  lbu         $a3, 0x2F($v0)
    ctx->pc = 0x257d18u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 47)));
    // 0x257d1c: 0x8449001e  lh          $t1, 0x1E($v0)
    ctx->pc = 0x257d1cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 30)));
    // 0x257d20: 0x844a0020  lh          $t2, 0x20($v0)
    ctx->pc = 0x257d20u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x257d24: 0xc0951e0  jal         func_254780
    ctx->pc = 0x257D24u;
    SET_GPR_U32(ctx, 31, 0x257D2Cu);
    ctx->pc = 0x257D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257D24u;
    // 0x257d28: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254780u, 0x257D24u, 0x257D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257D2Cu;
label_257d2c:
    // 0x257d2c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x257d2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x257d30: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x257d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x257d34: 0x9023fc8d  lbu         $v1, -0x373($at)
    ctx->pc = 0x257d34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Du));
    // 0x257d38: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x257d38u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x257d3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x257d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x257d40: 0x14620023  bne         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x257D40u;
    {
        const bool branch_taken_0x257d40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x257D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257D40u;
        // 0x257d44: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257d40) {
            ctx->pc = 0x257DD0u;
            goto label_257dd0;
        }
    }
    ctx->pc = 0x257D48u;
    // 0x257d48: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x257d48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x257d4c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x257d4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x257d50: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x257D50u;
    {
        const bool branch_taken_0x257d50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x257d50) {
            ctx->pc = 0x257DD0u;
            goto label_257dd0;
        }
    }
    ctx->pc = 0x257D58u;
    // 0x257d58: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x257d58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x257d5c: 0x26020002  addiu       $v0, $s0, 0x2
    ctx->pc = 0x257d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x257d60: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x257d60u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x257d64: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x257d64u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x257d68: 0x24620002  addiu       $v0, $v1, 0x2
    ctx->pc = 0x257d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x257d6c: 0xa622000c  sh          $v0, 0xC($s1)
    ctx->pc = 0x257d6cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x257d70: 0x9622000a  lhu         $v0, 0xA($s1)
    ctx->pc = 0x257d70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x257d74: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x257d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x257d78: 0xa622000a  sh          $v0, 0xA($s1)
    ctx->pc = 0x257d78u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x257d7c: 0x9622000e  lhu         $v0, 0xE($s1)
    ctx->pc = 0x257d7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x257d80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x257d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x257d84: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x257D84u;
    {
        const bool branch_taken_0x257d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257D84u;
        // 0x257d88: 0xa622000e  sh          $v0, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257d84) {
            ctx->pc = 0x257DD0u;
            goto label_257dd0;
        }
    }
    ctx->pc = 0x257D8Cu;
    // 0x257d8c: 0x0  nop
    ctx->pc = 0x257d8cu;
    // NOP
label_257d90:
    // 0x257d90: 0x310300ff  andi        $v1, $t0, 0xFF
    ctx->pc = 0x257d90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x257d94: 0x904800a0  lbu         $t0, 0xA0($v0)
    ctx->pc = 0x257d94u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x257d98: 0x30cb00ff  andi        $t3, $a2, 0xFF
    ctx->pc = 0x257d98u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x257d9c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x257d9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257da0: 0x30aa00ff  andi        $t2, $a1, 0xFF
    ctx->pc = 0x257da0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x257da4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x257da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257da8: 0x8182b  sltu        $v1, $zero, $t0
    ctx->pc = 0x257da8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x257dac: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x257dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x257db0: 0x8448001e  lh          $t0, 0x1E($v0)
    ctx->pc = 0x257db0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 30)));
    // 0x257db4: 0x84490020  lh          $t1, 0x20($v0)
    ctx->pc = 0x257db4u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x257db8: 0xc09526c  jal         func_2549B0
    ctx->pc = 0x257DB8u;
    SET_GPR_U32(ctx, 31, 0x257DC0u);
    ctx->pc = 0x257DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257DB8u;
    // 0x257dbc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2549B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2549B0u, 0x257DB8u, 0x257DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257DC0u;
label_257dc0:
    // 0x257dc0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x257dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x257dc4: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x257dc4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x257dc8: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x257dc8u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x257dcc: 0x0  nop
    ctx->pc = 0x257dccu;
    // NOP
label_257dd0:
    // 0x257dd0: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x257dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x257dd4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x257dd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257dd8: 0x84830014  lh          $v1, 0x14($a0)
    ctx->pc = 0x257dd8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x257ddc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x257ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x257de0: 0xa4830014  sh          $v1, 0x14($a0)
    ctx->pc = 0x257de0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x257de4: 0x0  nop
    ctx->pc = 0x257de4u;
    // NOP
label_257de8:
    // 0x257de8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x257de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x257dec: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x257decu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x257df0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x257df0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257df4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x257df4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x257df8: 0x3e00008  jr          $ra
    ctx->pc = 0x257DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257DF8u;
        // 0x257dfc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257DF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257E00u;
}
