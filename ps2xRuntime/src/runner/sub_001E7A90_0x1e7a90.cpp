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

// Function: sub_001E7A90
// Address: 0x1e7a90 - 0x1e7b64
void sub_001E7A90_0x1e7a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7A90_0x1e7a90");
#endif

    switch (ctx->pc) {
        case 0x1e7a90u: goto label_1e7a90;
        case 0x1e7a94u: goto label_1e7a94;
        case 0x1e7a98u: goto label_1e7a98;
        case 0x1e7a9cu: goto label_1e7a9c;
        case 0x1e7aa0u: goto label_1e7aa0;
        case 0x1e7aa4u: goto label_1e7aa4;
        case 0x1e7aa8u: goto label_1e7aa8;
        case 0x1e7aacu: goto label_1e7aac;
        case 0x1e7ab0u: goto label_1e7ab0;
        case 0x1e7ab4u: goto label_1e7ab4;
        case 0x1e7ab8u: goto label_1e7ab8;
        case 0x1e7abcu: goto label_1e7abc;
        case 0x1e7ac0u: goto label_1e7ac0;
        case 0x1e7ac4u: goto label_1e7ac4;
        case 0x1e7ac8u: goto label_1e7ac8;
        case 0x1e7accu: goto label_1e7acc;
        case 0x1e7ad0u: goto label_1e7ad0;
        case 0x1e7ad4u: goto label_1e7ad4;
        case 0x1e7ad8u: goto label_1e7ad8;
        case 0x1e7adcu: goto label_1e7adc;
        case 0x1e7ae0u: goto label_1e7ae0;
        case 0x1e7ae4u: goto label_1e7ae4;
        case 0x1e7ae8u: goto label_1e7ae8;
        case 0x1e7aecu: goto label_1e7aec;
        case 0x1e7af0u: goto label_1e7af0;
        case 0x1e7af4u: goto label_1e7af4;
        case 0x1e7af8u: goto label_1e7af8;
        case 0x1e7afcu: goto label_1e7afc;
        case 0x1e7b00u: goto label_1e7b00;
        case 0x1e7b04u: goto label_1e7b04;
        case 0x1e7b08u: goto label_1e7b08;
        case 0x1e7b0cu: goto label_1e7b0c;
        case 0x1e7b10u: goto label_1e7b10;
        case 0x1e7b14u: goto label_1e7b14;
        case 0x1e7b18u: goto label_1e7b18;
        case 0x1e7b1cu: goto label_1e7b1c;
        case 0x1e7b20u: goto label_1e7b20;
        case 0x1e7b24u: goto label_1e7b24;
        case 0x1e7b28u: goto label_1e7b28;
        case 0x1e7b2cu: goto label_1e7b2c;
        case 0x1e7b30u: goto label_1e7b30;
        case 0x1e7b34u: goto label_1e7b34;
        case 0x1e7b38u: goto label_1e7b38;
        case 0x1e7b3cu: goto label_1e7b3c;
        case 0x1e7b40u: goto label_1e7b40;
        case 0x1e7b44u: goto label_1e7b44;
        case 0x1e7b48u: goto label_1e7b48;
        case 0x1e7b4cu: goto label_1e7b4c;
        case 0x1e7b50u: goto label_1e7b50;
        case 0x1e7b54u: goto label_1e7b54;
        case 0x1e7b58u: goto label_1e7b58;
        case 0x1e7b5cu: goto label_1e7b5c;
        case 0x1e7b60u: goto label_1e7b60;
        default: break;
    }

    ctx->pc = 0x1e7a90u;

label_1e7a90:
    // 0x1e7a90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e7a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e7a94:
    // 0x1e7a94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e7a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e7a98:
    // 0x1e7a98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e7a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e7a9c:
    // 0x1e7a9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e7a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e7aa0:
    // 0x1e7aa0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e7aa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e7aa4:
    // 0x1e7aa4: 0xc078684  jal         func_1E1A10
label_1e7aa8:
    if (ctx->pc == 0x1E7AA8u) {
        ctx->pc = 0x1E7AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7AA4u;
        // 0x1e7aa8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7AACu;
        goto label_1e7aac;
    }
    ctx->pc = 0x1E7AA4u;
    SET_GPR_U32(ctx, 31, 0x1E7AACu);
    ctx->pc = 0x1E7AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7AA4u;
    // 0x1e7aa8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1A10u, 0x1E7AA4u, 0x1E7AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7AACu;
label_1e7aac:
    // 0x1e7aac: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x1e7aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_1e7ab0:
    // 0x1e7ab0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e7ab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e7ab4:
    // 0x1e7ab4: 0xc076bec  jal         func_1DAFB0
label_1e7ab8:
    if (ctx->pc == 0x1E7AB8u) {
        ctx->pc = 0x1E7AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7AB4u;
        // 0x1e7ab8: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7ABCu;
        goto label_1e7abc;
    }
    ctx->pc = 0x1E7AB4u;
    SET_GPR_U32(ctx, 31, 0x1E7ABCu);
    ctx->pc = 0x1E7AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7AB4u;
    // 0x1e7ab8: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DAFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DAFB0u, 0x1E7AB4u, 0x1E7ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7ABCu;
label_1e7abc:
    // 0x1e7abc: 0x7a020070  lq          $v0, 0x70($s0)
    ctx->pc = 0x1e7abcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 112)));
label_1e7ac0:
    // 0x1e7ac0: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x1e7ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_1e7ac4:
    // 0x1e7ac4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1e7ac4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1e7ac8:
    // 0x1e7ac8: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x1e7ac8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
label_1e7acc:
    // 0x1e7acc: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x1e7accu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
label_1e7ad0:
    // 0x1e7ad0: 0x9205003a  lbu         $a1, 0x3A($s0)
    ctx->pc = 0x1e7ad0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 58)));
label_1e7ad4:
    // 0x1e7ad4: 0x9206003b  lbu         $a2, 0x3B($s0)
    ctx->pc = 0x1e7ad4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 59)));
label_1e7ad8:
    // 0x1e7ad8: 0xc074350  jal         func_1D0D40
label_1e7adc:
    if (ctx->pc == 0x1E7ADCu) {
        ctx->pc = 0x1E7ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7AD8u;
        // 0x1e7adc: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7AE0u;
        goto label_1e7ae0;
    }
    ctx->pc = 0x1E7AD8u;
    SET_GPR_U32(ctx, 31, 0x1E7AE0u);
    ctx->pc = 0x1E7ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7AD8u;
    // 0x1e7adc: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D40u, 0x1E7AD8u, 0x1E7AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7AE0u;
label_1e7ae0:
    // 0x1e7ae0: 0x9205003c  lbu         $a1, 0x3C($s0)
    ctx->pc = 0x1e7ae0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 60)));
label_1e7ae4:
    // 0x1e7ae4: 0x9206003d  lbu         $a2, 0x3D($s0)
    ctx->pc = 0x1e7ae4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 61)));
label_1e7ae8:
    // 0x1e7ae8: 0xc074378  jal         func_1D0DE0
label_1e7aec:
    if (ctx->pc == 0x1E7AECu) {
        ctx->pc = 0x1E7AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7AE8u;
        // 0x1e7aec: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7AF0u;
        goto label_1e7af0;
    }
    ctx->pc = 0x1E7AE8u;
    SET_GPR_U32(ctx, 31, 0x1E7AF0u);
    ctx->pc = 0x1E7AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7AE8u;
    // 0x1e7aec: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0DE0u, 0x1E7AE8u, 0x1E7AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7AF0u;
label_1e7af0:
    // 0x1e7af0: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x1e7af0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
label_1e7af4:
    // 0x1e7af4: 0x92020033  lbu         $v0, 0x33($s0)
    ctx->pc = 0x1e7af4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 51)));
label_1e7af8:
    // 0x1e7af8: 0x92030034  lbu         $v1, 0x34($s0)
    ctx->pc = 0x1e7af8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 52)));
label_1e7afc:
    // 0x1e7afc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e7afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e7b00:
    // 0x1e7b00: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e7b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e7b04:
    // 0x1e7b04: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1e7b04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1e7b08:
    // 0x1e7b08: 0xc0741a4  jal         func_1D0690
label_1e7b0c:
    if (ctx->pc == 0x1E7B0Cu) {
        ctx->pc = 0x1E7B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7B08u;
        // 0x1e7b0c: 0x622018  mult        $a0, $v1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7B10u;
        goto label_1e7b10;
    }
    ctx->pc = 0x1E7B08u;
    SET_GPR_U32(ctx, 31, 0x1E7B10u);
    ctx->pc = 0x1E7B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7B08u;
    // 0x1e7b0c: 0x622018  mult        $a0, $v1, $v0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x1E7B08u, 0x1E7B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7B10u;
label_1e7b10:
    // 0x1e7b10: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x1e7b10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
label_1e7b14:
    // 0x1e7b14: 0x8e040090  lw          $a0, 0x90($s0)
    ctx->pc = 0x1e7b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_1e7b18:
    // 0x1e7b18: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_1e7b1c:
    if (ctx->pc == 0x1E7B1Cu) {
        ctx->pc = 0x1E7B20u;
        goto label_1e7b20;
    }
    ctx->pc = 0x1E7B18u;
    {
        const bool branch_taken_0x1e7b18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7b18) {
            ctx->pc = 0x1E7B38u;
            goto label_1e7b38;
        }
    }
    ctx->pc = 0x1E7B20u;
label_1e7b20:
    // 0x1e7b20: 0x8e190020  lw          $t9, 0x20($s0)
    ctx->pc = 0x1e7b20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e7b24:
    // 0x1e7b24: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e7b24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e7b28:
    // 0x1e7b28: 0x320f809  jalr        $t9
label_1e7b2c:
    if (ctx->pc == 0x1E7B2Cu) {
        ctx->pc = 0x1E7B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7B28u;
        // 0x1e7b2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7B30u;
        goto label_1e7b30;
    }
    ctx->pc = 0x1E7B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E7B30u);
        ctx->pc = 0x1E7B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7B28u;
        // 0x1e7b2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7B28u, 0x1E7B30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E7B30u;
label_1e7b30:
    // 0x1e7b30: 0x10000007  b           . + 4 + (0x7 << 2)
label_1e7b34:
    if (ctx->pc == 0x1E7B34u) {
        ctx->pc = 0x1E7B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7B30u;
        // 0x1e7b34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7B38u;
        goto label_1e7b38;
    }
    ctx->pc = 0x1E7B30u;
    {
        const bool branch_taken_0x1e7b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7B30u;
        // 0x1e7b34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7b30) {
            ctx->pc = 0x1E7B50u;
            goto label_1e7b50;
        }
    }
    ctx->pc = 0x1E7B38u;
label_1e7b38:
    // 0x1e7b38: 0x92060034  lbu         $a2, 0x34($s0)
    ctx->pc = 0x1e7b38u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 52)));
label_1e7b3c:
    // 0x1e7b3c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e7b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1e7b40:
    // 0x1e7b40: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e7b40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e7b44:
    // 0x1e7b44: 0xc074f74  jal         func_1D3DD0
label_1e7b48:
    if (ctx->pc == 0x1E7B48u) {
        ctx->pc = 0x1E7B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7B44u;
        // 0x1e7b48: 0x92050033  lbu         $a1, 0x33($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 51)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7B4Cu;
        goto label_1e7b4c;
    }
    ctx->pc = 0x1E7B44u;
    SET_GPR_U32(ctx, 31, 0x1E7B4Cu);
    ctx->pc = 0x1E7B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7B44u;
    // 0x1e7b48: 0x92050033  lbu         $a1, 0x33($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 51)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3DD0u, 0x1E7B44u, 0x1E7B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7B4Cu;
label_1e7b4c:
    // 0x1e7b4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e7b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e7b50:
    // 0x1e7b50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e7b50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e7b54:
    // 0x1e7b54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e7b54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e7b58:
    // 0x1e7b58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e7b58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e7b5c:
    // 0x1e7b5c: 0x3e00008  jr          $ra
label_1e7b60:
    if (ctx->pc == 0x1E7B60u) {
        ctx->pc = 0x1E7B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7B5Cu;
        // 0x1e7b60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7B64u;
        goto label_fallthrough_0x1e7b5c;
    }
    ctx->pc = 0x1E7B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7B5Cu;
        // 0x1e7b60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e7b5c:
    ctx->pc = 0x1E7B64u;
}
