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

// Function: sub_003B4D50
// Address: 0x3b4d50 - 0x3b4f10
void sub_003B4D50_0x3b4d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B4D50_0x3b4d50");
#endif

    switch (ctx->pc) {
        case 0x3b4da4u: goto label_3b4da4;
        case 0x3b4dacu: goto label_3b4dac;
        case 0x3b4df0u: goto label_3b4df0;
        case 0x3b4e00u: goto label_3b4e00;
        case 0x3b4e10u: goto label_3b4e10;
        case 0x3b4e20u: goto label_3b4e20;
        case 0x3b4e34u: goto label_3b4e34;
        case 0x3b4e48u: goto label_3b4e48;
        case 0x3b4e68u: goto label_3b4e68;
        case 0x3b4e70u: goto label_3b4e70;
        case 0x3b4e80u: goto label_3b4e80;
        case 0x3b4e90u: goto label_3b4e90;
        case 0x3b4eacu: goto label_3b4eac;
        case 0x3b4ec8u: goto label_3b4ec8;
        case 0x3b4efcu: goto label_3b4efc;
        default: break;
    }

    ctx->pc = 0x3b4d50u;

    // 0x3b4d50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b4d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b4d54: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3b4d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3b4d58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3b4d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3b4d5c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3b4d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3b4d60: 0x9085000b  lbu         $a1, 0xB($a0)
    ctx->pc = 0x3b4d60u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11)));
    // 0x3b4d64: 0x10a30056  beq         $a1, $v1, . + 4 + (0x56 << 2)
    ctx->pc = 0x3B4D64u;
    {
        const bool branch_taken_0x3b4d64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3B4D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4D64u;
        // 0x3b4d68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4d64) {
            ctx->pc = 0x3B4EC0u;
            goto label_3b4ec0;
        }
    }
    ctx->pc = 0x3B4D6Cu;
    // 0x3b4d6c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3b4d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b4d70: 0x10a30045  beq         $a1, $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x3B4D70u;
    {
        const bool branch_taken_0x3b4d70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3B4D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4D70u;
        // 0x3b4d74: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4d70) {
            ctx->pc = 0x3B4E88u;
            goto label_3b4e88;
        }
    }
    ctx->pc = 0x3B4D78u;
    // 0x3b4d78: 0x10a30031  beq         $a1, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x3B4D78u;
    {
        const bool branch_taken_0x3b4d78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b4d78) {
            ctx->pc = 0x3B4E40u;
            goto label_3b4e40;
        }
    }
    ctx->pc = 0x3B4D80u;
    // 0x3b4d80: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B4D80u;
    {
        const bool branch_taken_0x3b4d80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b4d80) {
            ctx->pc = 0x3B4D90u;
            goto label_3b4d90;
        }
    }
    ctx->pc = 0x3B4D88u;
    // 0x3b4d88: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x3B4D88u;
    {
        const bool branch_taken_0x3b4d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b4d88) {
            ctx->pc = 0x3B4F00u;
            goto label_3b4f00;
        }
    }
    ctx->pc = 0x3B4D90u;
label_3b4d90:
    // 0x3b4d90: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x3b4d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3b4d94: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3b4d94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3b4d98: 0xa202000b  sb          $v0, 0xB($s0)
    ctx->pc = 0x3b4d98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b4d9c: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x3B4D9Cu;
    SET_GPR_U32(ctx, 31, 0x3B4DA4u);
    ctx->pc = 0x3B4DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4D9Cu;
    // 0x3b4da0: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x3B4D9Cu, 0x3B4DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4DA4u;
label_3b4da4:
    // 0x3b4da4: 0xc09c424  jal         func_271090
    ctx->pc = 0x3B4DA4u;
    SET_GPR_U32(ctx, 31, 0x3B4DACu);
    ctx->pc = 0x271090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271090u, 0x3B4DA4u, 0x3B4DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4DACu;
label_3b4dac:
    // 0x3b4dac: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3b4dacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3b4db0: 0x3c02ffbf  lui         $v0, 0xFFBF
    ctx->pc = 0x3b4db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65471 << 16));
    // 0x3b4db4: 0x8c26ceb8  lw          $a2, -0x3148($at)
    ctx->pc = 0x3b4db4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x3b4db8: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x3b4db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x3b4dbc: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3b4dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3b4dc0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3b4dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3b4dc4: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x3b4dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x3b4dc8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x3b4dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3b4dcc: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x3b4dccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x3b4dd0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3b4dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3b4dd4: 0xac23ceb8  sw          $v1, -0x3148($at)
    ctx->pc = 0x3b4dd4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x3b4dd8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3b4dd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3b4ddc: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x3b4ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x3b4de0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3b4de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3b4de4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3b4de4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3b4de8: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x3B4DE8u;
    SET_GPR_U32(ctx, 31, 0x3B4DF0u);
    ctx->pc = 0x3B4DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4DE8u;
    // 0x3b4dec: 0xac22ceb8  sw          $v0, -0x3148($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x3B4DE8u, 0x3B4DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4DF0u;
label_3b4df0:
    // 0x3b4df0: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3b4df0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3b4df4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x3b4df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3b4df8: 0xc04ca14  jal         func_132850
    ctx->pc = 0x3B4DF8u;
    SET_GPR_U32(ctx, 31, 0x3B4E00u);
    ctx->pc = 0x3B4DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4DF8u;
    // 0x3b4dfc: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132850u, 0x3B4DF8u, 0x3B4E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4E00u;
label_3b4e00:
    // 0x3b4e00: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3b4e00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3b4e04: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x3b4e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3b4e08: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x3B4E08u;
    SET_GPR_U32(ctx, 31, 0x3B4E10u);
    ctx->pc = 0x3B4E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4E08u;
    // 0x3b4e0c: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x3B4E08u, 0x3B4E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4E10u;
label_3b4e10:
    // 0x3b4e10: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3b4e10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3b4e14: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x3b4e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3b4e18: 0xc04ca14  jal         func_132850
    ctx->pc = 0x3B4E18u;
    SET_GPR_U32(ctx, 31, 0x3B4E20u);
    ctx->pc = 0x3B4E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4E18u;
    // 0x3b4e1c: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132850u, 0x3B4E18u, 0x3B4E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4E20u;
label_3b4e20:
    // 0x3b4e20: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3b4e20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3b4e24: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x3b4e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x3b4e28: 0x8c22fc98  lw          $v0, -0x368($at)
    ctx->pc = 0x3b4e28u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81FC98u));
    // 0x3b4e2c: 0xc0550b0  jal         func_1542C0
    ctx->pc = 0x3B4E2Cu;
    SET_GPR_U32(ctx, 31, 0x3B4E34u);
    ctx->pc = 0x3B4E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4E2Cu;
    // 0x3b4e30: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1542C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1542C0u, 0x3B4E2Cu, 0x3B4E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4E34u;
label_3b4e34:
    // 0x3b4e34: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x3B4E34u;
    {
        const bool branch_taken_0x3b4e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b4e34) {
            ctx->pc = 0x3B4F00u;
            goto label_3b4f00;
        }
    }
    ctx->pc = 0x3B4E3Cu;
    // 0x3b4e3c: 0x0  nop
    ctx->pc = 0x3b4e3cu;
    // NOP
label_3b4e40:
    // 0x3b4e40: 0xc05551c  jal         func_155470
    ctx->pc = 0x3B4E40u;
    SET_GPR_U32(ctx, 31, 0x3B4E48u);
    ctx->pc = 0x3B4E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4E40u;
    // 0x3b4e44: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155470u, 0x3B4E40u, 0x3B4E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4E48u;
label_3b4e48:
    // 0x3b4e48: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x3B4E48u;
    {
        const bool branch_taken_0x3b4e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b4e48) {
            ctx->pc = 0x3B4F00u;
            goto label_3b4f00;
        }
    }
    ctx->pc = 0x3B4E50u;
    // 0x3b4e50: 0x9202000b  lbu         $v0, 0xB($s0)
    ctx->pc = 0x3b4e50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
    // 0x3b4e54: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x3b4e54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x3b4e58: 0x2484fee0  addiu       $a0, $a0, -0x120
    ctx->pc = 0x3b4e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967008));
    // 0x3b4e5c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3b4e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3b4e60: 0xc0f0140  jal         func_3C0500
    ctx->pc = 0x3B4E60u;
    SET_GPR_U32(ctx, 31, 0x3B4E68u);
    ctx->pc = 0x3B4E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4E60u;
    // 0x3b4e64: 0xa202000b  sb          $v0, 0xB($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 11), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0500u, 0x3B4E60u, 0x3B4E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4E68u;
label_3b4e68:
    // 0x3b4e68: 0xc0c70c8  jal         func_31C320
    ctx->pc = 0x3B4E68u;
    SET_GPR_U32(ctx, 31, 0x3B4E70u);
    ctx->pc = 0x3B4E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4E68u;
    // 0x3b4e6c: 0x24040ec2  addiu       $a0, $zero, 0xEC2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3778));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C320u, 0x3B4E68u, 0x3B4E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4E70u;
label_3b4e70:
    // 0x3b4e70: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x3b4e70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x3b4e74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3b4e74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4e78: 0xc052ec4  jal         func_14BB10
    ctx->pc = 0x3B4E78u;
    SET_GPR_U32(ctx, 31, 0x3B4E80u);
    ctx->pc = 0x3B4E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4E78u;
    // 0x3b4e7c: 0x24842620  addiu       $a0, $a0, 0x2620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BB10u, 0x3B4E78u, 0x3B4E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4E80u;
label_3b4e80:
    // 0x3b4e80: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x3B4E80u;
    {
        const bool branch_taken_0x3b4e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b4e80) {
            ctx->pc = 0x3B4F00u;
            goto label_3b4f00;
        }
    }
    ctx->pc = 0x3B4E88u;
label_3b4e88:
    // 0x3b4e88: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x3B4E88u;
    SET_GPR_U32(ctx, 31, 0x3B4E90u);
    ctx->pc = 0x3B4E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4E88u;
    // 0x3b4e8c: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x3B4E88u, 0x3B4E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4E90u;
label_3b4e90:
    // 0x3b4e90: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3B4E90u;
    {
        const bool branch_taken_0x3b4e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B4E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4E90u;
        // 0x3b4e94: 0x3c040082  lui         $a0, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4e90) {
            ctx->pc = 0x3B4F00u;
            goto label_3b4f00;
        }
    }
    ctx->pc = 0x3B4E98u;
    // 0x3b4e98: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3b4e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3b4e9c: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x3b4e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x3b4ea0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x3b4ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3b4ea4: 0xc04cd28  jal         func_1334A0
    ctx->pc = 0x3B4EA4u;
    SET_GPR_U32(ctx, 31, 0x3B4EACu);
    ctx->pc = 0x3B4EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4EA4u;
    // 0x3b4ea8: 0x34460d0e  ori         $a2, $v0, 0xD0E (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3342);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A0u, 0x3B4EA4u, 0x3B4EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4EACu;
label_3b4eac:
    // 0x3b4eac: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3b4eacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x3b4eb0: 0x9203000b  lbu         $v1, 0xB($s0)
    ctx->pc = 0x3b4eb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
    // 0x3b4eb4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b4eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b4eb8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3B4EB8u;
    {
        const bool branch_taken_0x3b4eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4EB8u;
        // 0x3b4ebc: 0xa203000b  sb          $v1, 0xB($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4eb8) {
            ctx->pc = 0x3B4F00u;
            goto label_3b4f00;
        }
    }
    ctx->pc = 0x3B4EC0u;
label_3b4ec0:
    // 0x3b4ec0: 0xc0ed420  jal         func_3B5080
    ctx->pc = 0x3B4EC0u;
    SET_GPR_U32(ctx, 31, 0x3B4EC8u);
    ctx->pc = 0x3B5080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5080u, 0x3B4EC0u, 0x3B4EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4EC8u;
label_3b4ec8:
    // 0x3b4ec8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3b4ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b4ecc: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3b4eccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3b4ed0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3b4ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3b4ed4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3b4ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3b4ed8: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x3b4ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x3b4edc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b4edcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4ee0: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3b4ee0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3b4ee4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b4ee4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4ee8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3b4ee8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4eec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3b4eecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4ef0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3b4ef0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4ef4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3B4EF4u;
    SET_GPR_U32(ctx, 31, 0x3B4EFCu);
    ctx->pc = 0x3B4EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4EF4u;
    // 0x3b4ef8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3B4EF4u, 0x3B4EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4EFCu;
label_3b4efc:
    // 0x3b4efc: 0x0  nop
    ctx->pc = 0x3b4efcu;
    // NOP
label_3b4f00:
    // 0x3b4f00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3b4f00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b4f04: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3b4f04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b4f08: 0x3e00008  jr          $ra
    ctx->pc = 0x3B4F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B4F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4F08u;
        // 0x3b4f0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4F08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B4F10u;
}
