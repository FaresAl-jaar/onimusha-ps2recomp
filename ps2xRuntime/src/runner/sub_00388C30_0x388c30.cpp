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

// Function: sub_00388C30
// Address: 0x388c30 - 0x388e40
void sub_00388C30_0x388c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00388C30_0x388c30");
#endif

    switch (ctx->pc) {
        case 0x388c44u: goto label_388c44;
        case 0x388cd8u: goto label_388cd8;
        case 0x388d14u: goto label_388d14;
        case 0x388d68u: goto label_388d68;
        case 0x388d78u: goto label_388d78;
        case 0x388d8cu: goto label_388d8c;
        default: break;
    }

    ctx->pc = 0x388c30u;

    // 0x388c30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x388c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x388c34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x388c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x388c38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x388c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x388c3c: 0xc0a4a1c  jal         func_292870
    ctx->pc = 0x388C3Cu;
    SET_GPR_U32(ctx, 31, 0x388C44u);
    ctx->pc = 0x388C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388C3Cu;
    // 0x388c40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292870u, 0x388C3Cu, 0x388C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388C44u;
label_388c44:
    // 0x388c44: 0xae002b38  sw          $zero, 0x2B38($s0)
    ctx->pc = 0x388c44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11064), GPR_U32(ctx, 0));
    // 0x388c48: 0x3c070800  lui         $a3, 0x800
    ctx->pc = 0x388c48u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2048 << 16));
    // 0x388c4c: 0xa2002b62  sb          $zero, 0x2B62($s0)
    ctx->pc = 0x388c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11106), (uint8_t)GPR_U32(ctx, 0));
    // 0x388c50: 0x2404f7ff  addiu       $a0, $zero, -0x801
    ctx->pc = 0x388c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x388c54: 0xa2002b63  sb          $zero, 0x2B63($s0)
    ctx->pc = 0x388c54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11107), (uint8_t)GPR_U32(ctx, 0));
    // 0x388c58: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x388c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x388c5c: 0xa2002b68  sb          $zero, 0x2B68($s0)
    ctx->pc = 0x388c5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11112), (uint8_t)GPR_U32(ctx, 0));
    // 0x388c60: 0xa2002b6f  sb          $zero, 0x2B6F($s0)
    ctx->pc = 0x388c60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11119), (uint8_t)GPR_U32(ctx, 0));
    // 0x388c64: 0x920507d8  lbu         $a1, 0x7D8($s0)
    ctx->pc = 0x388c64u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2008)));
    // 0x388c68: 0xa2052b6e  sb          $a1, 0x2B6E($s0)
    ctx->pc = 0x388c68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11118), (uint8_t)GPR_U32(ctx, 5));
    // 0x388c6c: 0xa2002b71  sb          $zero, 0x2B71($s0)
    ctx->pc = 0x388c6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11121), (uint8_t)GPR_U32(ctx, 0));
    // 0x388c70: 0xae002b74  sw          $zero, 0x2B74($s0)
    ctx->pc = 0x388c70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11124), GPR_U32(ctx, 0));
    // 0x388c74: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x388c74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x388c78: 0x8ca6007c  lw          $a2, 0x7C($a1)
    ctx->pc = 0x388c78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 124)));
    // 0x388c7c: 0x8cc51554  lw          $a1, 0x1554($a2)
    ctx->pc = 0x388c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 5460)));
    // 0x388c80: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x388c80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x388c84: 0xacc51554  sw          $a1, 0x1554($a2)
    ctx->pc = 0x388c84u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 5460), GPR_U32(ctx, 5));
    // 0x388c88: 0xae0404c4  sw          $a0, 0x4C4($s0)
    ctx->pc = 0x388c88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1220), GPR_U32(ctx, 4));
    // 0x388c8c: 0xae0404c8  sw          $a0, 0x4C8($s0)
    ctx->pc = 0x388c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1224), GPR_U32(ctx, 4));
    // 0x388c90: 0xae0404cc  sw          $a0, 0x4CC($s0)
    ctx->pc = 0x388c90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1228), GPR_U32(ctx, 4));
    // 0x388c94: 0x92042b6e  lbu         $a0, 0x2B6E($s0)
    ctx->pc = 0x388c94u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11118)));
    // 0x388c98: 0x10830051  beq         $a0, $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x388C98u;
    {
        const bool branch_taken_0x388c98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x388C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388C98u;
        // 0x388c9c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388c98) {
            ctx->pc = 0x388DE0u;
            goto label_388de0;
        }
    }
    ctx->pc = 0x388CA0u;
    // 0x388ca0: 0x10830037  beq         $a0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x388CA0u;
    {
        const bool branch_taken_0x388ca0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x388ca0) {
            ctx->pc = 0x388D80u;
            goto label_388d80;
        }
    }
    ctx->pc = 0x388CA8u;
    // 0x388ca8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x388ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x388cac: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x388CACu;
    {
        const bool branch_taken_0x388cac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x388CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388CACu;
        // 0x388cb0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388cac) {
            ctx->pc = 0x388D08u;
            goto label_388d08;
        }
    }
    ctx->pc = 0x388CB4u;
    // 0x388cb4: 0x10850006  beq         $a0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x388CB4u;
    {
        const bool branch_taken_0x388cb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x388cb4) {
            ctx->pc = 0x388CD0u;
            goto label_388cd0;
        }
    }
    ctx->pc = 0x388CBCu;
    // 0x388cbc: 0x1080005a  beqz        $a0, . + 4 + (0x5A << 2)
    ctx->pc = 0x388CBCu;
    {
        const bool branch_taken_0x388cbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x388cbc) {
            ctx->pc = 0x388E28u;
            goto label_388e28;
        }
    }
    ctx->pc = 0x388CC4u;
    // 0x388cc4: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x388CC4u;
    {
        const bool branch_taken_0x388cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x388cc4) {
            ctx->pc = 0x388E28u;
            goto label_388e28;
        }
    }
    ctx->pc = 0x388CCCu;
    // 0x388ccc: 0x0  nop
    ctx->pc = 0x388cccu;
    // NOP
label_388cd0:
    // 0x388cd0: 0xc097904  jal         func_25E410
    ctx->pc = 0x388CD0u;
    SET_GPR_U32(ctx, 31, 0x388CD8u);
    ctx->pc = 0x388CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388CD0u;
    // 0x388cd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E410u, 0x388CD0u, 0x388CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388CD8u;
label_388cd8:
    // 0x388cd8: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x388cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x388cdc: 0x3c03fff7  lui         $v1, 0xFFF7
    ctx->pc = 0x388cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65527 << 16));
    // 0x388ce0: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x388ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x388ce4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x388ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x388ce8: 0x8ca6007c  lw          $a2, 0x7C($a1)
    ctx->pc = 0x388ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 124)));
    // 0x388cec: 0x8cc524d4  lw          $a1, 0x24D4($a2)
    ctx->pc = 0x388cecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 9428)));
    // 0x388cf0: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x388cf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x388cf4: 0xacc424d4  sw          $a0, 0x24D4($a2)
    ctx->pc = 0x388cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 9428), GPR_U32(ctx, 4));
    // 0x388cf8: 0xae0304c4  sw          $v1, 0x4C4($s0)
    ctx->pc = 0x388cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1220), GPR_U32(ctx, 3));
    // 0x388cfc: 0xae0304c8  sw          $v1, 0x4C8($s0)
    ctx->pc = 0x388cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1224), GPR_U32(ctx, 3));
    // 0x388d00: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x388D00u;
    {
        const bool branch_taken_0x388d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388D00u;
        // 0x388d04: 0xae0304cc  sw          $v1, 0x4CC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1228), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388d00) {
            ctx->pc = 0x388E28u;
            goto label_388e28;
        }
    }
    ctx->pc = 0x388D08u;
label_388d08:
    // 0x388d08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x388d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388d0c: 0xc097904  jal         func_25E410
    ctx->pc = 0x388D0Cu;
    SET_GPR_U32(ctx, 31, 0x388D14u);
    ctx->pc = 0x388D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388D0Cu;
    // 0x388d10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E410u, 0x388D0Cu, 0x388D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388D14u;
label_388d14:
    // 0x388d14: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x388d14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x388d18: 0x3c070800  lui         $a3, 0x800
    ctx->pc = 0x388d18u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2048 << 16));
    // 0x388d1c: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x388d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x388d20: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x388d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x388d24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x388d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388d28: 0x8ca6007c  lw          $a2, 0x7C($a1)
    ctx->pc = 0x388d28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 124)));
    // 0x388d2c: 0x8cc507c4  lw          $a1, 0x7C4($a2)
    ctx->pc = 0x388d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1988)));
    // 0x388d30: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x388d30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x388d34: 0xacc507c4  sw          $a1, 0x7C4($a2)
    ctx->pc = 0x388d34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1988), GPR_U32(ctx, 5));
    // 0x388d38: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x388d38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x388d3c: 0x8ca6007c  lw          $a2, 0x7C($a1)
    ctx->pc = 0x388d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 124)));
    // 0x388d40: 0x8cc509b4  lw          $a1, 0x9B4($a2)
    ctx->pc = 0x388d40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2484)));
    // 0x388d44: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x388d44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x388d48: 0xacc509b4  sw          $a1, 0x9B4($a2)
    ctx->pc = 0x388d48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2484), GPR_U32(ctx, 5));
    // 0x388d4c: 0xae0304c4  sw          $v1, 0x4C4($s0)
    ctx->pc = 0x388d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1220), GPR_U32(ctx, 3));
    // 0x388d50: 0xae0304c8  sw          $v1, 0x4C8($s0)
    ctx->pc = 0x388d50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1224), GPR_U32(ctx, 3));
    // 0x388d54: 0xae0304cc  sw          $v1, 0x4CC($s0)
    ctx->pc = 0x388d54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1228), GPR_U32(ctx, 3));
    // 0x388d58: 0xae0204c4  sw          $v0, 0x4C4($s0)
    ctx->pc = 0x388d58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1220), GPR_U32(ctx, 2));
    // 0x388d5c: 0xae0204c8  sw          $v0, 0x4C8($s0)
    ctx->pc = 0x388d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1224), GPR_U32(ctx, 2));
    // 0x388d60: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x388D60u;
    SET_GPR_U32(ctx, 31, 0x388D68u);
    ctx->pc = 0x388D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388D60u;
    // 0x388d64: 0xae0204cc  sw          $v0, 0x4CC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1228), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x388D60u, 0x388D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388D68u;
label_388d68:
    // 0x388d68: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x388d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x388d6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x388d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388d70: 0xc097594  jal         func_25D650
    ctx->pc = 0x388D70u;
    SET_GPR_U32(ctx, 31, 0x388D78u);
    ctx->pc = 0x388D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388D70u;
    // 0x388d74: 0x22842  srl         $a1, $v0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D650u, 0x388D70u, 0x388D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388D78u;
label_388d78:
    // 0x388d78: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x388D78u;
    {
        const bool branch_taken_0x388d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x388d78) {
            ctx->pc = 0x388E28u;
            goto label_388e28;
        }
    }
    ctx->pc = 0x388D80u;
label_388d80:
    // 0x388d80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x388d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388d84: 0xc097904  jal         func_25E410
    ctx->pc = 0x388D84u;
    SET_GPR_U32(ctx, 31, 0x388D8Cu);
    ctx->pc = 0x388D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388D84u;
    // 0x388d88: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E410u, 0x388D84u, 0x388D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388D8Cu;
label_388d8c:
    // 0x388d8c: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x388d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x388d90: 0x3c070800  lui         $a3, 0x800
    ctx->pc = 0x388d90u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2048 << 16));
    // 0x388d94: 0x2404ffef  addiu       $a0, $zero, -0x11
    ctx->pc = 0x388d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x388d98: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x388d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x388d9c: 0x8ca6007c  lw          $a2, 0x7C($a1)
    ctx->pc = 0x388d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 124)));
    // 0x388da0: 0x8cc507c4  lw          $a1, 0x7C4($a2)
    ctx->pc = 0x388da0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1988)));
    // 0x388da4: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x388da4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x388da8: 0xacc507c4  sw          $a1, 0x7C4($a2)
    ctx->pc = 0x388da8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1988), GPR_U32(ctx, 5));
    // 0x388dac: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x388dacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x388db0: 0x8ca6007c  lw          $a2, 0x7C($a1)
    ctx->pc = 0x388db0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 124)));
    // 0x388db4: 0x8cc509b4  lw          $a1, 0x9B4($a2)
    ctx->pc = 0x388db4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2484)));
    // 0x388db8: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x388db8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x388dbc: 0xacc509b4  sw          $a1, 0x9B4($a2)
    ctx->pc = 0x388dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2484), GPR_U32(ctx, 5));
    // 0x388dc0: 0xae0404c4  sw          $a0, 0x4C4($s0)
    ctx->pc = 0x388dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1220), GPR_U32(ctx, 4));
    // 0x388dc4: 0xae0404c8  sw          $a0, 0x4C8($s0)
    ctx->pc = 0x388dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1224), GPR_U32(ctx, 4));
    // 0x388dc8: 0xae0404cc  sw          $a0, 0x4CC($s0)
    ctx->pc = 0x388dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1228), GPR_U32(ctx, 4));
    // 0x388dcc: 0xae0304c4  sw          $v1, 0x4C4($s0)
    ctx->pc = 0x388dccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1220), GPR_U32(ctx, 3));
    // 0x388dd0: 0xae0304c8  sw          $v1, 0x4C8($s0)
    ctx->pc = 0x388dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1224), GPR_U32(ctx, 3));
    // 0x388dd4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x388DD4u;
    {
        const bool branch_taken_0x388dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388DD4u;
        // 0x388dd8: 0xae0304cc  sw          $v1, 0x4CC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1228), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388dd4) {
            ctx->pc = 0x388E28u;
            goto label_388e28;
        }
    }
    ctx->pc = 0x388DDCu;
    // 0x388ddc: 0x0  nop
    ctx->pc = 0x388ddcu;
    // NOP
label_388de0:
    // 0x388de0: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x388de0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x388de4: 0x2404ffef  addiu       $a0, $zero, -0x11
    ctx->pc = 0x388de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x388de8: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x388de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x388dec: 0x8ca6007c  lw          $a2, 0x7C($a1)
    ctx->pc = 0x388decu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 124)));
    // 0x388df0: 0x8cc507c4  lw          $a1, 0x7C4($a2)
    ctx->pc = 0x388df0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1988)));
    // 0x388df4: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x388df4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x388df8: 0xacc507c4  sw          $a1, 0x7C4($a2)
    ctx->pc = 0x388df8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1988), GPR_U32(ctx, 5));
    // 0x388dfc: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x388dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x388e00: 0x8ca6007c  lw          $a2, 0x7C($a1)
    ctx->pc = 0x388e00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 124)));
    // 0x388e04: 0x8cc509b4  lw          $a1, 0x9B4($a2)
    ctx->pc = 0x388e04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2484)));
    // 0x388e08: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x388e08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x388e0c: 0xacc509b4  sw          $a1, 0x9B4($a2)
    ctx->pc = 0x388e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2484), GPR_U32(ctx, 5));
    // 0x388e10: 0xae0404c4  sw          $a0, 0x4C4($s0)
    ctx->pc = 0x388e10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1220), GPR_U32(ctx, 4));
    // 0x388e14: 0xae0404c8  sw          $a0, 0x4C8($s0)
    ctx->pc = 0x388e14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1224), GPR_U32(ctx, 4));
    // 0x388e18: 0xae0404cc  sw          $a0, 0x4CC($s0)
    ctx->pc = 0x388e18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1228), GPR_U32(ctx, 4));
    // 0x388e1c: 0xae0304c4  sw          $v1, 0x4C4($s0)
    ctx->pc = 0x388e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1220), GPR_U32(ctx, 3));
    // 0x388e20: 0xae0304c8  sw          $v1, 0x4C8($s0)
    ctx->pc = 0x388e20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1224), GPR_U32(ctx, 3));
    // 0x388e24: 0xae0304cc  sw          $v1, 0x4CC($s0)
    ctx->pc = 0x388e24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1228), GPR_U32(ctx, 3));
label_388e28:
    // 0x388e28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x388e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x388e2c: 0xa2032b08  sb          $v1, 0x2B08($s0)
    ctx->pc = 0x388e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11016), (uint8_t)GPR_U32(ctx, 3));
    // 0x388e30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x388e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x388e34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x388e34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x388e38: 0x3e00008  jr          $ra
    ctx->pc = 0x388E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x388E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388E38u;
        // 0x388e3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x388E38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x388E40u;
}
