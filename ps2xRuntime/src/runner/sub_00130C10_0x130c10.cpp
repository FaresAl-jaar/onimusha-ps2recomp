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

// Function: sub_00130C10
// Address: 0x130c10 - 0x130d60
void sub_00130C10_0x130c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130C10_0x130c10");
#endif

    switch (ctx->pc) {
        case 0x130cccu: goto label_130ccc;
        case 0x130d20u: goto label_130d20;
        case 0x130d2cu: goto label_130d2c;
        case 0x130d38u: goto label_130d38;
        default: break;
    }

    ctx->pc = 0x130c10u;

    // 0x130c10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x130c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x130c14: 0x2402022c  addiu       $v0, $zero, 0x22C
    ctx->pc = 0x130c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 556));
    // 0x130c18: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x130c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x130c1c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x130c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x130c20: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x130c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x130c24: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x130c24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130c28: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x130c28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130c2c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x130c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x130c30: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x130c30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x130c34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x130c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x130c38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x130c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x130c3c: 0x2a610002  slti        $at, $s3, 0x2
    ctx->pc = 0x130c3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x130c40: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x130c40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130c44: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x130c44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130c48: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x130C48u;
    {
        const bool branch_taken_0x130c48 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x130C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130C48u;
        // 0x130c4c: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130c48) {
            ctx->pc = 0x130C58u;
            goto label_130c58;
        }
    }
    ctx->pc = 0x130C50u;
    // 0x130c50: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x130C50u;
    {
        const bool branch_taken_0x130c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130C50u;
        // 0x130c54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130c50) {
            ctx->pc = 0x130D40u;
            goto label_130d40;
        }
    }
    ctx->pc = 0x130C58u;
label_130c58:
    // 0x130c58: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x130c58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x130c5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x130C5Cu;
    {
        const bool branch_taken_0x130c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x130C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130C5Cu;
        // 0x130c60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130c5c) {
            ctx->pc = 0x130C70u;
            goto label_130c70;
        }
    }
    ctx->pc = 0x130C64u;
    // 0x130c64: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x130C64u;
    {
        const bool branch_taken_0x130c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x130c64) {
            ctx->pc = 0x130D40u;
            goto label_130d40;
        }
    }
    ctx->pc = 0x130C6Cu;
    // 0x130c6c: 0x0  nop
    ctx->pc = 0x130c6cu;
    // NOP
label_130c70:
    // 0x130c70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x130c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130c74: 0x1262000a  beq         $s3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x130C74u;
    {
        const bool branch_taken_0x130c74 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x130c74) {
            ctx->pc = 0x130CA0u;
            goto label_130ca0;
        }
    }
    ctx->pc = 0x130C7Cu;
    // 0x130c7c: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x130C7Cu;
    {
        const bool branch_taken_0x130c7c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x130c7c) {
            ctx->pc = 0x130C90u;
            goto label_130c90;
        }
    }
    ctx->pc = 0x130C84u;
    // 0x130c84: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x130C84u;
    {
        const bool branch_taken_0x130c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x130c84) {
            ctx->pc = 0x130CB0u;
            goto label_130cb0;
        }
    }
    ctx->pc = 0x130C8Cu;
    // 0x130c8c: 0x0  nop
    ctx->pc = 0x130c8cu;
    // NOP
label_130c90:
    // 0x130c90: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x130c90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x130c94: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x130C94u;
    {
        const bool branch_taken_0x130c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130C94u;
        // 0x130c98: 0x24a56500  addiu       $a1, $a1, 0x6500 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130c94) {
            ctx->pc = 0x130CB8u;
            goto label_130cb8;
        }
    }
    ctx->pc = 0x130C9Cu;
    // 0x130c9c: 0x0  nop
    ctx->pc = 0x130c9cu;
    // NOP
label_130ca0:
    // 0x130ca0: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x130ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x130ca4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x130CA4u;
    {
        const bool branch_taken_0x130ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130CA4u;
        // 0x130ca8: 0x24a56600  addiu       $a1, $a1, 0x6600 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130ca4) {
            ctx->pc = 0x130CB8u;
            goto label_130cb8;
        }
    }
    ctx->pc = 0x130CACu;
    // 0x130cac: 0x0  nop
    ctx->pc = 0x130cacu;
    // NOP
label_130cb0:
    // 0x130cb0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x130CB0u;
    {
        const bool branch_taken_0x130cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130CB0u;
        // 0x130cb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130cb0) {
            ctx->pc = 0x130D40u;
            goto label_130d40;
        }
    }
    ctx->pc = 0x130CB8u;
label_130cb8:
    // 0x130cb8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x130cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x130cbc: 0x131940  sll         $v1, $s3, 5
    ctx->pc = 0x130cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x130cc0: 0x24426500  addiu       $v0, $v0, 0x6500
    ctx->pc = 0x130cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25856));
    // 0x130cc4: 0xc04d9c2  jal         func_136708
    ctx->pc = 0x130CC4u;
    SET_GPR_U32(ctx, 31, 0x130CCCu);
    ctx->pc = 0x130CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130CC4u;
    // 0x130cc8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136708u, 0x130CC4u, 0x130CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130CCCu;
label_130ccc:
    // 0x130ccc: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x130CCCu;
    {
        const bool branch_taken_0x130ccc = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x130ccc) {
            ctx->pc = 0x130CE0u;
            goto label_130ce0;
        }
    }
    ctx->pc = 0x130CD4u;
    // 0x130cd4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x130CD4u;
    {
        const bool branch_taken_0x130cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130CD4u;
        // 0x130cd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130cd4) {
            ctx->pc = 0x130D40u;
            goto label_130d40;
        }
    }
    ctx->pc = 0x130CDCu;
    // 0x130cdc: 0x0  nop
    ctx->pc = 0x130cdcu;
    // NOP
label_130ce0:
    // 0x130ce0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x130ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130ce4: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x130ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x130ce8: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x130ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x130cec: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x130cecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x130cf0: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x130cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x130cf4: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x130cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x130cf8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x130cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x130cfc: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x130cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x130d00: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x130d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130d04: 0xa2050002  sb          $a1, 0x2($s0)
    ctx->pc = 0x130d04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x130d08: 0xa2060003  sb          $a2, 0x3($s0)
    ctx->pc = 0x130d08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 6));
    // 0x130d0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x130d0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130d10: 0xa2030004  sb          $v1, 0x4($s0)
    ctx->pc = 0x130d10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x130d14: 0xa2120005  sb          $s2, 0x5($s0)
    ctx->pc = 0x130d14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 18));
    // 0x130d18: 0xc04c610  jal         func_131840
    ctx->pc = 0x130D18u;
    SET_GPR_U32(ctx, 31, 0x130D20u);
    ctx->pc = 0x130D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130D18u;
    // 0x130d1c: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131840u, 0x130D18u, 0x130D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130D20u;
label_130d20:
    // 0x130d20: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x130d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130d24: 0xc04c628  jal         func_1318A0
    ctx->pc = 0x130D24u;
    SET_GPR_U32(ctx, 31, 0x130D2Cu);
    ctx->pc = 0x130D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130D24u;
    // 0x130d28: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1318A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1318A0u, 0x130D24u, 0x130D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130D2Cu;
label_130d2c:
    // 0x130d2c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x130d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130d30: 0xc04c660  jal         func_131980
    ctx->pc = 0x130D30u;
    SET_GPR_U32(ctx, 31, 0x130D38u);
    ctx->pc = 0x130D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130D30u;
    // 0x130d34: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131980u, 0x130D30u, 0x130D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130D38u;
label_130d38:
    // 0x130d38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x130d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130d3c: 0x0  nop
    ctx->pc = 0x130d3cu;
    // NOP
label_130d40:
    // 0x130d40: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x130d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x130d44: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x130d44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x130d48: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x130d48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x130d4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x130d4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x130d50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x130d50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130d54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x130d54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130d58: 0x3e00008  jr          $ra
    ctx->pc = 0x130D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130D58u;
        // 0x130d5c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130D58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130D60u;
}
