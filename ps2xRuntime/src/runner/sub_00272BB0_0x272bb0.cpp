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

// Function: sub_00272BB0
// Address: 0x272bb0 - 0x272fa8
void sub_00272BB0_0x272bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00272BB0_0x272bb0");
#endif

    switch (ctx->pc) {
        case 0x272bf8u: goto label_272bf8;
        case 0x272c28u: goto label_272c28;
        case 0x272c3cu: goto label_272c3c;
        case 0x272c58u: goto label_272c58;
        case 0x272cccu: goto label_272ccc;
        case 0x272cfcu: goto label_272cfc;
        case 0x272dbcu: goto label_272dbc;
        case 0x272dccu: goto label_272dcc;
        case 0x272e14u: goto label_272e14;
        case 0x272e1cu: goto label_272e1c;
        case 0x272e60u: goto label_272e60;
        case 0x272e68u: goto label_272e68;
        case 0x272eacu: goto label_272eac;
        case 0x272eb4u: goto label_272eb4;
        case 0x272ef8u: goto label_272ef8;
        case 0x272f00u: goto label_272f00;
        case 0x272f44u: goto label_272f44;
        case 0x272f4cu: goto label_272f4c;
        case 0x272f8cu: goto label_272f8c;
        case 0x272f94u: goto label_272f94;
        default: break;
    }

    ctx->pc = 0x272bb0u;

    // 0x272bb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x272bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x272bb4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x272bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x272bb8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x272bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x272bbc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x272bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x272bc0: 0x90850004  lbu         $a1, 0x4($a0)
    ctx->pc = 0x272bc0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x272bc4: 0x10a30022  beq         $a1, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x272BC4u;
    {
        const bool branch_taken_0x272bc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x272BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272BC4u;
        // 0x272bc8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272bc4) {
            ctx->pc = 0x272C50u;
            goto label_272c50;
        }
    }
    ctx->pc = 0x272BCCu;
    // 0x272bcc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x272bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x272bd0: 0x10a30017  beq         $a1, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x272BD0u;
    {
        const bool branch_taken_0x272bd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x272bd0) {
            ctx->pc = 0x272C30u;
            goto label_272c30;
        }
    }
    ctx->pc = 0x272BD8u;
    // 0x272bd8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x272BD8u;
    {
        const bool branch_taken_0x272bd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x272bd8) {
            ctx->pc = 0x272BE8u;
            goto label_272be8;
        }
    }
    ctx->pc = 0x272BE0u;
    // 0x272be0: 0x100000ed  b           . + 4 + (0xED << 2)
    ctx->pc = 0x272BE0u;
    {
        const bool branch_taken_0x272be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272be0) {
            ctx->pc = 0x272F98u;
            goto label_272f98;
        }
    }
    ctx->pc = 0x272BE8u;
label_272be8:
    // 0x272be8: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x272be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x272bec: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x272becu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x272bf0: 0xc0957bc  jal         func_255EF0
    ctx->pc = 0x272BF0u;
    SET_GPR_U32(ctx, 31, 0x272BF8u);
    ctx->pc = 0x272BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272BF0u;
    // 0x272bf4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255EF0u, 0x272BF0u, 0x272BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272BF8u;
label_272bf8:
    // 0x272bf8: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x272bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x272bfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x272bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x272c00: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x272c00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x272c04: 0xa3a30037  sb          $v1, 0x37($sp)
    ctx->pc = 0x272c04u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 55), (uint8_t)GPR_U32(ctx, 3));
    // 0x272c08: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x272c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x272c0c: 0xa3a2003a  sb          $v0, 0x3A($sp)
    ctx->pc = 0x272c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 58), (uint8_t)GPR_U32(ctx, 2));
    // 0x272c10: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x272c10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x272c14: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x272c14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x272c18: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x272c18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x272c1c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x272c1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272c20: 0xc09565c  jal         func_255970
    ctx->pc = 0x272C20u;
    SET_GPR_U32(ctx, 31, 0x272C28u);
    ctx->pc = 0x272C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272C20u;
    // 0x272c24: 0x27a90030  addiu       $t1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255970u, 0x272C20u, 0x272C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272C28u;
label_272c28:
    // 0x272c28: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x272C28u;
    {
        const bool branch_taken_0x272c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272c28) {
            ctx->pc = 0x272F98u;
            goto label_272f98;
        }
    }
    ctx->pc = 0x272C30u;
label_272c30:
    // 0x272c30: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x272c30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x272c34: 0xc095150  jal         func_254540
    ctx->pc = 0x272C34u;
    SET_GPR_U32(ctx, 31, 0x272C3Cu);
    ctx->pc = 0x272C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272C34u;
    // 0x272c38: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x272C34u, 0x272C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272C3Cu;
label_272c3c:
    // 0x272c3c: 0x144000d6  bnez        $v0, . + 4 + (0xD6 << 2)
    ctx->pc = 0x272C3Cu;
    {
        const bool branch_taken_0x272c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272C3Cu;
        // 0x272c40: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272c3c) {
            ctx->pc = 0x272F98u;
            goto label_272f98;
        }
    }
    ctx->pc = 0x272C44u;
    // 0x272c44: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x272C44u;
    {
        const bool branch_taken_0x272c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272C44u;
        // 0x272c48: 0xa2030004  sb          $v1, 0x4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272c44) {
            ctx->pc = 0x272F98u;
            goto label_272f98;
        }
    }
    ctx->pc = 0x272C4Cu;
    // 0x272c4c: 0x0  nop
    ctx->pc = 0x272c4cu;
    // NOP
label_272c50:
    // 0x272c50: 0xc09cbec  jal         func_272FB0
    ctx->pc = 0x272C50u;
    SET_GPR_U32(ctx, 31, 0x272C58u);
    ctx->pc = 0x272C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272C50u;
    // 0x272c54: 0x8205002e  lb          $a1, 0x2E($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272FB0u, 0x272C50u, 0x272C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272C58u;
label_272c58:
    // 0x272c58: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x272c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x272c5c: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x272c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x272c60: 0x8c24ea28  lw          $a0, -0x15D8($at)
    ctx->pc = 0x272c60u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x272c64: 0x34630050  ori         $v1, $v1, 0x50
    ctx->pc = 0x272c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)80);
    // 0x272c68: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x272c68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x272c6c: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x272C6Cu;
    {
        const bool branch_taken_0x272c6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x272c6c) {
            ctx->pc = 0x272D00u;
            goto label_272d00;
        }
    }
    ctx->pc = 0x272C74u;
    // 0x272c74: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x272c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x272c78: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x272c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x272c7c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x272c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x272c80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x272c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x272c84: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x272c84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x272c88: 0x8202002e  lb          $v0, 0x2E($s0)
    ctx->pc = 0x272c88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
    // 0x272c8c: 0x64280a  movz        $a1, $v1, $a0
    ctx->pc = 0x272c8cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x272c90: 0x51e3c  dsll32      $v1, $a1, 24
    ctx->pc = 0x272c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 24));
    // 0x272c94: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x272c94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x272c98: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x272c98u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x272c9c: 0x24847180  addiu       $a0, $a0, 0x7180
    ctx->pc = 0x272c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29056));
    // 0x272ca0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x272ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x272ca4: 0xa202002e  sb          $v0, 0x2E($s0)
    ctx->pc = 0x272ca4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 46), (uint8_t)GPR_U32(ctx, 2));
    // 0x272ca8: 0x9603002c  lhu         $v1, 0x2C($s0)
    ctx->pc = 0x272ca8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x272cac: 0x8202002e  lb          $v0, 0x2E($s0)
    ctx->pc = 0x272cacu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
    // 0x272cb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x272cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x272cb4: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x272cb4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x272cb8: 0x0  nop
    ctx->pc = 0x272cb8u;
    // NOP
    // 0x272cbc: 0x0  nop
    ctx->pc = 0x272cbcu;
    // NOP
    // 0x272cc0: 0x1010  mfhi        $v0
    ctx->pc = 0x272cc0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x272cc4: 0xc0b78d0  jal         func_2DE340
    ctx->pc = 0x272CC4u;
    SET_GPR_U32(ctx, 31, 0x272CCCu);
    ctx->pc = 0x272CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272CC4u;
    // 0x272cc8: 0xa202002e  sb          $v0, 0x2E($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 46), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE340u, 0x272CC4u, 0x272CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272CCCu;
label_272ccc:
    // 0x272ccc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x272cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x272cd0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x272cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x272cd4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x272cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x272cd8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x272cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x272cdc: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x272cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x272ce0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x272ce0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272ce4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x272ce4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272ce8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x272ce8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272cec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x272cecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272cf0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x272cf0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272cf4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x272CF4u;
    SET_GPR_U32(ctx, 31, 0x272CFCu);
    ctx->pc = 0x272CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272CF4u;
    // 0x272cf8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x272CF4u, 0x272CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272CFCu;
label_272cfc:
    // 0x272cfc: 0x0  nop
    ctx->pc = 0x272cfcu;
    // NOP
label_272d00:
    // 0x272d00: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x272d00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x272d04: 0x8c24ea24  lw          $a0, -0x15DC($at)
    ctx->pc = 0x272d04u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EEA24u));
    // 0x272d08: 0x30836000  andi        $v1, $a0, 0x6000
    ctx->pc = 0x272d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)24576);
    // 0x272d0c: 0x106000a2  beqz        $v1, . + 4 + (0xA2 << 2)
    ctx->pc = 0x272D0Cu;
    {
        const bool branch_taken_0x272d0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x272D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272D0Cu;
        // 0x272d10: 0x30832000  andi        $v1, $a0, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x272d0c) {
            ctx->pc = 0x272F98u;
            goto label_272f98;
        }
    }
    ctx->pc = 0x272D14u;
    // 0x272d14: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x272D14u;
    {
        const bool branch_taken_0x272d14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x272d14) {
            ctx->pc = 0x272D30u;
            goto label_272d30;
        }
    }
    ctx->pc = 0x272D1Cu;
    // 0x272d1c: 0x8203002e  lb          $v1, 0x2E($s0)
    ctx->pc = 0x272d1cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
    // 0x272d20: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x272d20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x272d24: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x272d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x272d28: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x272D28u;
    {
        const bool branch_taken_0x272d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272D28u;
        // 0x272d2c: 0x9463000c  lhu         $v1, 0xC($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272d28) {
            ctx->pc = 0x272D34u;
            goto label_272d34;
        }
    }
    ctx->pc = 0x272D30u;
label_272d30:
    // 0x272d30: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x272d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_272d34:
    // 0x272d34: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x272d34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x272d38: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x272d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x272d3c: 0x10c50086  beq         $a2, $a1, . + 4 + (0x86 << 2)
    ctx->pc = 0x272D3Cu;
    {
        const bool branch_taken_0x272d3c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x272d3c) {
            ctx->pc = 0x272F58u;
            goto label_272f58;
        }
    }
    ctx->pc = 0x272D44u;
    // 0x272d44: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x272d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x272d48: 0x10c3006f  beq         $a2, $v1, . + 4 + (0x6F << 2)
    ctx->pc = 0x272D48u;
    {
        const bool branch_taken_0x272d48 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x272D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272D48u;
        // 0x272d4c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272d48) {
            ctx->pc = 0x272F08u;
            goto label_272f08;
        }
    }
    ctx->pc = 0x272D50u;
    // 0x272d50: 0x10c4005b  beq         $a2, $a0, . + 4 + (0x5B << 2)
    ctx->pc = 0x272D50u;
    {
        const bool branch_taken_0x272d50 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        ctx->pc = 0x272D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272D50u;
        // 0x272d54: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272d50) {
            ctx->pc = 0x272EC0u;
            goto label_272ec0;
        }
    }
    ctx->pc = 0x272D58u;
    // 0x272d58: 0x10c30045  beq         $a2, $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x272D58u;
    {
        const bool branch_taken_0x272d58 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x272d58) {
            ctx->pc = 0x272E70u;
            goto label_272e70;
        }
    }
    ctx->pc = 0x272D60u;
    // 0x272d60: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x272d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x272d64: 0x10c30030  beq         $a2, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x272D64u;
    {
        const bool branch_taken_0x272d64 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x272D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272D64u;
        // 0x272d68: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272d64) {
            ctx->pc = 0x272E28u;
            goto label_272e28;
        }
    }
    ctx->pc = 0x272D6Cu;
    // 0x272d6c: 0x10c3001a  beq         $a2, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x272D6Cu;
    {
        const bool branch_taken_0x272d6c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x272d6c) {
            ctx->pc = 0x272DD8u;
            goto label_272dd8;
        }
    }
    ctx->pc = 0x272D74u;
    // 0x272d74: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x272d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x272d78: 0x10c30003  beq         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x272D78u;
    {
        const bool branch_taken_0x272d78 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x272d78) {
            ctx->pc = 0x272D88u;
            goto label_272d88;
        }
    }
    ctx->pc = 0x272D80u;
    // 0x272d80: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x272D80u;
    {
        const bool branch_taken_0x272d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272d80) {
            ctx->pc = 0x272F98u;
            goto label_272f98;
        }
    }
    ctx->pc = 0x272D88u;
label_272d88:
    // 0x272d88: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x272d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x272d8c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x272d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x272d90: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x272d90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x272d94: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x272d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x272d98: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x272d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x272d9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x272d9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272da0: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x272da0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x272da4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x272da4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272da8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x272da8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272dac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x272dacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272db0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x272db0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272db4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x272DB4u;
    SET_GPR_U32(ctx, 31, 0x272DBCu);
    ctx->pc = 0x272DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272DB4u;
    // 0x272db8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x272DB4u, 0x272DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272DBCu;
label_272dbc:
    // 0x272dbc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x272dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x272dc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x272dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272dc4: 0xc09ca84  jal         func_272A10
    ctx->pc = 0x272DC4u;
    SET_GPR_U32(ctx, 31, 0x272DCCu);
    ctx->pc = 0x272DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272DC4u;
    // 0x272dc8: 0xa2020002  sb          $v0, 0x2($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272A10u, 0x272DC4u, 0x272DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272DCCu;
label_272dcc:
    // 0x272dcc: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x272DCCu;
    {
        const bool branch_taken_0x272dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272dcc) {
            ctx->pc = 0x272F98u;
            goto label_272f98;
        }
    }
    ctx->pc = 0x272DD4u;
    // 0x272dd4: 0x0  nop
    ctx->pc = 0x272dd4u;
    // NOP
label_272dd8:
    // 0x272dd8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x272dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x272ddc: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x272ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x272de0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x272de0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x272de4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x272de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x272de8: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x272de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x272dec: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x272decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x272df0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x272df0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272df4: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x272df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x272df8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x272df8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272dfc: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x272dfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x272e00: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x272e00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272e04: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x272e04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272e08: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x272e08u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272e0c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x272E0Cu;
    SET_GPR_U32(ctx, 31, 0x272E14u);
    ctx->pc = 0x272E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272E0Cu;
    // 0x272e10: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x272E0Cu, 0x272E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272E14u;
label_272e14:
    // 0x272e14: 0xc09ca84  jal         func_272A10
    ctx->pc = 0x272E14u;
    SET_GPR_U32(ctx, 31, 0x272E1Cu);
    ctx->pc = 0x272E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272E14u;
    // 0x272e18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272A10u, 0x272E14u, 0x272E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272E1Cu;
label_272e1c:
    // 0x272e1c: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x272E1Cu;
    {
        const bool branch_taken_0x272e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272e1c) {
            ctx->pc = 0x272F98u;
            goto label_272f98;
        }
    }
    ctx->pc = 0x272E24u;
    // 0x272e24: 0x0  nop
    ctx->pc = 0x272e24u;
    // NOP
label_272e28:
    // 0x272e28: 0xa2040002  sb          $a0, 0x2($s0)
    ctx->pc = 0x272e28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x272e2c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x272e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x272e30: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x272e30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x272e34: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x272e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x272e38: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x272e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x272e3c: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x272e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x272e40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x272e40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272e44: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x272e44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x272e48: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x272e48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272e4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x272e4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272e50: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x272e50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272e54: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x272e54u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272e58: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x272E58u;
    SET_GPR_U32(ctx, 31, 0x272E60u);
    ctx->pc = 0x272E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272E58u;
    // 0x272e5c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x272E58u, 0x272E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272E60u;
label_272e60:
    // 0x272e60: 0xc09ca84  jal         func_272A10
    ctx->pc = 0x272E60u;
    SET_GPR_U32(ctx, 31, 0x272E68u);
    ctx->pc = 0x272E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272E60u;
    // 0x272e64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272A10u, 0x272E60u, 0x272E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272E68u;
label_272e68:
    // 0x272e68: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x272E68u;
    {
        const bool branch_taken_0x272e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272e68) {
            ctx->pc = 0x272F98u;
            goto label_272f98;
        }
    }
    ctx->pc = 0x272E70u;
label_272e70:
    // 0x272e70: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x272e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x272e74: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x272e74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x272e78: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x272e78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x272e7c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x272e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x272e80: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x272e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x272e84: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x272e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x272e88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x272e88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272e8c: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x272e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x272e90: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x272e90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272e94: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x272e94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x272e98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x272e98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272e9c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x272e9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272ea0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x272ea0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272ea4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x272EA4u;
    SET_GPR_U32(ctx, 31, 0x272EACu);
    ctx->pc = 0x272EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272EA4u;
    // 0x272ea8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x272EA4u, 0x272EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272EACu;
label_272eac:
    // 0x272eac: 0xc09ca84  jal         func_272A10
    ctx->pc = 0x272EACu;
    SET_GPR_U32(ctx, 31, 0x272EB4u);
    ctx->pc = 0x272EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272EACu;
    // 0x272eb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272A10u, 0x272EACu, 0x272EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272EB4u;
label_272eb4:
    // 0x272eb4: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x272EB4u;
    {
        const bool branch_taken_0x272eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272eb4) {
            ctx->pc = 0x272F98u;
            goto label_272f98;
        }
    }
    ctx->pc = 0x272EBCu;
    // 0x272ebc: 0x0  nop
    ctx->pc = 0x272ebcu;
    // NOP
label_272ec0:
    // 0x272ec0: 0xa2050002  sb          $a1, 0x2($s0)
    ctx->pc = 0x272ec0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x272ec4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x272ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x272ec8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x272ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x272ecc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x272eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x272ed0: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x272ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x272ed4: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x272ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x272ed8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x272ed8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272edc: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x272edcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x272ee0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x272ee0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272ee4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x272ee4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272ee8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x272ee8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272eec: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x272eecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272ef0: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x272EF0u;
    SET_GPR_U32(ctx, 31, 0x272EF8u);
    ctx->pc = 0x272EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272EF0u;
    // 0x272ef4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x272EF0u, 0x272EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272EF8u;
label_272ef8:
    // 0x272ef8: 0xc09ca84  jal         func_272A10
    ctx->pc = 0x272EF8u;
    SET_GPR_U32(ctx, 31, 0x272F00u);
    ctx->pc = 0x272EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272EF8u;
    // 0x272efc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272A10u, 0x272EF8u, 0x272F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272F00u;
label_272f00:
    // 0x272f00: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x272F00u;
    {
        const bool branch_taken_0x272f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272f00) {
            ctx->pc = 0x272F98u;
            goto label_272f98;
        }
    }
    ctx->pc = 0x272F08u;
label_272f08:
    // 0x272f08: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x272f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x272f0c: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x272f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x272f10: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x272f10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x272f14: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x272f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x272f18: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x272f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x272f1c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x272f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x272f20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x272f20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272f24: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x272f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x272f28: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x272f28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272f2c: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x272f2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x272f30: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x272f30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272f34: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x272f34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272f38: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x272f38u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272f3c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x272F3Cu;
    SET_GPR_U32(ctx, 31, 0x272F44u);
    ctx->pc = 0x272F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272F3Cu;
    // 0x272f40: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x272F3Cu, 0x272F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272F44u;
label_272f44:
    // 0x272f44: 0xc09ca84  jal         func_272A10
    ctx->pc = 0x272F44u;
    SET_GPR_U32(ctx, 31, 0x272F4Cu);
    ctx->pc = 0x272F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272F44u;
    // 0x272f48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272A10u, 0x272F44u, 0x272F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272F4Cu;
label_272f4c:
    // 0x272f4c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x272F4Cu;
    {
        const bool branch_taken_0x272f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272f4c) {
            ctx->pc = 0x272F98u;
            goto label_272f98;
        }
    }
    ctx->pc = 0x272F54u;
    // 0x272f54: 0x0  nop
    ctx->pc = 0x272f54u;
    // NOP
label_272f58:
    // 0x272f58: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x272f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x272f5c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x272f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x272f60: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x272f60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x272f64: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x272f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x272f68: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x272f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x272f6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x272f6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272f70: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x272f70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x272f74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x272f74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272f78: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x272f78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272f7c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x272f7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272f80: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x272f80u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272f84: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x272F84u;
    SET_GPR_U32(ctx, 31, 0x272F8Cu);
    ctx->pc = 0x272F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272F84u;
    // 0x272f88: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x272F84u, 0x272F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272F8Cu;
label_272f8c:
    // 0x272f8c: 0xc09ca84  jal         func_272A10
    ctx->pc = 0x272F8Cu;
    SET_GPR_U32(ctx, 31, 0x272F94u);
    ctx->pc = 0x272F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272F8Cu;
    // 0x272f90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272A10u, 0x272F8Cu, 0x272F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272F94u;
label_272f94:
    // 0x272f94: 0x0  nop
    ctx->pc = 0x272f94u;
    // NOP
label_272f98:
    // 0x272f98: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x272f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x272f9c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x272f9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x272fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x272FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272FA0u;
        // 0x272fa4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272FA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x272FA8u;
}
