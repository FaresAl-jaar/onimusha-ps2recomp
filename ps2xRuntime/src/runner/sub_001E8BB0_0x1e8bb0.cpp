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

// Function: sub_001E8BB0
// Address: 0x1e8bb0 - 0x1e8c8c
void sub_001E8BB0_0x1e8bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8BB0_0x1e8bb0");
#endif

    switch (ctx->pc) {
        case 0x1e8bb0u: goto label_1e8bb0;
        case 0x1e8bb4u: goto label_1e8bb4;
        case 0x1e8bb8u: goto label_1e8bb8;
        case 0x1e8bbcu: goto label_1e8bbc;
        case 0x1e8bc0u: goto label_1e8bc0;
        case 0x1e8bc4u: goto label_1e8bc4;
        case 0x1e8bc8u: goto label_1e8bc8;
        case 0x1e8bccu: goto label_1e8bcc;
        case 0x1e8bd0u: goto label_1e8bd0;
        case 0x1e8bd4u: goto label_1e8bd4;
        case 0x1e8bd8u: goto label_1e8bd8;
        case 0x1e8bdcu: goto label_1e8bdc;
        case 0x1e8be0u: goto label_1e8be0;
        case 0x1e8be4u: goto label_1e8be4;
        case 0x1e8be8u: goto label_1e8be8;
        case 0x1e8becu: goto label_1e8bec;
        case 0x1e8bf0u: goto label_1e8bf0;
        case 0x1e8bf4u: goto label_1e8bf4;
        case 0x1e8bf8u: goto label_1e8bf8;
        case 0x1e8bfcu: goto label_1e8bfc;
        case 0x1e8c00u: goto label_1e8c00;
        case 0x1e8c04u: goto label_1e8c04;
        case 0x1e8c08u: goto label_1e8c08;
        case 0x1e8c0cu: goto label_1e8c0c;
        case 0x1e8c10u: goto label_1e8c10;
        case 0x1e8c14u: goto label_1e8c14;
        case 0x1e8c18u: goto label_1e8c18;
        case 0x1e8c1cu: goto label_1e8c1c;
        case 0x1e8c20u: goto label_1e8c20;
        case 0x1e8c24u: goto label_1e8c24;
        case 0x1e8c28u: goto label_1e8c28;
        case 0x1e8c2cu: goto label_1e8c2c;
        case 0x1e8c30u: goto label_1e8c30;
        case 0x1e8c34u: goto label_1e8c34;
        case 0x1e8c38u: goto label_1e8c38;
        case 0x1e8c3cu: goto label_1e8c3c;
        case 0x1e8c40u: goto label_1e8c40;
        case 0x1e8c44u: goto label_1e8c44;
        case 0x1e8c48u: goto label_1e8c48;
        case 0x1e8c4cu: goto label_1e8c4c;
        case 0x1e8c50u: goto label_1e8c50;
        case 0x1e8c54u: goto label_1e8c54;
        case 0x1e8c58u: goto label_1e8c58;
        case 0x1e8c5cu: goto label_1e8c5c;
        case 0x1e8c60u: goto label_1e8c60;
        case 0x1e8c64u: goto label_1e8c64;
        case 0x1e8c68u: goto label_1e8c68;
        case 0x1e8c6cu: goto label_1e8c6c;
        case 0x1e8c70u: goto label_1e8c70;
        case 0x1e8c74u: goto label_1e8c74;
        case 0x1e8c78u: goto label_1e8c78;
        case 0x1e8c7cu: goto label_1e8c7c;
        case 0x1e8c80u: goto label_1e8c80;
        case 0x1e8c84u: goto label_1e8c84;
        case 0x1e8c88u: goto label_1e8c88;
        default: break;
    }

    ctx->pc = 0x1e8bb0u;

label_1e8bb0:
    // 0x1e8bb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e8bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e8bb4:
    // 0x1e8bb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e8bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e8bb8:
    // 0x1e8bb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e8bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e8bbc:
    // 0x1e8bbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e8bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e8bc0:
    // 0x1e8bc0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e8bc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e8bc4:
    // 0x1e8bc4: 0xc078684  jal         func_1E1A10
label_1e8bc8:
    if (ctx->pc == 0x1E8BC8u) {
        ctx->pc = 0x1E8BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8BC4u;
        // 0x1e8bc8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8BCCu;
        goto label_1e8bcc;
    }
    ctx->pc = 0x1E8BC4u;
    SET_GPR_U32(ctx, 31, 0x1E8BCCu);
    ctx->pc = 0x1E8BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8BC4u;
    // 0x1e8bc8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1A10u, 0x1E8BC4u, 0x1E8BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8BCCu;
label_1e8bcc:
    // 0x1e8bcc: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x1e8bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_1e8bd0:
    // 0x1e8bd0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e8bd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e8bd4:
    // 0x1e8bd4: 0xc076bec  jal         func_1DAFB0
label_1e8bd8:
    if (ctx->pc == 0x1E8BD8u) {
        ctx->pc = 0x1E8BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8BD4u;
        // 0x1e8bd8: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8BDCu;
        goto label_1e8bdc;
    }
    ctx->pc = 0x1E8BD4u;
    SET_GPR_U32(ctx, 31, 0x1E8BDCu);
    ctx->pc = 0x1E8BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8BD4u;
    // 0x1e8bd8: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DAFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DAFB0u, 0x1E8BD4u, 0x1E8BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8BDCu;
label_1e8bdc:
    // 0x1e8bdc: 0x7a020080  lq          $v0, 0x80($s0)
    ctx->pc = 0x1e8bdcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 128)));
label_1e8be0:
    // 0x1e8be0: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x1e8be0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_1e8be4:
    // 0x1e8be4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1e8be4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1e8be8:
    // 0x1e8be8: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x1e8be8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
label_1e8bec:
    // 0x1e8bec: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x1e8becu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
label_1e8bf0:
    // 0x1e8bf0: 0x9205003a  lbu         $a1, 0x3A($s0)
    ctx->pc = 0x1e8bf0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 58)));
label_1e8bf4:
    // 0x1e8bf4: 0x9206003b  lbu         $a2, 0x3B($s0)
    ctx->pc = 0x1e8bf4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 59)));
label_1e8bf8:
    // 0x1e8bf8: 0xc074350  jal         func_1D0D40
label_1e8bfc:
    if (ctx->pc == 0x1E8BFCu) {
        ctx->pc = 0x1E8BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8BF8u;
        // 0x1e8bfc: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8C00u;
        goto label_1e8c00;
    }
    ctx->pc = 0x1E8BF8u;
    SET_GPR_U32(ctx, 31, 0x1E8C00u);
    ctx->pc = 0x1E8BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8BF8u;
    // 0x1e8bfc: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D40u, 0x1E8BF8u, 0x1E8C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8C00u;
label_1e8c00:
    // 0x1e8c00: 0x9205003c  lbu         $a1, 0x3C($s0)
    ctx->pc = 0x1e8c00u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 60)));
label_1e8c04:
    // 0x1e8c04: 0x9206003d  lbu         $a2, 0x3D($s0)
    ctx->pc = 0x1e8c04u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 61)));
label_1e8c08:
    // 0x1e8c08: 0xc074378  jal         func_1D0DE0
label_1e8c0c:
    if (ctx->pc == 0x1E8C0Cu) {
        ctx->pc = 0x1E8C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8C08u;
        // 0x1e8c0c: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8C10u;
        goto label_1e8c10;
    }
    ctx->pc = 0x1E8C08u;
    SET_GPR_U32(ctx, 31, 0x1E8C10u);
    ctx->pc = 0x1E8C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8C08u;
    // 0x1e8c0c: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0DE0u, 0x1E8C08u, 0x1E8C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8C10u;
label_1e8c10:
    // 0x1e8c10: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x1e8c10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_1e8c14:
    // 0x1e8c14: 0x92020033  lbu         $v0, 0x33($s0)
    ctx->pc = 0x1e8c14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 51)));
label_1e8c18:
    // 0x1e8c18: 0x92030034  lbu         $v1, 0x34($s0)
    ctx->pc = 0x1e8c18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 52)));
label_1e8c1c:
    // 0x1e8c1c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e8c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e8c20:
    // 0x1e8c20: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e8c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e8c24:
    // 0x1e8c24: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1e8c24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1e8c28:
    // 0x1e8c28: 0xc0741a4  jal         func_1D0690
label_1e8c2c:
    if (ctx->pc == 0x1E8C2Cu) {
        ctx->pc = 0x1E8C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8C28u;
        // 0x1e8c2c: 0x622018  mult        $a0, $v1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8C30u;
        goto label_1e8c30;
    }
    ctx->pc = 0x1E8C28u;
    SET_GPR_U32(ctx, 31, 0x1E8C30u);
    ctx->pc = 0x1E8C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8C28u;
    // 0x1e8c2c: 0x622018  mult        $a0, $v1, $v0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x1E8C28u, 0x1E8C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8C30u;
label_1e8c30:
    // 0x1e8c30: 0xae0200a0  sw          $v0, 0xA0($s0)
    ctx->pc = 0x1e8c30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
label_1e8c34:
    // 0x1e8c34: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x1e8c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_1e8c38:
    // 0x1e8c38: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_1e8c3c:
    if (ctx->pc == 0x1E8C3Cu) {
        ctx->pc = 0x1E8C40u;
        goto label_1e8c40;
    }
    ctx->pc = 0x1E8C38u;
    {
        const bool branch_taken_0x1e8c38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8c38) {
            ctx->pc = 0x1E8C58u;
            goto label_1e8c58;
        }
    }
    ctx->pc = 0x1E8C40u;
label_1e8c40:
    // 0x1e8c40: 0x8e190020  lw          $t9, 0x20($s0)
    ctx->pc = 0x1e8c40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e8c44:
    // 0x1e8c44: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e8c44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e8c48:
    // 0x1e8c48: 0x320f809  jalr        $t9
label_1e8c4c:
    if (ctx->pc == 0x1E8C4Cu) {
        ctx->pc = 0x1E8C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8C48u;
        // 0x1e8c4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8C50u;
        goto label_1e8c50;
    }
    ctx->pc = 0x1E8C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E8C50u);
        ctx->pc = 0x1E8C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8C48u;
        // 0x1e8c4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8C48u, 0x1E8C50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E8C50u;
label_1e8c50:
    // 0x1e8c50: 0x10000009  b           . + 4 + (0x9 << 2)
label_1e8c54:
    if (ctx->pc == 0x1E8C54u) {
        ctx->pc = 0x1E8C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8C50u;
        // 0x1e8c54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8C58u;
        goto label_1e8c58;
    }
    ctx->pc = 0x1E8C50u;
    {
        const bool branch_taken_0x1e8c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8C50u;
        // 0x1e8c54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8c50) {
            ctx->pc = 0x1E8C78u;
            goto label_1e8c78;
        }
    }
    ctx->pc = 0x1E8C58u;
label_1e8c58:
    // 0x1e8c58: 0x92050033  lbu         $a1, 0x33($s0)
    ctx->pc = 0x1e8c58u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 51)));
label_1e8c5c:
    // 0x1e8c5c: 0x92060034  lbu         $a2, 0x34($s0)
    ctx->pc = 0x1e8c5cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 52)));
label_1e8c60:
    // 0x1e8c60: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e8c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1e8c64:
    // 0x1e8c64: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e8c64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e8c68:
    // 0x1e8c68: 0xc075004  jal         func_1D4010
label_1e8c6c:
    if (ctx->pc == 0x1E8C6Cu) {
        ctx->pc = 0x1E8C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8C68u;
        // 0x1e8c6c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8C70u;
        goto label_1e8c70;
    }
    ctx->pc = 0x1E8C68u;
    SET_GPR_U32(ctx, 31, 0x1E8C70u);
    ctx->pc = 0x1E8C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8C68u;
    // 0x1e8c6c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4010u, 0x1E8C68u, 0x1E8C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8C70u;
label_1e8c70:
    // 0x1e8c70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e8c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e8c74:
    // 0x1e8c74: 0x0  nop
    ctx->pc = 0x1e8c74u;
    // NOP
label_1e8c78:
    // 0x1e8c78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e8c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e8c7c:
    // 0x1e8c7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e8c7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e8c80:
    // 0x1e8c80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e8c80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e8c84:
    // 0x1e8c84: 0x3e00008  jr          $ra
label_1e8c88:
    if (ctx->pc == 0x1E8C88u) {
        ctx->pc = 0x1E8C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8C84u;
        // 0x1e8c88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8C8Cu;
        goto label_fallthrough_0x1e8c84;
    }
    ctx->pc = 0x1E8C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8C84u;
        // 0x1e8c88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8C84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e8c84:
    ctx->pc = 0x1E8C8Cu;
}
