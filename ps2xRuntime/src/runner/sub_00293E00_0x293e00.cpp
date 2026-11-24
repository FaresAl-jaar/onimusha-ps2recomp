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

// Function: sub_00293E00
// Address: 0x293e00 - 0x293f50
void sub_00293E00_0x293e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00293E00_0x293e00");
#endif

    switch (ctx->pc) {
        case 0x293e4cu: goto label_293e4c;
        case 0x293e60u: goto label_293e60;
        case 0x293e68u: goto label_293e68;
        case 0x293e84u: goto label_293e84;
        case 0x293e90u: goto label_293e90;
        case 0x293ea0u: goto label_293ea0;
        case 0x293ebcu: goto label_293ebc;
        case 0x293ec8u: goto label_293ec8;
        case 0x293ee0u: goto label_293ee0;
        case 0x293f08u: goto label_293f08;
        case 0x293f28u: goto label_293f28;
        default: break;
    }

    ctx->pc = 0x293e00u;

    // 0x293e00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x293e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x293e04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x293e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x293e08: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x293e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x293e0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x293e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x293e10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x293e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x293e14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x293e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x293e18: 0x9085000a  lbu         $a1, 0xA($a0)
    ctx->pc = 0x293e18u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x293e1c: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x293E1Cu;
    {
        const bool branch_taken_0x293e1c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x293E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293E1Cu;
        // 0x293e20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293e1c) {
            ctx->pc = 0x293E38u;
            goto label_293e38;
        }
    }
    ctx->pc = 0x293E24u;
    // 0x293e24: 0x920408e8  lbu         $a0, 0x8E8($s0)
    ctx->pc = 0x293e24u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x293e28: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x293e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x293e2c: 0x10830042  beq         $a0, $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x293E2Cu;
    {
        const bool branch_taken_0x293e2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x293e2c) {
            ctx->pc = 0x293F38u;
            goto label_293f38;
        }
    }
    ctx->pc = 0x293E34u;
    // 0x293e34: 0x0  nop
    ctx->pc = 0x293e34u;
    // NOP
label_293e38:
    // 0x293e38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x293e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x293e3c: 0x14a20016  bne         $a1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x293E3Cu;
    {
        const bool branch_taken_0x293e3c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x293e3c) {
            ctx->pc = 0x293E98u;
            goto label_293e98;
        }
    }
    ctx->pc = 0x293E44u;
    // 0x293e44: 0xc096c4c  jal         func_25B130
    ctx->pc = 0x293E44u;
    SET_GPR_U32(ctx, 31, 0x293E4Cu);
    ctx->pc = 0x293E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293E44u;
    // 0x293e48: 0x8e042980  lw          $a0, 0x2980($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10624)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x293E44u, 0x293E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293E4Cu;
label_293e4c:
    // 0x293e4c: 0x27a4004f  addiu       $a0, $sp, 0x4F
    ctx->pc = 0x293e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 79));
    // 0x293e50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x293e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293e54: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x293e54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x293e58: 0xc0a2258  jal         func_288960
    ctx->pc = 0x293E58u;
    SET_GPR_U32(ctx, 31, 0x293E60u);
    ctx->pc = 0x293E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293E58u;
    // 0x293e5c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288960u, 0x293E58u, 0x293E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293E60u;
label_293e60:
    // 0x293e60: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x293E60u;
    SET_GPR_U32(ctx, 31, 0x293E68u);
    ctx->pc = 0x293E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293E60u;
    // 0x293e64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x293E60u, 0x293E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293E68u;
label_293e68:
    // 0x293e68: 0x920508e8  lbu         $a1, 0x8E8($s0)
    ctx->pc = 0x293e68u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x293e6c: 0x3c080067  lui         $t0, 0x67
    ctx->pc = 0x293e6cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)103 << 16));
    // 0x293e70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x293e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293e74: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x293e74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293e78: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x293e78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293e7c: 0xc0aa734  jal         func_2A9CD0
    ctx->pc = 0x293E7Cu;
    SET_GPR_U32(ctx, 31, 0x293E84u);
    ctx->pc = 0x293E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293E7Cu;
    // 0x293e80: 0x25086e20  addiu       $t0, $t0, 0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9CD0u, 0x293E7Cu, 0x293E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293E84u;
label_293e84:
    // 0x293e84: 0x8e042980  lw          $a0, 0x2980($s0)
    ctx->pc = 0x293e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10624)));
    // 0x293e88: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x293E88u;
    SET_GPR_U32(ctx, 31, 0x293E90u);
    ctx->pc = 0x293E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293E88u;
    // 0x293e8c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x293E88u, 0x293E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293E90u;
label_293e90:
    // 0x293e90: 0xae112980  sw          $s1, 0x2980($s0)
    ctx->pc = 0x293e90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10624), GPR_U32(ctx, 17));
    // 0x293e94: 0x0  nop
    ctx->pc = 0x293e94u;
    // NOP
label_293e98:
    // 0x293e98: 0xc0a7308  jal         func_29CC20
    ctx->pc = 0x293E98u;
    SET_GPR_U32(ctx, 31, 0x293EA0u);
    ctx->pc = 0x293E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293E98u;
    // 0x293e9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CC20u, 0x293E98u, 0x293EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293EA0u;
label_293ea0:
    // 0x293ea0: 0x8e0206cc  lw          $v0, 0x6CC($s0)
    ctx->pc = 0x293ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1740)));
    // 0x293ea4: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x293ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x293ea8: 0x24050170  addiu       $a1, $zero, 0x170
    ctx->pc = 0x293ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 368));
    // 0x293eac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x293eacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293eb0: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x293eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x293eb4: 0xc049590  jal         func_125640
    ctx->pc = 0x293EB4u;
    SET_GPR_U32(ctx, 31, 0x293EBCu);
    ctx->pc = 0x293EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293EB4u;
    // 0x293eb8: 0xae0206cc  sw          $v0, 0x6CC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x293EB4u, 0x293EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293EBCu;
label_293ebc:
    // 0x293ebc: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x293ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x293ec0: 0xc0991d0  jal         func_264740
    ctx->pc = 0x293EC0u;
    SET_GPR_U32(ctx, 31, 0x293EC8u);
    ctx->pc = 0x293EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293EC0u;
    // 0x293ec4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264740u, 0x293EC0u, 0x293EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293EC8u;
label_293ec8:
    // 0x293ec8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x293ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x293ecc: 0x3c110067  lui         $s1, 0x67
    ctx->pc = 0x293eccu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)103 << 16));
    // 0x293ed0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x293ed0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293ed4: 0xa2020640  sb          $v0, 0x640($s0)
    ctx->pc = 0x293ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1600), (uint8_t)GPR_U32(ctx, 2));
    // 0x293ed8: 0x26316df0  addiu       $s1, $s1, 0x6DF0
    ctx->pc = 0x293ed8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 28144));
    // 0x293edc: 0x0  nop
    ctx->pc = 0x293edcu;
    // NOP
label_293ee0:
    // 0x293ee0: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x293ee0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x293ee4: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x293ee4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x293ee8: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x293EE8u;
    {
        const bool branch_taken_0x293ee8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x293ee8) {
            ctx->pc = 0x293F08u;
            goto label_293f08;
        }
    }
    ctx->pc = 0x293EF0u;
    // 0x293ef0: 0x92260000  lbu         $a2, 0x0($s1)
    ctx->pc = 0x293ef0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x293ef4: 0x26040530  addiu       $a0, $s0, 0x530
    ctx->pc = 0x293ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1328));
    // 0x293ef8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x293ef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293efc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x293efcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293f00: 0xc0b273c  jal         func_2C9CF0
    ctx->pc = 0x293F00u;
    SET_GPR_U32(ctx, 31, 0x293F08u);
    ctx->pc = 0x293F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293F00u;
    // 0x293f04: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9CF0u, 0x293F00u, 0x293F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293F08u;
label_293f08:
    // 0x293f08: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x293f08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x293f0c: 0x2e420016  sltiu       $v0, $s2, 0x16
    ctx->pc = 0x293f0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
    // 0x293f10: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x293F10u;
    {
        const bool branch_taken_0x293f10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x293F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293F10u;
        // 0x293f14: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293f10) {
            ctx->pc = 0x293EE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_293ee0;
        }
    }
    ctx->pc = 0x293F18u;
    // 0x293f18: 0x26040530  addiu       $a0, $s0, 0x530
    ctx->pc = 0x293f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1328));
    // 0x293f1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x293f1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293f20: 0xc0b2b38  jal         func_2CACE0
    ctx->pc = 0x293F20u;
    SET_GPR_U32(ctx, 31, 0x293F28u);
    ctx->pc = 0x293F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293F20u;
    // 0x293f24: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CACE0u, 0x293F20u, 0x293F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293F28u;
label_293f28:
    // 0x293f28: 0x8e0306cc  lw          $v1, 0x6CC($s0)
    ctx->pc = 0x293f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1740)));
    // 0x293f2c: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x293f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x293f30: 0xae0306cc  sw          $v1, 0x6CC($s0)
    ctx->pc = 0x293f30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1740), GPR_U32(ctx, 3));
    // 0x293f34: 0x0  nop
    ctx->pc = 0x293f34u;
    // NOP
label_293f38:
    // 0x293f38: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x293f38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x293f3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x293f3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x293f40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x293f40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x293f44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x293f44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x293f48: 0x3e00008  jr          $ra
    ctx->pc = 0x293F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293F48u;
        // 0x293f4c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x293F50u;
}
